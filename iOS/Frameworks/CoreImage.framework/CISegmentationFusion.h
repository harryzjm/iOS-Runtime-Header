//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, CIVector, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CISegmentationFusion
{
    CIImage *inputImage;
    CIImage *inputMatteImage;
    CIVector *inputAddBlur;
    CIVector *inputRemoveBlur;
    NSNumber *inputApertureScaling;
    NSDictionary *inputTuningParameters;
}

+ (id)customAttributes;
- (id)outputImage;
- (_Bool)_isIdentity;
- (id)kernel;

@end
