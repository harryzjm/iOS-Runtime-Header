//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSData, NSString, _CSIRenditionBlockData, _CUIThemePixelRendition;

__attribute__((visibility("hidden")))
@interface CSIHelper : NSObject
{
    struct _slice slice;
    NSData *csiData;
    struct _csibitmap *bmp;
    int renditionLock;
    _CUIThemePixelRendition *rendition;
    _CSIRenditionBlockData *sharedBlockDataBGRX;
    _CSIRenditionBlockData *sharedBlockDataRGBX;
    _CSIRenditionBlockData *retainedBlockData;
    NSString *blockDataCacheKeyBGRX;
    NSString *blockDataCacheKeyRGBX;
    unsigned long long sourceRowbytes;
    unsigned int shouldCache:1;
    unsigned int usedForDataProvider:1;
    unsigned int _reserved:30;
}

@end

