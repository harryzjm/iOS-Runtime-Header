//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class AVCameraCalibrationData, CIImage, CIVector, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CIDepthBlurEffect : CIFilter
{
    CIImage *inputImage;
    CIImage *inputDisparityImage;
    CIImage *inputMatteImage;
    CIImage *inputHairImage;
    CIImage *inputGlassesImage;
    CIImage *inputGainMap;
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
    NSString *inputShape;
}

+ (id)customAttributes;
+ (int)getDraftMode:(id)arg1;
+ (struct CGImageMetadata *)augmentMetadataWithRenderingPropertiesForImage:(id)arg1;
+ (struct CGImageMetadata *)metadataFromDictionary:(id)arg1 metadata:(struct CGImageMetadata *)arg2;
+ (id)tuningParametersFromMetadata:(struct CGImageMetadata *)arg1;
+ (struct CGImageMetadata *)replaceRenderingParameters:(struct CGImageMetadata *)arg1 tuningParameters:(id)arg2;
@property(retain, nonatomic) NSString *inputShape; // @synthesize inputShape;
@property(retain, nonatomic) id inputAuxDataMetadata; // @synthesize inputAuxDataMetadata;
@property(retain, nonatomic) AVCameraCalibrationData *inputCalibrationData; // @synthesize inputCalibrationData;
@property(retain, nonatomic) NSNumber *inputScaleFactor; // @synthesize inputScaleFactor;
@property(retain, nonatomic) CIVector *inputFocusRect; // @synthesize inputFocusRect;
@property(retain) CIVector *inputNosePositions; // @synthesize inputNosePositions;
@property(retain) CIVector *inputChinPositions; // @synthesize inputChinPositions;
@property(retain) CIVector *inputRightEyePositions; // @synthesize inputRightEyePositions;
@property(retain) CIVector *inputLeftEyePositions; // @synthesize inputLeftEyePositions;
@property(retain, nonatomic) NSNumber *inputLumaNoiseScale; // @synthesize inputLumaNoiseScale;
@property(retain, nonatomic) NSNumber *inputAperture; // @synthesize inputAperture;
@property(retain) CIImage *inputGainMap; // @synthesize inputGainMap;
@property(retain) CIImage *inputGlassesImage; // @synthesize inputGlassesImage;
@property(retain) CIImage *inputHairImage; // @synthesize inputHairImage;
@property(retain) CIImage *inputMatteImage; // @synthesize inputMatteImage;
@property(retain) CIImage *inputDisparityImage; // @synthesize inputDisparityImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_getFocusRect:(id)arg1 focusRect:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)prewarm:(id)arg1;

@end

