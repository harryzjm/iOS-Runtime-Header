//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CISparseRenderer : CIFilter
{
    CIImage *inputImage;
    CIImage *inputMatteImage;
    NSDictionary *inputTuningParameters;
    NSNumber *inputScale;
    NSNumber *inputApertureScaling;
    NSNumber *inputDraftMode;
    NSNumber *inputAperture;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *inputAperture; // @synthesize inputAperture;
@property(copy, nonatomic) NSNumber *inputDraftMode; // @synthesize inputDraftMode;
@property(copy, nonatomic) NSNumber *inputApertureScaling; // @synthesize inputApertureScaling;
@property(copy, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(retain) CIImage *inputMatteImage; // @synthesize inputMatteImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel:(_Bool)arg1 alpha:(_Bool)arg2;
- (id)_lutKernel:(_Bool)arg1 alpha:(_Bool)arg2;
- (id)baseVecsLUT:(unsigned int)arg1;
- (id)stepsLUT:(unsigned int)arg1;
- (id)baseVecsLUTGenerator;
- (id)stepsLUTGenerator;
- (_Bool)_useD2XRenderer;
- (id)_packageParams:(_Bool)arg1 extent:(struct CGRect)arg2 image:(id)arg3 haveAlpha:(_Bool)arg4;

@end

