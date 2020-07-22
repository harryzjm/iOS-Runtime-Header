//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCameraCalibrationData, CIImage, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CIDepthEffectApplyBlurMap
{
    CIImage *inputImage;
    CIImage *inputBlurMap;
    NSNumber *inputLumaNoiseScale;
    NSNumber *inputScale;
    AVCameraCalibrationData *inputCalibrationData;
    id inputAuxDataMetadata;
    NSString *inputShape;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSString *inputShape; // @synthesize inputShape;
@property(retain, nonatomic) id inputAuxDataMetadata; // @synthesize inputAuxDataMetadata;
@property(retain, nonatomic) AVCameraCalibrationData *inputCalibrationData; // @synthesize inputCalibrationData;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(copy, nonatomic) NSNumber *inputLumaNoiseScale; // @synthesize inputLumaNoiseScale;
@property(retain) CIImage *inputBlurMap; // @synthesize inputBlurMap;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;

@end

