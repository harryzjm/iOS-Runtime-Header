//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeRendition.h"

@class CUIStructuredThemeStore, NSMutableArray, TXRTextureInfo;

__attribute__((visibility("hidden")))
@interface _CUIThemeTextureRendition : CUIThemeRendition
{
    CUIStructuredThemeStore *_sourceProvider;
    long long _textureInterpretation;
    _Bool _textureSourceImageOpaque;
    TXRTextureInfo *_textureInfo;
    NSMutableArray *_textureMipLevels;
}

- (void).cxx_destruct;
- (id)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 withBufferAllocator:(id)arg4;
- (long long)textureIntepretation;
- (id)provideTextureInfo;
- (id)_texturedImageWithKey:(id)arg1;
- (void)_setStructuredThemeStore:(id)arg1;
- (id)mipLevels;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1 version:(unsigned int)arg2;
- (void)dealloc;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 version:(unsigned int)arg3;

@end

