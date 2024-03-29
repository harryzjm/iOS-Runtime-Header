//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVSemanticStyle, NSArray;

__attribute__((visibility("hidden")))
@interface AVCaptureResolvedPhotoSettingsInternal : NSObject
{
    long long uniqueID;
    CDStruct_79c71658 photoDimensions;
    CDStruct_79c71658 rawPhotoDimensions;
    CDStruct_79c71658 previewDimensions;
    CDStruct_79c71658 embeddedThumbnailDimensions;
    CDStruct_79c71658 rawEmbeddedThumbnailDimensions;
    _Bool livePhotoMovieEnabled;
    CDStruct_79c71658 livePhotoMovieDimensions;
    CDStruct_79c71658 portraitEffectsMatteDimensions;
    CDStruct_79c71658 hairSegmentationMatteDimensions;
    CDStruct_79c71658 skinSegmentationMatteDimensions;
    CDStruct_79c71658 teethSegmentationMatteDimensions;
    CDStruct_79c71658 glassesSegmentationMatteDimensions;
    CDStruct_79c71658 spatialOverCapturePhotoDimensions;
    _Bool turboModeEnabled;
    _Bool flashEnabled;
    _Bool redEyeReductionEnabled;
    _Bool HDREnabled;
    _Bool adjustedPhotoFiltersEnabled;
    _Bool EV0PhotoDeliveryEnabled;
    _Bool stillImageStabilizationEnabled;
    _Bool virtualDeviceFusionEnabled;
    _Bool squareCropEnabled;
    CDStruct_79c71658 deferredPhotoProxyDimensions;
    struct {
        CDStruct_1b6d18a9 start;
        CDStruct_1b6d18a9 duration;
    } photoProcessingTimeRange;
    _Bool contentAwareDistortionCorrectionEnabled;
    NSArray *photoManifest;
    unsigned long long digitalFlashUserInterfaceHints;
    NSArray *digitalFlashUserInterfaceRGBEstimate;
    _Bool captureBeforeResolvingSettingsEnabled;
    AVSemanticStyle *semanticStyle;
}

- (void)dealloc;

@end

