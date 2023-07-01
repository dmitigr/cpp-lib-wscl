// -*- C++ -*-
//
// Copyright 2023 Dmitry Igrishin
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// This file is generated automatically. Edit lib_version.hpp.in instead!!!!!!!!!!!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#ifndef DMITIGR_WSCL_LIB_VERSION_HPP
#define DMITIGR_WSCL_LIB_VERSION_HPP

#include "dll.hpp"

#include <cstdint>

namespace dmitigr::wscl {

/**
 * @returns The library version.
 *
 * @see version().
 */
DMITIGR_WSCL_API std::int_fast32_t lib_version() noexcept;

} // namespace dmitigr::wscl

#ifndef DMITIGR_WSCL_NOT_HEADER_ONLY
#include "lib_version.cpp"
#endif

#endif  // DMITIGR_WSCL_LIB_VERSION_HPP
