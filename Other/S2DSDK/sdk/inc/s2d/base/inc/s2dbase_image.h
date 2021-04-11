//=============================================================================
//
//	[ s2dbase_image.h ]
//
//	the s2d image proccess lib.
//
//	PLATFORM INDEPENDENT!!!ƽ̨�޹�
//
//	Copyright (c) 2006-2009, DingooGames. All rights reserved.
//
//=============================================================================

#ifndef __S2DBASE_IMAGE_H__
#define __S2DBASE_IMAGE_H__

//--------------------------------------------------------------------------------------------------------
#include "s2dbase_common.h"
//--------------------------------------------------------------------------------------------------------
namespace s2d
{
//--------------------------------------------------------------------------------------------------------
struct ImageInfo
{
	ImageInfo( void ) : palette(0), data(0) {}

	void	Free( void )
	{
		SAFE_FREE( palette );
		SAFE_FREE( data );
	}

	u8*		palette;
	u8*		data;
	s32		width;
	s32		height;
	s32		bitdepth;
};
//--------------------------------------------------------------------------------------------------------
result		LoadTGA( const Char* filename, ImageInfo& info );
//--------------------------------------------------------------------------------------------------------
};//namespace s2d
//--------------------------------------------------------------------------------------------------------

#endif//__S2DBASE_IMAGE_H__
