//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CSITextureHelper : NSObject
{
    struct _csibitmap *bmp;
    struct CGColorSpace *colorspaceHint;
    unsigned long long sourceRowbytes;
    unsigned int width;
    unsigned int height;
    unsigned int imageBytes;
    int pixelFormat;
}

- (void)dealloc;

@end

