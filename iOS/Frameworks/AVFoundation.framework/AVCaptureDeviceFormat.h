//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AVCaptureDeviceFormatInternal, NSArray, NSString;

@interface AVCaptureDeviceFormat : NSObject
{
    AVCaptureDeviceFormatInternal *_internal;
}

+ (void)initialize;
- (unsigned int)supportedRawPixelFormat;
- (_Bool)isDepthSupported;
- (_Bool)isDisparitySupported;
- (id)optimizedPhotoFilterNames;
- (id)optimizedVideoPreviewFilterNames;
- (_Bool)supportsQuadraHighResolutionStillImageOutput;
@property(readonly, nonatomic) long long autoFocusSystem;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maxExposureDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 minExposureDuration;
@property(readonly, nonatomic) float maxISO;
@property(readonly, nonatomic) float minISO;
- (id)figCaptureSourceDepthDataFormat;
- (id)figCaptureSourceVideoFormat;
- (id)AVCaptureSessionPresets;
- (CDStruct_79c71658)previewDimensions;
- (CDStruct_79c71658)sensorDimensions;
- (id)vtScalingMode;
- (_Bool)isDefaultActiveFormat;
- (CDStruct_1b6d18a9)defaultActiveMaxFrameDuration;
- (CDStruct_1b6d18a9)defaultActiveMinFrameDuration;
- (int)supportedFormatsArrayIndex;
- (_Bool)needsPhotoPreviewDPCC;
- (_Bool)supportsHighProfileH264;
- (_Bool)isHighResPhotoFormat;
- (_Bool)isPhotoFormat;
- (id)videoZoomSupportedUpscaleStages;
- (id)videoZoomSupportedDownscaleStages;
- (_Bool)isExperimental;
- (int)rawBitDepth;
- (_Bool)isIrisVideoStabilizationSupported;
- (_Bool)isIrisSupported;
- (_Bool)isStereoFusionSupported;
- (_Bool)isSISSupported;
- (_Bool)supportsDynamicCrop;
- (_Bool)supportsLowLightBoost;
- (_Bool)prefersVideoHDREnabledForSessionPreset:(id)arg1;
- (int)supportedStabilizationMethod;
@property(readonly, nonatomic) NSArray *unsupportedCaptureOutputClasses;
@property(readonly, nonatomic) NSArray *supportedDepthDataFormats;
- (_Bool)isWideColorSupported;
@property(readonly, nonatomic) NSArray *supportedColorSpaces;
- (_Bool)supportsHighResolutionStillImageOutput;
@property(readonly, nonatomic) CDStruct_79c71658 highResolutionStillImageDimensions;
- (_Bool)isVideoStabilizationModeSupported:(long long)arg1;
@property(readonly, nonatomic, getter=isVideoHDRSupported) _Bool videoHDRSupported;
@property(readonly, nonatomic, getter=isVideoStabilizationSupported) _Bool videoStabilizationSupported;
@property(readonly, nonatomic) double videoMaxZoomFactorForDepthDataDelivery;
@property(readonly, nonatomic) double videoMinZoomFactorForDepthDataDelivery;
@property(readonly, nonatomic) double videoZoomFactorUpscaleThreshold;
@property(readonly, nonatomic) double videoMaxZoomFactor;
@property(readonly, nonatomic) float videoFieldOfView;
@property(readonly, nonatomic, getter=isVideoBinned) _Bool videoBinned;
- (CDStruct_1b6d18a9)highestSupportedVideoFrameDuration;
- (CDStruct_1b6d18a9)lowestSupportedVideoFrameDuration;
@property(readonly, nonatomic) NSArray *videoSupportedFrameRateRanges;
@property(readonly, nonatomic) const struct opaqueCMFormatDescription *formatDescription;
@property(readonly, nonatomic) NSString *mediaType;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithFigCaptureSourceFormat:(id)arg1;
- (id)description;
- (id)_stringForMediaType:(unsigned int)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 frameRateRanges:(id)arg3;

@end

