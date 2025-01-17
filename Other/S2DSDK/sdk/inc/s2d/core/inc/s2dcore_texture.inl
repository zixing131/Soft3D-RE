//=============================================================================
//
//	[ s2dcore_texture.inl ]
//
//	the s2d core screen shader proccess lib.
//
//	Copyright (c) 2006-2009, DingooGames. All rights reserved.
//
//=============================================================================
#ifndef __S2DCORE_TEXTURE_INL__
#define __S2DCORE_TEXTURE_INL__

//--------------------------------------------------------------------------------------------------------
namespace s2d
{
//--------------------------------------------------------------------------------------------------------
//### interfaces:
//--------------------------------------------------------------------------------------------------------
/// get texture data ptr
inline void*			Texture::GetPtr( void )
{
	return m_pData_Aligned;
}
//--------------------------------------------------------------------------------------------------------
/// get width
inline u16				Texture::GetWidth( void ) const
{
	return m_iWidth;
}
//--------------------------------------------------------------------------------------------------------
/// get height
inline u16				Texture::GetHeight( void ) const
{
	return m_iHeight;
}
//--------------------------------------------------------------------------------------------------------
/// get bitdepth
inline u8				Texture::GetBitDepth( void ) const
{
	return m_Depth;
}
//--------------------------------------------------------------------------------------------------------
/// get format
inline u16				Texture::GetFormat( void ) const
{
	return m_Format;
}
//--------------------------------------------------------------------------------------------------------
/// get colorkey
inline u8				Texture::GetHasColorKey( void ) const
{
	return m_bHasColorKey;
}
//--------------------------------------------------------------------------------------------------------
/// get colorkey
inline u32				Texture::GetColorKey( void ) const
{
	return m_ColorKey;
}
//--------------------------------------------------------------------------------------------------------
/// get tpow
inline s32				Texture::GetTPow( void ) const
{
	return m_TPow;
}
//--------------------------------------------------------------------------------------------------------
/// get palette
inline Pixel*			Texture::GetPalette( void ) const
{
	return m_pPalette;
}
//--------------------------------------------------------------------------------------------------------
};//namespace s2d
//--------------------------------------------------------------------------------------------------------

#endif//__S2DCORE_TEXTURE_INL__
