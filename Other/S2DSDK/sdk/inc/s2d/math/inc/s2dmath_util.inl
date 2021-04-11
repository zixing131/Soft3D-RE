//=============================================================================
//
//	[ s2dmath_util.inl ]
//
//	the s2d util proccess lib.
//
//	Copyright (c) 2006-2009, DingooGames. All rights reserved.
//
//=============================================================================
#ifndef __S2DMATH_UTIL_INL__
#define __S2DMATH_UTIL_INL__

//--------------------------------------------------------------------------------------------------------
namespace s2d
{
//--------------------------------------------------------------------------------------------------------
// test if a number is a pow of 2
inline bool	IsPow2(
				u32 n					//[in] unsigned 32 bits integer
			)
{
	return ( ( n & (n - 1) ) == 0 );
}
//--------------------------------------------------------------------------------------------------------
};//namespace s2d
//--------------------------------------------------------------------------------------------------------

#endif//__S2DMATH_UTIL_INL__
