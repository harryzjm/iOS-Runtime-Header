//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSDImageAdjustments;

@interface TSDImageAdjuster : NSObject
{
    TSDImageAdjustments *mImageAdjustments;
}

- (struct CGImage *)p_newImageFromCIImage:(id)arg1 underlyingImage:(struct CGImage *)arg2;
- (struct CGImage *)newFilteredImageForImage:(struct CGImage *)arg1 enhancedImage:(struct CGImage **)arg2;
- (void)dealloc;
- (id)initWithImageAdjustments:(id)arg1;
- (id)init;

@end

