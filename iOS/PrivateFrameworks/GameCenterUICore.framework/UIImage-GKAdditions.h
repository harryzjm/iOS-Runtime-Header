//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (GKAdditions)
+ (void)_gkloadRemoteImageForURL:(id)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)_gkImageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)_gkImageWithRawData:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 rowBytes:(unsigned long long)arg4 bitmapInfo:(unsigned int)arg5;
- (id)_gkImageByTintingWithColor:(id)arg1;
- (id)_gkImageByAppyingCornerRadius:(double)arg1;
- (id)_gkImageByAddingAlpha;
- (id)_gkImageByScalingToSize:(struct CGSize)arg1;
- (id)_gkImageByScalingToSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)_gkImageByScalingToSize:(struct CGSize)arg1 scale:(double)arg2 padColor:(id)arg3;
- (id)_gkImageByScalingAndCroppingToSize:(struct CGSize)arg1 scale:(double)arg2;
@property(readonly) long long _gkImageOrientation;
@property(readonly) struct CGImage *_gkCGImage;
@property(readonly) double _gkScale;
- (void)_gkReadAtSize:(struct CGSize)arg1 ARGBHostEndianBytes:(CDUnknownBlockType)arg2;
@end

