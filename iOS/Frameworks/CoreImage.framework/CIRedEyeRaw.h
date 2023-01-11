//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIRedEyeRaw
{
    CIImage *inputPrimary;
    CIImage *inputSecondary;
    CIVector *inputSize;
    CIVector *inputOriginLeft;
    CIVector *inputOriginRight;
    CIVector *inputAxisShortLeft;
    CIVector *inputAxisShortRight;
    CIVector *inputAxisLongLeft;
    CIVector *inputAxisLongRight;
    CIVector *inputPupilCenterLeft;
    CIVector *inputPupilCenterRight;
    NSNumber *inputOrientationHint;
    NSNumber *inputOrientationScale;
    NSNumber *inputRepairSource;
    NSNumber *inputRepairDarken;
    NSNumber *inputRepairChroma;
    NSNumber *inputCutoff;
    NSNumber *inputSpecMin;
    NSNumber *inputSpecMax;
    NSNumber *inputSpecular;
    NSNumber *inputSpecIntensity;
    NSNumber *inputShowMask;
    NSNumber *inputRepairPercent;
    NSNumber *inputInterPeakMin;
    NSNumber *inputRepairPercentile;
    NSNumber *inputClipMin;
    NSNumber *inputMidSpectrumWhiteOffsetsX;
    NSNumber *inputMidSpectrumWhiteOffsetsY;
    NSNumber *inputClosingErosion;
    NSNumber *inputClosingDilation;
    NSNumber *inputSplat;
    NSNumber *inputFlooding;
    NSNumber *inputGamma;
    NSNumber *inputFeathering;
    NSNumber *inputFSmooth;
    NSNumber *inputRepairDither;
    NSNumber *inputRecover;
    NSNumber *inputSpecArea;
    NSNumber *inputSpecAreaScale;
    NSNumber *inputWhiteCutoff;
    NSNumber *inputSpecularCutoff;
    NSNumber *inputAbortDensityLo;
    NSNumber *inputAbortDensityDiff;
    NSNumber *inputCircularity;
    NSNumber *inputIntersect;
    NSNumber *inputSkinThreshold;
    NSNumber *inputSkinThresholdMed;
    NSNumber *inputScleraThreshold;
    NSNumber *inputCenterSpecRad;
    NSNumber *inputFalloffDensity;
    NSNumber *inputFalloffRepair;
    NSNumber *inputFalloffSpecular;
    NSNumber *inputRadiusRepair;
    NSNumber *inputRadiusDensity;
    NSNumber *inputRadiusSpecular;
    NSNumber *inputCentroidIterations;
    NSNumber *inputCentroidGamma;
    NSNumber *inputCentroidRadius;
    NSNumber *inputCentroidRadiusSmall;
    NSNumber *inputSearchLong;
    NSNumber *inputSearchShort;
    NSNumber *inputScale;
    NSNumber *inputParam;
    NSNumber *inputParam2;
    NSNumber *inputParam3;
    NSNumber *inputParam4;
    NSNumber *inputRefilterSpace;
    NSNumber *inputRefilterRange;
    NSNumber *inputDetectWhite;
    NSNumber *inputDetectRed;
    NSNumber *inputMinInterDispersion;
    NSNumber *inputMaxInterDispersion;
    NSNumber *inputMinMaskDiff;
    NSNumber *inputGlintThreshold;
    NSNumber *inputTargetClosing;
    NSNumber *inputUseFaceSegmentationMask;
    NSNumber *inputDetectionThresholdIrisSmall;
    NSNumber *inputDetectionThresholdScleraSmall;
    NSNumber *inputDetectionThresholdSkinSmall;
    NSNumber *inputScleraProtectionThresholdIrisSmall;
    NSNumber *inputScleraProtectionThresholdScleraSmall;
    NSNumber *inputScleraProtectionThresholdSkinSmall;
    NSNumber *inputSkinProtectionThresholdSmall;
    NSNumber *inputDetectionThresholdIrisMedium;
    NSNumber *inputDetectionThresholdScleraMedium;
    NSNumber *inputDetectionThresholdSkinMedium;
    NSNumber *inputScleraProtectionThresholdIrisMedium;
    NSNumber *inputScleraProtectionThresholdScleraMedium;
    NSNumber *inputScleraProtectionThresholdSkinMedium;
    NSNumber *inputSkinProtectionThresholdMedium;
    NSNumber *inputDetectionThresholdIrisLarge;
    NSNumber *inputDetectionThresholdScleraLarge;
    NSNumber *inputDetectionThresholdSkinLarge;
    NSNumber *inputScleraProtectionThresholdIrisLarge;
    NSNumber *inputScleraProtectionThresholdScleraLarge;
    NSNumber *inputScleraProtectionThresholdSkinLarge;
    NSNumber *inputSkinProtectionThresholdLarge;
    CIImage *inputIrisMask;
    CIImage *inputScleraMask;
    CIImage *inputSkinMask;
}

