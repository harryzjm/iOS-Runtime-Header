//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHAsset.h>

#import <PhotosUI/PUEditableAsset-Protocol.h>

@class CLLocation, NSDate, NSDictionary, NSString, PFVideoAVObjectBuilder;

@interface PHAsset (PUDisplayAssetAdoption) <PUEditableAsset>
+ (id)pu_typeStringForMediaType:(long long)arg1;
+ (long long)_pu_mediaTypeForAssets:(id)arg1;
+ (long long)pu_commonMediaTypeForPhotoCount:(long long)arg1 videoCount:(long long)arg2 otherCount:(long long)arg3;
+ (id)pu_typeStringForAssets:(id)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 videoKeyFrameSourceTime;
@property(readonly, nonatomic) unsigned long long deferredLogInfo;
@property(readonly, copy, nonatomic) NSString *pathForTrimmedVideoFile;
@property(readonly, copy, nonatomic) NSString *pathForOriginalVideoFile;
@property(readonly, copy, nonatomic) NSString *pathForOriginalImageFile;
@property(readonly, nonatomic, getter=isCloudPhotoLibraryEnabled) _Bool cloudPhotoLibraryEnabled;
@property(readonly, nonatomic, getter=isResourceDownloadPossible) _Bool resourceDownloadPossible;
@property(readonly, nonatomic) unsigned long long originalFilesize;
@property(readonly, nonatomic) int originalEXIFOrientation;
@property(readonly, nonatomic) NSDictionary *imageProperties;
@property(readonly, nonatomic) PFVideoAVObjectBuilder *videoObjectBuilder;
@property(readonly, nonatomic) unsigned long long livePhotoVisibilityState;
@property(readonly, nonatomic, getter=isTrimmableType) _Bool trimmableType;
@property(readonly, nonatomic, getter=isInPlaceVideoTrimAllowed) _Bool inPlaceVideoTrimAllowed;
@property(readonly, nonatomic, getter=isLivePhotoVisibilityAdjustmentAllowed) _Bool livePhotoVisibilityAdjustmentAllowed;
@property(readonly, nonatomic, getter=isContentAdjustmentAllowed) _Bool contentAdjustmentAllowed;
@property(readonly, nonatomic, getter=isAdjusted) _Bool adjusted;
@property(readonly, nonatomic, getter=isHighFramerateVideo) _Bool highFramerateVideo;
@property(readonly, nonatomic) _Bool isAnimatedImage;
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoIrisVideoDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoIrisStillDisplayTime;
@property(readonly, nonatomic, getter=isLivePhoto) _Bool livePhoto;
- (unsigned long long)isContentEqualTo:(id)arg1;
@property(readonly, nonatomic) _Bool isTemporaryPlaceholder;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
- (CDStruct_8e0628e6)pu_vitalityPerspectiveTransform;

// Remaining properties
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) _Bool canPlayLoopingVideo;
@property(readonly, nonatomic) _Bool canPlayPhotoIris;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) unsigned short deferredProcessingNeeded;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
@property(readonly, nonatomic) _Bool hasPhotoColorAdjustments;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic) _Bool isPhotoIrisPlaceholder;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) unsigned long long mediaType;
@property(readonly, nonatomic) NSDate *modificationDate;
@property(readonly, nonatomic) _Bool needsDeferredProcessing;
@property(readonly, nonatomic) unsigned long long originalResourceChoice;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly, nonatomic) unsigned long long reframeVariation;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniformTypeIdentifier;
@property(readonly, nonatomic) NSString *uuid;
@end
