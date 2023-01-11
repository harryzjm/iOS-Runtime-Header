//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TDImageColorHistogram : NSObject
{
    struct _histogram_ARGB_t {
        unsigned long long tbl[4][1024];
    } _histogram;
    struct vImage_Buffer _imageBuffer;
    struct vImage_CGImageFormat _imageFormat;
    _Bool _isMonochrome;
}

- (double)intersection:(id)arg1;
@property(readonly) _Bool isMonochrome;
- (id)initWithCGImage:(struct CGImage *)arg1;

@end

