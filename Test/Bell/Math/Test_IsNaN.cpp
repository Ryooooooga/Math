//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#include <limits>
#include "../../../Bell/Math/IsNaN.hpp"

using Bell::Math::isNaN;

static_assert(isNaN(3.14f) == false, "");
static_assert(isNaN(+std::numeric_limits<float>::infinity()) == false, "");
static_assert(isNaN(-std::numeric_limits<float>::infinity()) == false, "");
static_assert(isNaN(std::numeric_limits<float>::quiet_NaN()) == true, "");
static_assert(isNaN(std::numeric_limits<float>::signaling_NaN()) == true, "");

static_assert(isNaN(3.14) == false, "");
static_assert(isNaN(+std::numeric_limits<double>::infinity()) == false, "");
static_assert(isNaN(-std::numeric_limits<double>::infinity()) == false, "");
static_assert(isNaN(std::numeric_limits<double>::quiet_NaN()) == true, "");
static_assert(isNaN(std::numeric_limits<double>::signaling_NaN()) == true, "");

//static_assert(isNaN(1), "");
