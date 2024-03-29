//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIModifyBlurmap : CIFilter
{
    CIImage *inputImage;
    CIImage *inputPersonAlpha;
    CIImage *inputHairAlpha;
    CIImage *inputFaceMaskDeltaImage;
    NSNumber *inputScale;
    NSNumber *inputDistanceAdd;
    NSNumber *inputSmoothstepMin;
    NSNumber *inputSmoothstepMax;
    NSNumber *inputMaxBlur;
    NSNumber *inputApertureScaling;
    NSNumber *inputRelativeApertureScalingStrength;
    NSNumber *inputPersonDistance;
    NSNumber *inputPersonThreshold;
    CIVector *inputPersonAdditive;
    CIVector *inputPersonSubtractive;
    NSNumber *inputPersonMaxBlur;
    NSNumber *inputHairDistance;
    NSNumber *inputHairThreshold;
    CIVector *inputHairAdditive;
    CIVector *inputHairSubtractive;
    NSNumber *inputHairMaxBlur;
    NSNumber *inputProtectBodyStrength;
    CIVector *inputLeftEyeX;
    CIVector *inputLeftEyeY;
    CIVector *inputRightEyeX;
    CIVector *inputRightEyeY;
    CIVector *inputFaceMidPointX;
    CIVector *inputFaceMidPointY;
    NSNumber *inputEyeProtectionMaxFaces;
    NSNumber *inputEyeProtectionFaceWeightsSmoothStepMin;
    NSNumber *inputEyeProtectionFaceWeightsSmoothStepMax;
    NSNumber *inputEyeProtectionOvalDimsDistanceScale;
    NSNumber *inputEyeProtectionOvalDimsDistanceOffset;
    NSNumber *inputEyeProtectionOvalDimsRadiusHorizontal;
    NSNumber *inputEyeProtectionOvalDimsRadiusVertical;
    NSNumber *inputEyeProtectionOvalFallOffSmoothStepMin;
    NSNumber *inputEyeProtectionOvalFallOffSmoothStepMax;
    NSNumber *inputEyeProtectionPersonMaskSmoothStepMin;
    NSNumber *inputEyeProtectionPersonMaskSmoothStepMax;
    NSNumber *inputEyeProtectionPreventStrength;
    NSNumber *inputEyeProtectionSubtractiveMaxBlur;
    NSNumber *inputEyeProtectionSubtractiveApertureScaling;
}

+ (id)customAttributes;
@property(retain) NSNumber *inputEyeProtectionSubtractiveApertureScaling; // @synthesize inputEyeProtectionSubtractiveApertureScaling;
@property(retain) NSNumber *inputEyeProtectionSubtractiveMaxBlur; // @synthesize inputEyeProtectionSubtractiveMaxBlur;
@property(retain) NSNumber *inputEyeProtectionPreventStrength; // @synthesize inputEyeProtectionPreventStrength;
@property(retain) NSNumber *inputEyeProtectionPersonMaskSmoothStepMax; // @synthesize inputEyeProtectionPersonMaskSmoothStepMax;
@property(retain) NSNumber *inputEyeProtectionPersonMaskSmoothStepMin; // @synthesize inputEyeProtectionPersonMaskSmoothStepMin;
@property(retain) NSNumber *inputEyeProtectionOvalFallOffSmoothStepMax; // @synthesize inputEyeProtectionOvalFallOffSmoothStepMax;
@property(retain) NSNumber *inputEyeProtectionOvalFallOffSmoothStepMin; // @synthesize inputEyeProtectionOvalFallOffSmoothStepMin;
@property(retain) NSNumber *inputEyeProtectionOvalDimsRadiusVertical; // @synthesize inputEyeProtectionOvalDimsRadiusVertical;
@property(retain) NSNumber *inputEyeProtectionOvalDimsRadiusHorizontal; // @synthesize inputEyeProtectionOvalDimsRadiusHorizontal;
@property(retain) NSNumber *inputEyeProtectionOvalDimsDistanceOffset; // @synthesize inputEyeProtectionOvalDimsDistanceOffset;
@property(retain) NSNumber *inputEyeProtectionOvalDimsDistanceScale; // @synthesize inputEyeProtectionOvalDimsDistanceScale;
@property(retain) NSNumber *inputEyeProtectionFaceWeightsSmoothStepMax; // @synthesize inputEyeProtectionFaceWeightsSmoothStepMax;
@property(retain) NSNumber *inputEyeProtectionFaceWeightsSmoothStepMin; // @synthesize inputEyeProtectionFaceWeightsSmoothStepMin;
@property(retain) NSNumber *inputEyeProtectionMaxFaces; // @synthesize inputEyeProtectionMaxFaces;
@property(retain) CIVector *inputFaceMidPointY; // @synthesize inputFaceMidPointY;
@property(retain) CIVector *inputFaceMidPointX; // @synthesize inputFaceMidPointX;
@property(retain) CIVector *inputRightEyeY; // @synthesize inputRightEyeY;
@property(retain) CIVector *inputRightEyeX; // @synthesize inputRightEyeX;
@property(retain) CIVector *inputLeftEyeY; // @synthesize inputLeftEyeY;
@property(retain) CIVector *inputLeftEyeX; // @synthesize inputLeftEyeX;
@property(retain) NSNumber *inputProtectBodyStrength; // @synthesize inputProtectBodyStrength;
@property(retain) NSNumber *inputHairMaxBlur; // @synthesize inputHairMaxBlur;
@property(retain) CIVector *inputHairSubtractive; // @synthesize inputHairSubtractive;
@property(retain) CIVector *inputHairAdditive; // @synthesize inputHairAdditive;
@property(retain) NSNumber *inputHairThreshold; // @synthesize inputHairThreshold;
@property(retain) NSNumber *inputHairDistance; // @synthesize inputHairDistance;
@property(retain) NSNumber *inputPersonMaxBlur; // @synthesize inputPersonMaxBlur;
@property(retain) CIVector *inputPersonSubtractive; // @synthesize inputPersonSubtractive;
@property(retain) CIVector *inputPersonAdditive; // @synthesize inputPersonAdditive;
@property(retain) NSNumber *inputPersonThreshold; // @synthesize inputPersonThreshold;
@property(retain) NSNumber *inputPersonDistance; // @synthesize inputPersonDistance;
@property(retain) NSNumber *inputRelativeApertureScalingStrength; // @synthesize inputRelativeApertureScalingStrength;
@property(retain) NSNumber *inputApertureScaling; // @synthesize inputApertureScaling;
@property(retain) NSNumber *inputMaxBlur; // @synthesize inputMaxBlur;
@property(retain) NSNumber *inputSmoothstepMax; // @synthesize inputSmoothstepMax;
@property(retain) NSNumber *inputSmoothstepMin; // @synthesize inputSmoothstepMin;
@property(retain) NSNumber *inputDistanceAdd; // @synthesize inputDistanceAdd;
@property(retain) NSNumber *inputScale; // @synthesize inputScale;
@property(retain) CIImage *inputFaceMaskDeltaImage; // @synthesize inputFaceMaskDeltaImage;
@property(retain) CIImage *inputHairAlpha; // @synthesize inputHairAlpha;
@property(retain) CIImage *inputPersonAlpha; // @synthesize inputPersonAlpha;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;

@end

