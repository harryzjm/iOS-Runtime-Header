//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class AVCapturePhotoSettingsInternal, NSArray, NSDictionary, NSString, NSURL;

@interface AVCapturePhotoSettings : NSObject <NSCopying>
{
    AVCapturePhotoSettingsInternal *_internal;
}

+ (id)photoSettingsFromPhotoSettings:(id)arg1;
+ (id)burstQualityPhotoSettings;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned int)arg1 rawFileType:(id)arg2 processedFormat:(id)arg3 processedFileType:(id)arg4;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned int)arg1 processedFormat:(id)arg2;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned int)arg1;
+ (id)photoSettingsWithFormat:(id)arg1;
+ (id)photoSettings;
+ (long long)uniqueID;
- (id)_sanitizedLivePhotoMovieMetadataForArray:(id)arg1 exceptionReason:(id *)arg2;
- (void)setAdjustedPhotoFilters:(id)arg1;
- (id)adjustedPhotoFilters;
- (void)setPhotoFilters:(id)arg1;
- (id)photoFilters;
- (void)setUserInitiatedPhotoRequestTime:(unsigned long long)arg1;
- (unsigned long long)userInitiatedPhotoRequestTime;
- (struct CGSize)rawEmbeddedThumbnailCGSize;
- (unsigned int)rawEmbeddedThumbnailFormatFourCC;
- (struct CGSize)embeddedThumbnailCGSize;
- (unsigned int)embeddedThumbnailFormatFourCC;
- (struct CGSize)previewCGSize;
- (unsigned int)previewFormatFourCC;
- (unsigned int)formatFourCC;
- (void)setShutterSound:(unsigned int)arg1;
- (unsigned int)shutterSound;
- (void)setSquareCropEnabled:(_Bool)arg1;
- (_Bool)isSquareCropEnabled;
@property(copy, nonatomic) NSDictionary *rawEmbeddedThumbnailPhotoFormat;
@property(readonly, nonatomic) NSArray *availableRawEmbeddedThumbnailPhotoCodecTypes;
@property(copy, nonatomic) NSDictionary *embeddedThumbnailPhotoFormat;
@property(readonly, nonatomic) NSArray *availableEmbeddedThumbnailPhotoCodecTypes;
@property(copy, nonatomic) NSDictionary *previewPhotoFormat;
@property(readonly, nonatomic) NSArray *availablePreviewPhotoPixelFormatTypes;
- (void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1;
- (id)livePhotoMovieMetadataForOriginalPhoto;
@property(copy, nonatomic) NSArray *livePhotoMovieMetadata;
- (void)setLivePhotoContentIdentifierForOriginalPhoto:(id)arg1;
- (id)livePhotoContentIdentifierForOriginalPhoto;
- (void)setLivePhotoContentIdentifier:(id)arg1;
- (id)livePhotoContentIdentifier;
@property(copy, nonatomic) NSString *livePhotoVideoCodecType;
- (void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1;
- (id)livePhotoMovieFileURLForOriginalPhoto;
@property(copy, nonatomic) NSURL *livePhotoMovieFileURL;
@property(copy, nonatomic) NSDictionary *metadata;
@property(nonatomic) _Bool embedsPortraitEffectsMatteInPhoto;
@property(nonatomic, getter=isPortraitEffectsMatteDeliveryEnabled) _Bool portraitEffectsMatteDeliveryEnabled;
@property(nonatomic, getter=isCameraCalibrationDataDeliveryEnabled) _Bool cameraCalibrationDataDeliveryEnabled;
@property(nonatomic, getter=isDepthDataFiltered) _Bool depthDataFiltered;
@property(nonatomic) _Bool embedsDepthDataInPhoto;
@property(nonatomic, getter=isDepthDataDeliveryEnabled) _Bool depthDataDeliveryEnabled;
@property(nonatomic, getter=isHighResolutionPhotoEnabled) _Bool highResolutionPhotoEnabled;
@property(nonatomic, getter=isDualCameraDualPhotoDeliveryEnabled) _Bool dualCameraDualPhotoDeliveryEnabled;
@property(nonatomic, getter=isAutoDualCameraFusionEnabled) _Bool autoDualCameraFusionEnabled;
@property(nonatomic, getter=isAutoStillImageStabilizationEnabled) _Bool autoStillImageStabilizationEnabled;
- (void)setEV0PhotoDeliveryEnabled:(_Bool)arg1;
- (_Bool)isEV0PhotoDeliveryEnabled;
- (void)setHDRMode:(long long)arg1;
- (long long)HDRMode;
@property(nonatomic, getter=isAutoRedEyeReductionEnabled) _Bool autoRedEyeReductionEnabled;
@property(nonatomic) long long flashMode;
- (void)setTurboModeEnabled:(_Bool)arg1;
- (_Bool)isTurboModeEnabled;
- (_Bool)isBurstQualityCaptureEnabled;
@property(readonly) NSString *rawFileType;
@property(readonly) unsigned int rawPhotoPixelFormatType;
@property(readonly) NSString *processedFileType;
@property(readonly, copy) NSDictionary *format;
@property(readonly) long long uniqueID;
- (id)description;
- (id)debugDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)_initWithFormat:(id)arg1 processedFileType:(id)arg2 rawPixelFormatType:(unsigned int)arg3 rawFileType:(id)arg4 burstQualityCaptureEnabled:(_Bool)arg5 uniqueID:(long long)arg6 exceptionReason:(id *)arg7;

@end

