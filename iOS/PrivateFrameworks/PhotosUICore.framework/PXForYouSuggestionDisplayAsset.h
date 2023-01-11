//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotoKitAdjustedDisplayAsset-Protocol.h>

@class NSDate, NSString, PHAsset;
@protocol PXDisplayAsset, PXDisplaySuggestion;

@interface PXForYouSuggestionDisplayAsset : NSObject <PXPhotoKitAdjustedDisplayAsset>
{
    _Bool _shouldInvert;
    PHAsset *_photoKitAsset;
    NSString *_adjustedContentIdentifier;
    id <PXDisplaySuggestion> _suggestion;
    id <PXDisplayAsset> _keyAsset;
}

@property(readonly, nonatomic) _Bool shouldInvert; // @synthesize shouldInvert=_shouldInvert;
@property(readonly, nonatomic) id <PXDisplayAsset> keyAsset; // @synthesize keyAsset=_keyAsset;
@property(readonly, nonatomic) id <PXDisplaySuggestion> suggestion; // @synthesize suggestion=_suggestion;
@property(readonly, nonatomic) NSString *adjustedContentIdentifier; // @synthesize adjustedContentIdentifier=_adjustedContentIdentifier;
@property(readonly, nonatomic) PHAsset *photoKitAsset; // @synthesize photoKitAsset=_photoKitAsset;
- (void).cxx_destruct;
- (id)_computedPortraitEffectSettingsForEditModel:(id)arg1 editSource:(id)arg2;
- (id)applyAdjustmentsToEditModel:(id)arg1 editSource:(id)arg2;
@property(readonly, nonatomic) _Bool wantsAdjustments;
@property(readonly, nonatomic) _Bool isAnimatedImage;
@property(readonly, nonatomic) _Bool canPlayPhotoIris;
@property(readonly, nonatomic) _Bool canPlayLoopingVideo;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly, nonatomic) long long playbackStyle;
- (long long)isContentEqualTo:(id)arg1;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
- (_Bool)isEqualToSuggestionDisplayAsset:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) _Bool representsBurst;
@property(readonly, nonatomic) _Bool isInCloud;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, nonatomic) NSString *uniformTypeIdentifier;
@property(readonly, nonatomic) _Bool isApplied;
- (id)inverseSuggestionAsset;
- (id)initWithSuggestion:(id)arg1 keyAsset:(id)arg2 shouldRevert:(_Bool)arg3;
- (id)initWithSuggestion:(id)arg1 keyAsset:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) float hdrGain;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly) Class superclass;

@end