@property(retain, nonatomic) CIImage *inputSkinMask; // @synthesize inputSkinMask;
@property(retain, nonatomic) CIImage *inputScleraMask; // @synthesize inputScleraMask;
@property(retain, nonatomic) CIImage *inputIrisMask; // @synthesize inputIrisMask;
@property(retain, nonatomic) NSNumber *inputSkinProtectionThresholdLarge; // @synthesize inputSkinProtectionThresholdLarge;
@property(retain, nonatomic) NSNumber *inputScleraProtectionThresholdSkinLarge; // @synthesize inputScleraProtectionThresholdSkinLarge;
@property(retain, nonatomic) NSNumber *inputScleraProtectionThresholdScleraLarge; // @synthesize inputScleraProtectionThresholdScleraLarge;
@property(retain, nonatomic) NSNumber *inputScleraProtectionThresholdIrisLarge; // @synthesize inputScleraProtectionThresholdIrisLarge;
@property(retain, nonatomic) NSNumber *inputDetectionThresholdSkinLarge; // @synthesize inputDetectionThresholdSkinLarge;
@property(retain, nonatomic) NSNumber *inputDetectionThresholdScleraLarge; // @synthesize inputDetectionThresholdScleraLarge;
@property(retain, nonatomic) NSNumber *inputDetectionThresholdIrisLarge; // @synthesize inputDetectionThresholdIrisLarge;
@property(retain, nonatomic) NSNumber *inputSkinProtectionThresholdMedium; // @synthesize inputSkinProtectionThresholdMedium;
@property(retain, nonatomic) NSNumber *inputScleraProtectionThresholdSkinMedium; // @synthesize inputScleraProtectionThresholdSkinMedium;
@property(retain, nonatomic) NSNumber *inputScleraProtectionThresholdScleraMedium; // @synthesize inputScleraProtectionThresholdScleraMedium;
@property(retain, nonatomic) NSNumber *inputScleraProtectionThresholdIrisMedium; // @synthesize inputScleraProtectionThresholdIrisMedium;
@property(retain, nonatomic) NSNumber *inputDetectionThresholdSkinMedium; // @synthesize inputDetectionThresholdSkinMedium;
@property(retain, nonatomic) NSNumber *inputDetectionThresholdScleraMedium; // @synthesize inputDetectionThresholdScleraMedium;
@property(retain, nonatomic) NSNumber *inputDetectionThresholdIrisMedium; // @synthesize inputDetectionThresholdIrisMedium;
@property(retain, nonatomic) NSNumber *inputSkinProtectionThresholdSmall; // @synthesize inputSkinProtectionThresholdSmall;
@property(retain, nonatomic) NSNumber *inputScleraProtectionThresholdSkinSmall; // @synthesize inputScleraProtectionThresholdSkinSmall;
@property(retain, nonatomic) NSNumber *inputScleraProtectionThresholdScleraSmall; // @synthesize inputScleraProtectionThresholdScleraSmall;
@property(retain, nonatomic) NSNumber *inputScleraProtectionThresholdIrisSmall; // @synthesize inputScleraProtectionThresholdIrisSmall;
@property(retain, nonatomic) NSNumber *inputDetectionThresholdSkinSmall; // @synthesize inputDetectionThresholdSkinSmall;
@property(retain, nonatomic) NSNumber *inputDetectionThresholdScleraSmall; // @synthesize inputDetectionThresholdScleraSmall;
@property(retain, nonatomic) NSNumber *inputDetectionThresholdIrisSmall; // @synthesize inputDetectionThresholdIrisSmall;
@property(retain, nonatomic) NSNumber *inputUseFaceSegmentationMask; // @synthesize inputUseFaceSegmentationMask;
@property(retain, nonatomic) NSNumber *inputTargetClosing; // @synthesize inputTargetClosing;
@property(retain, nonatomic) NSNumber *inputGlintThreshold; // @synthesize inputGlintThreshold;
@property(retain, nonatomic) NSNumber *inputMinMaskDiff; // @synthesize inputMinMaskDiff;
@property(retain, nonatomic) NSNumber *inputMaxInterDispersion; // @synthesize inputMaxInterDispersion;
@property(retain, nonatomic) NSNumber *inputMinInterDispersion; // @synthesize inputMinInterDispersion;
@property(retain, nonatomic) NSNumber *inputDetectRed; // @synthesize inputDetectRed;
@property(retain, nonatomic) NSNumber *inputDetectWhite; // @synthesize inputDetectWhite;
@property(retain, nonatomic) NSNumber *inputRefilterRange; // @synthesize inputRefilterRange;
@property(retain, nonatomic) NSNumber *inputRefilterSpace; // @synthesize inputRefilterSpace;
@property(retain, nonatomic) NSNumber *inputParam4; // @synthesize inputParam4;
@property(retain, nonatomic) NSNumber *inputParam3; // @synthesize inputParam3;
@property(retain, nonatomic) NSNumber *inputParam2; // @synthesize inputParam2;
@property(retain, nonatomic) NSNumber *inputParam; // @synthesize inputParam;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) NSNumber *inputSearchShort; // @synthesize inputSearchShort;
@property(retain, nonatomic) NSNumber *inputSearchLong; // @synthesize inputSearchLong;
@property(retain, nonatomic) NSNumber *inputCentroidRadiusSmall; // @synthesize inputCentroidRadiusSmall;
@property(retain, nonatomic) NSNumber *inputCentroidRadius; // @synthesize inputCentroidRadius;
@property(retain, nonatomic) NSNumber *inputCentroidGamma; // @synthesize inputCentroidGamma;
@property(retain, nonatomic) NSNumber *inputCentroidIterations; // @synthesize inputCentroidIterations;
@property(retain, nonatomic) NSNumber *inputRadiusSpecular; // @synthesize inputRadiusSpecular;
@property(retain, nonatomic) NSNumber *inputRadiusDensity; // @synthesize inputRadiusDensity;
@property(retain, nonatomic) NSNumber *inputRadiusRepair; // @synthesize inputRadiusRepair;
@property(retain, nonatomic) NSNumber *inputFalloffSpecular; // @synthesize inputFalloffSpecular;
@property(retain, nonatomic) NSNumber *inputFalloffRepair; // @synthesize inputFalloffRepair;
@property(retain, nonatomic) NSNumber *inputFalloffDensity; // @synthesize inputFalloffDensity;
@property(retain, nonatomic) NSNumber *inputCenterSpecRad; // @synthesize inputCenterSpecRad;
@property(retain, nonatomic) NSNumber *inputScleraThreshold; // @synthesize inputScleraThreshold;
@property(retain, nonatomic) NSNumber *inputSkinThresholdMed; // @synthesize inputSkinThresholdMed;
@property(retain, nonatomic) NSNumber *inputSkinThreshold; // @synthesize inputSkinThreshold;
@property(retain, nonatomic) NSNumber *inputIntersect; // @synthesize inputIntersect;
@property(retain, nonatomic) NSNumber *inputCircularity; // @synthesize inputCircularity;
@property(retain, nonatomic) NSNumber *inputAbortDensityDiff; // @synthesize inputAbortDensityDiff;
@property(retain, nonatomic) NSNumber *inputAbortDensityLo; // @synthesize inputAbortDensityLo;
@property(retain, nonatomic) NSNumber *inputSpecularCutoff; // @synthesize inputSpecularCutoff;
@property(retain, nonatomic) NSNumber *inputWhiteCutoff; // @synthesize inputWhiteCutoff;
@property(retain, nonatomic) NSNumber *inputSpecAreaScale; // @synthesize inputSpecAreaScale;
@property(retain, nonatomic) NSNumber *inputSpecArea; // @synthesize inputSpecArea;
@property(retain, nonatomic) NSNumber *inputRecover; // @synthesize inputRecover;
@property(retain, nonatomic) NSNumber *inputRepairDither; // @synthesize inputRepairDither;
@property(retain, nonatomic) NSNumber *inputFSmooth; // @synthesize inputFSmooth;
@property(retain, nonatomic) NSNumber *inputFeathering; // @synthesize inputFeathering;
@property(retain, nonatomic) NSNumber *inputGamma; // @synthesize inputGamma;
@property(retain, nonatomic) NSNumber *inputFlooding; // @synthesize inputFlooding;
@property(retain, nonatomic) NSNumber *inputSplat; // @synthesize inputSplat;
@property(retain, nonatomic) NSNumber *inputClosingDilation; // @synthesize inputClosingDilation;
@property(retain, nonatomic) NSNumber *inputClosingErosion; // @synthesize inputClosingErosion;
@property(retain, nonatomic) NSNumber *inputMidSpectrumWhiteOffsetsY; // @synthesize inputMidSpectrumWhiteOffsetsY;
@property(retain, nonatomic) NSNumber *inputMidSpectrumWhiteOffsetsX; // @synthesize inputMidSpectrumWhiteOffsetsX;
@property(retain, nonatomic) NSNumber *inputClipMin; // @synthesize inputClipMin;
@property(retain, nonatomic) NSNumber *inputRepairPercentile; // @synthesize inputRepairPercentile;
@property(retain, nonatomic) NSNumber *inputInterPeakMin; // @synthesize inputInterPeakMin;
@property(retain, nonatomic) NSNumber *inputRepairPercent; // @synthesize inputRepairPercent;
@property(retain, nonatomic) NSNumber *inputShowMask; // @synthesize inputShowMask;
@property(retain, nonatomic) NSNumber *inputSpecIntensity; // @synthesize inputSpecIntensity;
@property(retain, nonatomic) NSNumber *inputSpecular; // @synthesize inputSpecular;
@property(retain, nonatomic) NSNumber *inputSpecMax; // @synthesize inputSpecMax;
@property(retain, nonatomic) NSNumber *inputSpecMin; // @synthesize inputSpecMin;
@property(retain, nonatomic) NSNumber *inputCutoff; // @synthesize inputCutoff;
@property(retain, nonatomic) NSNumber *inputRepairChroma; // @synthesize inputRepairChroma;
@property(retain, nonatomic) NSNumber *inputRepairDarken; // @synthesize inputRepairDarken;
@property(retain, nonatomic) NSNumber *inputRepairSource; // @synthesize inputRepairSource;
@property(retain, nonatomic) NSNumber *inputOrientationScale; // @synthesize inputOrientationScale;
@property(retain, nonatomic) NSNumber *inputOrientationHint; // @synthesize inputOrientationHint;
@property(retain, nonatomic) CIVector *inputPupilCenterRight; // @synthesize inputPupilCenterRight;
@property(retain, nonatomic) CIVector *inputPupilCenterLeft; // @synthesize inputPupilCenterLeft;
@property(retain, nonatomic) CIVector *inputAxisLongRight; // @synthesize inputAxisLongRight;
@property(retain, nonatomic) CIVector *inputAxisLongLeft; // @synthesize inputAxisLongLeft;
@property(retain, nonatomic) CIVector *inputAxisShortRight; // @synthesize inputAxisShortRight;
@property(retain, nonatomic) CIVector *inputAxisShortLeft; // @synthesize inputAxisShortLeft;
@property(retain, nonatomic) CIVector *inputOriginRight; // @synthesize inputOriginRight;
@property(retain, nonatomic) CIVector *inputOriginLeft; // @synthesize inputOriginLeft;
@property(retain, nonatomic) CIVector *inputSize; // @synthesize inputSize;
@property(retain, nonatomic) CIImage *inputSecondary; // @synthesize inputSecondary;
@property(retain, nonatomic) CIImage *inputPrimary; // @synthesize inputPrimary;
- (id)outputImage;
- (id)skinProtectionMaskWithThreshold:(float)arg1;
- (id)irisProtectionMaskWithThresholdIris:(float)arg1 thresholdSclera:(float)arg2 thresholdSkin:(float)arg3;

@end
