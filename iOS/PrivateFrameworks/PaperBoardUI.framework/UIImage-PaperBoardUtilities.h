//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (PaperBoardUtilities)
+ (id)pbui_thumbnailImageForImage:(id)arg1;
+ (id)pbui_imageFromSceneSnapshot:(id)arg1;
+ (id)pbui_imageSnapshotFromLayer:(id)arg1 buffer:(struct __IOSurface *)arg2;
+ (id)pbui_imageWithIOSurface:(id)arg1;
+ (id)pbui_imageWithIOSurface:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (long long)pbui_EXIFOrientation;
- (id)pbui_imageHashData;
- (id)pbui_resizedImageForCurrentMagnifyMode;
- (id)pbui_imageByManipulatingInDeviceColorSpaceWithBlock:(CDUnknownBlockType)arg1;
- (struct CGColorSpace *)pbui_colorSpace;
- (id)pbui_resizeImageToSize:(struct CGSize)arg1;
- (id)pbui_resizeImageToSize:(struct CGSize)arg1 preservingAspectRatio:(_Bool)arg2;
- (id)pbui_scaleImage:(double)arg1 canUseIOSurface:(_Bool)arg2;
- (id)pbui_scaleImage:(double)arg1;
- (id)pbui_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2 preservingAspectRatio:(_Bool)arg3 canUseIOSurface:(_Bool)arg4;
- (id)pbui_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2 canUseIOSurface:(_Bool)arg3;
- (id)pbui_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2 preservingAspectRatio:(_Bool)arg3;
- (id)pbui_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2;
- (id)pbui_CGImageBackedImageUsingDataProvider;
- (id)pbui_CGImageBackedImageWithMaximumBitsPerComponent:(unsigned long long)arg1 skipCIF10FitsInSRGBCheck:(_Bool)arg2;
- (id)pbui_CGImageBackedImageWithMaximumBitsPerComponent:(unsigned long long)arg1;
- (id)pbui_CGImageBackedImage;
- (id)wrappedIOSurface;
@end

