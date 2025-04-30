/******************************************************************************
 * Top contributors (to current version):
 *   Aina Niemetz, Andrew Reynolds
 *
 * This file is part of the cvc5 project.
 *
 * Copyright (c) 2009-2025 by the authors listed in the file AUTHORS
 * in the top-level source directory and their institutional affiliations.
 * All rights reserved.  See the file COPYING in the top-level source
 * directory for licensing information.
 * ****************************************************************************
 *
 * Black box testing of the cvc5_types file of the C++ API.
 */

#include <cvc5pp/cvc5.h>

#include <algorithm>

#include "base/output.h"
#include "gtest/gtest.h"

namespace cvc5pp::internal {

namespace test {

class TestApiTypes : public ::testing::Test
{
};

TEST_F(TestApiTypes, printEnum)
{
  std::string expected =
      "LT ARRAY_SORT RTZ UNKNOWN_REASON literals preprocess full "
      "enum "
      "smt_lib_2_6 lfsc";
  {
    std::stringstream ss;
    ss << cvc5pp::Kind::LT << " ";
    ss << cvc5pp::SortKind::ARRAY_SORT << " ";
    ss << cvc5pp::RoundingMode::ROUND_TOWARD_ZERO << " ";
    ss << cvc5pp::UnknownExplanation::UNKNOWN_REASON << " ";
    ss << cvc5pp::modes::BlockModelsMode::LITERALS << " ";
    ss << cvc5pp::modes::LearnedLitType::PREPROCESS << " ";
    ss << cvc5pp::modes::ProofComponent::FULL << " ";
    ss << cvc5pp::modes::FindSynthTarget::ENUM << " ";
    ss << cvc5pp::modes::InputLanguage::SMT_LIB_2_6 << " ";
    ss << cvc5pp::modes::ProofFormat::LFSC;
    ASSERT_EQ(ss.str(), expected);
  }
  {
    std::stringstream ss;
    ss << std::to_string(cvc5pp::Kind::LT) << " ";
    ss << std::to_string(cvc5pp::SortKind::ARRAY_SORT) << " ";
    ss << std::to_string(cvc5pp::RoundingMode::ROUND_TOWARD_ZERO) << " ";
    ss << std::to_string(cvc5pp::UnknownExplanation::UNKNOWN_REASON) << " ";
    ss << std::to_string(cvc5pp::modes::BlockModelsMode::LITERALS) << " ";
    ss << std::to_string(cvc5pp::modes::LearnedLitType::PREPROCESS) << " ";
    ss << std::to_string(cvc5pp::modes::ProofComponent::FULL) << " ";
    ss << std::to_string(cvc5pp::modes::FindSynthTarget::ENUM) << " ";
    ss << std::to_string(cvc5pp::modes::InputLanguage::SMT_LIB_2_6) << " ";
    ss << std::to_string(cvc5pp::modes::ProofFormat::LFSC);
    ASSERT_EQ(ss.str(), expected);
  }
}

}  // namespace test
}  // namespace cvc5pp::internal
