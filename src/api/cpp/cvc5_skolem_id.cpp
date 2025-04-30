/******************************************************************************
 * Top contributors (to current version):
 *   Andrew Reynolds
 *
 * This file is part of the cvc5 project.
 *
 * Copyright (c) 2009-2025 by the authors listed in the file AUTHORS
 * in the top-level source directory and their institutional affiliations.
 * All rights reserved.  See the file COPYING in the top-level source
 * directory for licensing information.
 * ****************************************************************************
 *
 * Implementation of skolem id.
 */

#include <cvc5pp/cvc5_skolem_id.h>

#include <iostream>

#include "printer/enum_to_string.h"

namespace std {

std::string to_string(cvc5pp::SkolemId id)
{
  return cvc5pp::internal::toString(id);
}
}  // namespace std

namespace cvc5pp {

std::ostream& operator<<(std::ostream& out, SkolemId id)
{
  out << std::to_string(id);
  return out;
}
}  // namespace cvc5pp

namespace std {

size_t hash<cvc5pp::SkolemId>::operator()(cvc5pp::SkolemId id) const
{
  return static_cast<size_t>(id);
}

}  // namespace std
