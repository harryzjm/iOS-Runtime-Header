//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (Utilities)
+ (struct CGRect)vk_aspectFitImageFrameForViewWithFrame:(struct CGRect)arg1 imageSize:(struct CGSize)arg2;
+ (id)vk_imageWithColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)vk_fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2;
+ (id)vk_orientationMetadataFromImageOrientation:(long long)arg1;
+ (id)vk_imageWithData:(id)arg1;
+ (id)vk_imageWithCVPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)vk_imageWithCGImage:(struct CGImage *)arg1;
+ (id)vk_imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)vk_orientedImageFromImage:(id)arg1 toOrientation:(long long)arg2;
+ (id)vk_orientedImageFromImage:(id)arg1 fromOrientation:(long long)arg2;
+ (id)vk_orientedImageFromCGImage:(struct CGImage *)arg1 scale:(double)arg2 transform:(struct CGAffineTransform)arg3;
+ (id)vk_UIImageFromCIImage:(id)arg1;
+ (id)vk_symbolImageWithName:(id)arg1;
+ (id)vk_imageNamed:(id)arg1 withTint:(id)arg2 size:(struct CGSize)arg3;
+ (id)vk_imageNamed:(id)arg1 withTint:(id)arg2;
+ (id)vk_imageWithContentsOfURL:(id)arg1;
- (struct CGRect)vk_cropRectZeroAlpha;
- (id)vk_decodeInBackground;
- (void)vk_decodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)vk_imageDataWithRequirements:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)vk_imageDataWithRequirements:(id)arg1;
- (id)vk_imageDataWithUTType:(id)arg1 metadata:(id)arg2;
- (id)vk_imageDataWithUTType:(id)arg1;
- (id)vk_HEICDataLossless;
- (id)vk_HEICData;
- (id)vk_HEICDataWithCompressionQuality:(double)arg1 orientation:(long long)arg2;
- (id)vk_HEICDataWithCompressionQuality:(double)arg1;
- (id)vk_PNGDataWithOrientation:(long long)arg1;
- (id)vk_PNGData;
- (id)vk_JPEGDataWithOrientation:(long long)arg1;
- (id)vk_JPEGData;
- (unsigned int)vk_cgImagePropertyOrientation;
- (id)vk_horizontallyMirroredImage;
- (long long)vk_imageOrientation;
- (id)vk_ciImage;
- (struct CGImage *)vk_cgImageGeneratingIfNecessary;
- (struct CGImage *)vk_cgImage;
- (id)vk_imageFromRect:(struct CGRect)arg1;
- (id)vk_scaledImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)vk_scaledImageMaxDimension:(double)arg1 scale:(double)arg2;
- (id)vk_scaledImageMinDimension:(double)arg1 scale:(double)arg2;
- (id)vk_imageWithTint:(id)arg1 size:(struct CGSize)arg2;
@end

