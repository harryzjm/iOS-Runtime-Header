//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPortraitLightingContour
{
    CIImage *inputImage;
    CIVector *inputCenter;
    CIVector *inputEyes;
    NSNumber *inputWidth;
    NSNumber *inputHeight;
    NSNumber *inputStrength;
    NSNumber *inputRotate;
    NSNumber *inputOrientation;
    NSNumber *inputScale;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) NSNumber *inputOrientation; // @synthesize inputOrientation;
@property(retain, nonatomic) NSNumber *inputStrength; // @synthesize inputStrength;
@property(retain, nonatomic) NSNumber *inputRotate; // @synthesize inputRotate;
@property(retain, nonatomic) NSNumber *inputWidth; // @synthesize inputWidth;
@property(retain, nonatomic) NSNumber *inputHeight; // @synthesize inputHeight;
@property(retain, nonatomic) CIVector *inputEyes; // @synthesize inputEyes;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_contourLightKernel;
- (id)_extractRed;

@end

