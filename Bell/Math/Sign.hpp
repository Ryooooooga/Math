//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#pragma once

#include "IsNaN.hpp"

namespace Bell { namespace Math {

	/**
	 * @brief      符号関数
	 *
	 * @param[in]  x            符号を求める値
	 *
	 * @tparam     NumericType  算術型
	 *
	 * @return     xがNaNならば NaN
	 *             xが負ならば -1
	 *             xが正ならば 1
	 *             xが0ならば 0 を返す
	 */
	template <typename NumericType>
	constexpr std::enable_if_t<std::is_floating_point<NumericType>::value, NumericType> sign(NumericType x) noexcept
	{
		//	MEMO: enable_if for Fuckin' Compiler MSVC: (NAN < 0) == true
		return
			isNaN(x) ? x :
			x < NumericType(0) ? NumericType(-1) :
			x > NumericType(0) ? NumericType(+1) : NumericType(0);
	}

	template <typename NumericType>
	constexpr std::enable_if_t<std::is_integral<NumericType>::value, NumericType> sign(NumericType x) noexcept
	{
		return
			x < NumericType(0) ? NumericType(-1) :
			x > NumericType(0) ? NumericType(+1) : x;
	}

}}	//	namespace Bell::Math
