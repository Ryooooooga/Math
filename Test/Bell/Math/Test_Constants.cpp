//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#include "../../../Bell/Math/Constants.hpp"

using Bell::Math::pi;

static_assert(pi<float>			== 3.1415926535897932384626433832795f, "");
static_assert(pi<double>		== 3.1415926535897932384626433832795 , "");
static_assert(pi<long double>	== 3.1415926535897932384626433832795L, "");
