//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeRendition.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CUIThemeTextureImageRendition : CUIThemeRendition
{
    NSMutableArray *_textureImages;
}

- (id)textureImages;
- (void)dealloc;
- (int)pixelFormat;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1 version:(unsigned int)arg2;

@end

