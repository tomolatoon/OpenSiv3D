﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (C) 2008-2016 Ryo Suzuki
//	Copyright (C) 2016 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# pragma once
# include "Fwd.hpp"
# include "String.hpp"

namespace s3d
{
	String FormatFloat(double value, int32 decimalPlace, bool fixed = false);

	/// <summary>
	/// 数値を文字列で表します。
	/// </summary>
	/// <param name="value">
	///	数値
	///	</param>
	/// <param name="decimalPlace">
	/// 小数点以下の最大桁数
	/// </param>
	/// <returns>
	///	変換した文字列
	///	</returns>
	inline String ToString(float value, int32 decimalPlace = 3)
	{
		return FormatFloat(value, decimalPlace);
	}

	/// <summary>
	/// 数値を文字列で表します。
	/// </summary>
	/// <param name="value">
	///	数値
	///	</param>
	/// <param name="decimalPlace">
	/// 小数点以下の最大桁数
	/// </param>
	/// <returns>
	///	変換した文字列
	///	</returns>
	inline String ToString(double value, int32 decimalPlace = 3)
	{
		return FormatFloat(value, decimalPlace);
	}

	/// <summary>
	/// 数値を文字列で表します。
	/// </summary>
	/// <param name="value">
	///	数値
	///	</param>
	/// <param name="decimalPlace">
	/// 小数点以下の最大桁数
	/// </param>
	/// <returns>
	///	変換した文字列
	///	</returns>
	inline String ToString(long double value, int32 decimalPlace = 3)
	{
		return FormatFloat(static_cast<double>(value), decimalPlace);
	}
}
