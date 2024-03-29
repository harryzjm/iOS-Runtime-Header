//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGuidedFilter : CIFilter
{
    CIImage *inputImage;
    CIImage *inputGuideImage;
    NSNumber *inputRadius;
    NSNumber *inputEpsilon;
}

+ (id)customAttributes;
@property(copy) NSNumber *inputEpsilon; // @synthesize inputEpsilon;
@property(copy) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain) CIImage *inputGuideImage; // @synthesize inputGuideImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)computeAB:(id)arg1;
- (id)_swizzleImageYZZ1:(id)arg1;
- (id)_swizzleImageYYZ1:(id)arg1;
- (id)_swizzleImageXXX1:(id)arg1;
- (id)_combineRGB_and_A;
- (id)_finalResult;
- (id)_computeABKernel;
- (id)subtract:(id)arg1 minus:(id)arg2;
- (id)multiplyImages:(id)arg1 imageB:(id)arg2;
- (id)_multiplyImagesKernel;
- (id)_boxFilter:(id)arg1 fullFloat:(_Bool)arg2;
- (id)_fullFloatBoxFilter;
- (id)_upsampleImage:(id)arg1 targetImageSize:(struct CGSize)arg2;
- (id)_downsampledColorImage:(id)arg1;

@end

