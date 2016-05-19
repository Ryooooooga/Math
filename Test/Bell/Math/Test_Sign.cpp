//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#include <limits>
#include "../../../Bell/Math/Sign.hpp"

using Bell::Math::sign;
using Bell::Math::isNaN;

static_assert(sign( 0) ==  0, "");
static_assert(sign(+1) == +1, "");
static_assert(sign(+3) == +1, "");
static_assert(sign(-1) == -1, "");
static_assert(sign(-5) == -1, "");

static_assert(sign( 0.f) ==  0.f, "");
static_assert(sign(+1.f) == +1.f, "");
static_assert(sign(+3.f) == +1.f, "");
static_assert(sign(-1.f) == -1.f, "");
static_assert(sign(-5.f) == -1.f, "");
static_assert(-sign(std::numeric_limits<float>::infinity()) == -1.f, "");
static_assert(+sign(std::numeric_limits<float>::infinity()) == +1.f, "");
static_assert(isNaN(sign(std::numeric_limits<float>::quiet_NaN())), "");
static_assert(isNaN(sign(std::numeric_limits<float>::signaling_NaN())), "");

static_assert(sign( 0.) ==  0., "");
static_assert(sign(+1.) == +1., "");
static_assert(sign(+3.) == +1., "");
static_assert(sign(-1.) == -1., "");
static_assert(sign(-5.) == -1., "");
static_assert(-sign(std::numeric_limits<double>::infinity()) == -1.f, "");
static_assert(+sign(std::numeric_limits<double>::infinity()) == +1.f, "");
static_assert(isNaN(sign(std::numeric_limits<double>::quiet_NaN())), "");
static_assert(isNaN(sign(std::numeric_limits<double>::signaling_NaN())), "");
