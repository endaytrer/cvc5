/******************************************************************************
 * Top contributors (to current version):
 *   Andrew Reynolds, Aina Niemetz, Andres Noetzli
 *
 * This file is part of the cvc5 project.
 *
 * Copyright (c) 2009-2025 by the authors listed in the file AUTHORS
 * in the top-level source directory and their institutional affiliations.
 * All rights reserved.  See the file COPYING in the top-level source
 * directory for licensing information.
 * ****************************************************************************
 *
 * Black box testing of cvc5pp::InteractiveShell for sygus
 */

#include <cvc5pp/cvc5.h>
#include <cvc5pp/cvc5_parser.h>

#include <memory>
#include <sstream>
#include <vector>

#include "main/command_executor.h"
#include "main/interactive_shell.h"
#include "options/base_options.h"
#include "options/language.h"
#include "options/options.h"
#include "test.h"

using namespace cvc5pp::parser;

namespace cvc5pp::internal {
namespace test {

class TestMainBlackInteractiveShellSygus : public TestInternal
{
 protected:
  void SetUp() override
  {
    TestInternal::SetUp();

    d_sin = std::make_unique<std::stringstream>();
    d_sout = std::make_unique<std::stringstream>();

    d_solver.reset(new cvc5pp::Solver(d_tm));
    d_solver->setOption("input-language", "sygus2");
    d_cexec.reset(new main::CommandExecutor(d_solver));
  }

  void TearDown() override
  {
    d_sin.reset(nullptr);
    d_sout.reset(nullptr);
    // ensure that command executor is destroyed before solver
    d_cexec.reset(nullptr);
    d_solver.reset(nullptr);
  }

  /**
   * Read up to maxIterations+1 from the shell and throw an assertion error if
   * it's fewer than minIterations and more than maxIterations. Note that an
   * empty string followed by EOF may be returned as an empty command, and
   * not nullptr (subsequent calls to readAndExecCommands() should return
   * nullptr). E.g., "(synth-fun f (Int) Int)\n" may return two commands: the
   * synth-fun, followed by an empty command, followed by nullptr.
   */
  void countCommands(InteractiveShell& shell,
                     uint32_t minIterations,
                     uint32_t maxIterations)
  {
    uint32_t n = 0;
    while (n <= maxIterations)
    {
      if (!shell.readAndExecCommands())
      {
        break;
      }
      n++;
    }
    ASSERT_LE(n, maxIterations);
    ASSERT_GE(n, minIterations);
  }

  std::unique_ptr<std::stringstream> d_sin;
  std::unique_ptr<std::stringstream> d_sout;
  std::unique_ptr<main::CommandExecutor> d_cexec;
  cvc5pp::TermManager d_tm;
  std::unique_ptr<cvc5pp::Solver> d_solver;
};

TEST_F(TestMainBlackInteractiveShellSygus, test_sygus)
{
  *d_sin << "(synth-fun f (Int) Int)\n\n" << std::flush;
  InteractiveShell shell(d_cexec.get(), *d_sin, *d_sout);
  countCommands(shell, 1, 2);
}

}  // namespace test
}  // namespace cvc5pp::internal
