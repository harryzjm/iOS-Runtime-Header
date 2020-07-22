//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCameraCalibrationData, CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDepthBlurEffect
{
    CIImage *inputImage;
    CIImage *inputDisparityImage;
    NSNumber *inputAperture;
    CIVector *inputLeftEyePositions;
    CIVector *inputRightEyePositions;
    CIVector *inputChinPositions;
    CIVector *inputNosePositions;
    CIVector *inputFocusRect;
    NSNumber *inputLumaNoiseScale;
    NSNumber *inputScaleFactor;
    AVCameraCalibrationData *inputCalibrationData;
    id inputAuxDataMetadata;
}

+ (id)customAttributes;
@property(retain, nonatomic) id inputAuxDataMetadata; // @synthesize inputAuxDataMetadata;
@property(copy, nonatomic) AVCameraCalibrationData *inputCalibrationData; // @synthesize inputCalibrationData;
@property(retain, nonatomic) NSNumber *inputScaleFactor; // @synthesize inputScaleFactor;
@property(retain, nonatomic) CIVector *inputFocusRect; // @synthesize inputFocusRect;
@property(retain, nonatomic) CIVector *inputNosePositions; // @synthesize inputNosePositions;
@property(retain, nonatomic) CIVector *inputChinPositions; // @synthesize inputChinPositions;
@property(retain, nonatomic) CIVector *inputRightEyePositions; // @synthesize inputRightEyePositions;
@property(retain, nonatomic) CIVector *inputLeftEyePositions; // @synthesize inputLeftEyePositions;
@property(retain, nonatomic) NSNumber *inputLumaNoiseScale; // @synthesize inputLumaNoiseScale;
@property(retain, nonatomic) NSNumber *inputAperture; // @synthesize inputAperture;
@property(retain) CIImage *inputDisparityImage; // @synthesize inputDisparityImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_getFocusRect:(id)arg1 focusRect:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end

