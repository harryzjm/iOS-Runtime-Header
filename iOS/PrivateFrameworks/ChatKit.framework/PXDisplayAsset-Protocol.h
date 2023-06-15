//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/PXDisplayThumbnailAsset-Protocol.h>

@class NSData, NSDate, NSNumber, NSString;
@protocol PXAssetdestinationAssetCopyProperties, PXDisplayAsset;

@protocol PXDisplayAsset <PXDisplayThumbnailAsset>
@property(readonly, nonatomic) float audioScore;
@property(readonly, nonatomic) struct CGRect faceAreaRect;
@property(readonly, nonatomic) struct CGRect acceptableCropRect;
@property(readonly, nonatomic) struct CGRect preferredCropRect;
@property(readonly, nonatomic) Class defaultImageProviderClass;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly, nonatomic) _Bool isEligibleForAutoPlayback;
@property(readonly, nonatomic) _Bool isInSharedLibrary;
@property(readonly, nonatomic) _Bool isInCloud;
@property(readonly, nonatomic) _Bool representsBurst;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) long long mediaType;
- (long long)isContentEqualTo:(id <PXDisplayAsset>)arg1;

@optional
@property(readonly, nonatomic) NSData *fetchColorNormalizationData;
@property(readonly, nonatomic) _Bool isAutoPlaybackEligibilityEstimated;
@property(readonly, nonatomic) NSDate *importDate;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly, nonatomic) unsigned long long burstSelectionTypes;
@property(readonly, nonatomic) NSNumber *hdrGain;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) unsigned long long thumbnailVersion;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) unsigned short playbackVariation;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) CDStruct_1b6d18a9 livePhotoVideoDuration;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) long long originalFileSize;
- (id <PXAssetdestinationAssetCopyProperties>)destinationAssetCopyProperties;
- (NSString *)localizedDetailedGeoDescriptionForRTL:(_Bool)arg1;
- (void)enumerateCropVariantsForTargetSize:(struct CGSize)arg1 UsingBlock:(void (^)(long long, struct CGRect, double, _Bool *))arg2;
- (struct CGRect)suggestedCropForTargetSize:(struct CGSize)arg1 withOcclusionRegion:(struct CGRect)arg2 andOutputCropScore:(double *)arg3;
- (struct CGRect)suggestedCropForTargetSize:(struct CGSize)arg1 withFocusRegion:(struct CGRect)arg2;
- (struct CGRect)bestCropRectForAspectRatioV2:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1;
@end

