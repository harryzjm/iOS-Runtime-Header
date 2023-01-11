//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/CLSInvestigationItem-Protocol.h>

@class CLLocation, NSArray, NSDate, NSDateComponents, NSNumber, NSSet, NSString, VNSceneprint;
@protocol CLSCurationModel;

@interface PGCuratorInvestigationItem : NSObject <CLSInvestigationItem>
{
    NSNumber *_clsViewCount;
    NSNumber *_clsPlayCount;
    NSNumber *_clsShareCount;
    NSNumber *_clsIsUtility;
    NSNumber *_clsIsBlurry;
    NSNumber *_clsIsScreenshotOrScreenRecording;
    NSNumber *_isFavorite;
    NSNumber *_isVideo;
    NSNumber *_clsContentScore;
    NSNumber *_clsIsInterestingVideo;
    NSNumber *_clsIsInterestingLivePhoto;
    NSNumber *_clsIsInterestingPanorama;
    NSNumber *_clsIsInterestingSDOF;
    NSNumber *_clsIsInterestingHDR;
    NSNumber *_clsIsInterestingReframe;
    NSNumber *_clsHasInterestingAudioClassification;
    NSNumber *_clsHasCustomPlaybackVariation;
    NSNumber *_clsSharpnessScore;
    NSNumber *_clsExposureScore;
    NSNumber *_clsAestheticScore;
    NSNumber *_clsIsAestheticallyPrettyGood;
    NSNumber *_clsFaceScore;
    NSNumber *_clsIsInhabited;
    NSNumber *_clsAvoidIfPossibleForKeyItem;
    NSNumber *_clsHasPoorResolution;
    NSNumber *_clsHasInterestingScenes;
    NSNumber *_clsLikabilityScore;
    NSNumber *_clsInteractionScore;
    NSNumber *_clsHighlightVisibilityScore;
    NSNumber *_clsAutoplaySuggestionScore;
    NSNumber *_isShinyGem;
    NSNumber *_isRegularGem;
    NSNumber *_clsDuration;
    NSNumber *_clsIsNonMemorable;
    NSNumber *_clsIsLoopOrBounce;
    NSNumber *_clsIsLongExposure;
    NSNumber *_clsGpsHorizontalAccuracy;
    NSNumber *_clsSquareCropScore;
    NSString *_clsIdentifier;
    NSDate *_cls_universalDate;
    NSDate *_cls_localDate;
    CLLocation *_clsLocation;
    NSArray *_clsPeopleNames;
    NSSet *_clsSceneClassifications;
    VNSceneprint *_clsSceneprint;
    NSArray *_clsUnprefetchedPeopleNames;
    NSArray *_faceInfos;
    id <CLSCurationModel> _curationModel;
}

+ (id)itemWithUUID:(id)arg1 itemInfo:(id)arg2 curationModel:(id)arg3;
- (void).cxx_destruct;
@property(readonly) id <CLSCurationModel> curationModel; // @synthesize curationModel=_curationModel;
@property(readonly) NSArray *faceInfos; // @synthesize faceInfos=_faceInfos;
@property(readonly, nonatomic) NSArray *clsUnprefetchedPeopleNames; // @synthesize clsUnprefetchedPeopleNames=_clsUnprefetchedPeopleNames;
@property(readonly, nonatomic) VNSceneprint *clsSceneprint; // @synthesize clsSceneprint=_clsSceneprint;
@property(readonly, copy, nonatomic) NSSet *clsSceneClassifications; // @synthesize clsSceneClassifications=_clsSceneClassifications;
@property(readonly, nonatomic) NSArray *clsPeopleNames; // @synthesize clsPeopleNames=_clsPeopleNames;
@property(readonly, nonatomic) CLLocation *clsLocation; // @synthesize clsLocation=_clsLocation;
@property(readonly, nonatomic) NSDate *cls_localDate; // @synthesize cls_localDate=_cls_localDate;
@property(readonly, nonatomic) NSDate *cls_universalDate; // @synthesize cls_universalDate=_cls_universalDate;
@property(readonly, nonatomic) NSString *clsIdentifier; // @synthesize clsIdentifier=_clsIdentifier;
@property(readonly, nonatomic) double pl_gpsHorizontalAccuracy;
@property(readonly, nonatomic) NSString *pl_uuid;
@property(readonly, nonatomic) struct CLLocationCoordinate2D pl_coordinate;
@property(readonly, nonatomic) NSDate *pl_date;
@property(readonly, nonatomic) double clsSquareCropScore;
@property(readonly, nonatomic) _Bool clsIsLongExposure;
@property(readonly, nonatomic) _Bool clsIsLoopOrBounce;
@property(readonly, nonatomic) _Bool clsIsNonMemorable;
@property(readonly, nonatomic) double clsDuration;
- (_Bool)isRegularGem;
- (_Bool)isShinyGem;
@property(readonly, nonatomic) double clsAutoplaySuggestionScore;
@property(readonly, nonatomic) double clsHighlightVisibilityScore;
- (double)clsInteractionScore;
- (double)clsLikabilityScore;
@property(readonly) _Bool clsHasInterestingScenes;
@property(readonly) _Bool clsHasPoorResolution;
@property(readonly) _Bool clsAvoidIfPossibleForKeyItem;
@property(readonly) _Bool clsIsInhabited;
@property(readonly, nonatomic) double clsFaceScore;
@property(readonly, nonatomic) _Bool clsIsAestheticallyPrettyGood;
@property(readonly, nonatomic) double clsAestheticScore;
@property(readonly, nonatomic) double clsExposureScore;
@property(readonly, nonatomic) double clsSharpnessScore;
@property(readonly, nonatomic) _Bool clsHasCustomPlaybackVariation;
@property(readonly, nonatomic) _Bool clsHasInterestingAudioClassification;
@property(readonly, nonatomic) _Bool clsIsInterestingReframe;
@property(readonly, nonatomic) _Bool clsIsInterestingHDR;
@property(readonly, nonatomic) _Bool clsIsInterestingSDOF;
@property(readonly, nonatomic) _Bool clsIsInterestingPanorama;
@property(readonly, nonatomic) _Bool clsIsInterestingLivePhoto;
@property(readonly, nonatomic) _Bool clsIsInterestingVideo;
@property(readonly, nonatomic) double clsContentScore;
@property(readonly, nonatomic) _Bool isVideo;
@property(readonly, nonatomic) _Bool isFavorite;
@property(readonly, nonatomic) _Bool clsIsScreenshotOrScreenRecording;
@property(readonly, nonatomic) _Bool clsIsBlurry;
@property(readonly, nonatomic) _Bool clsIsUtility;
@property(readonly, nonatomic) long long clsShareCount;
@property(readonly, nonatomic) long long clsPlayCount;
@property(readonly, nonatomic) long long clsViewCount;
- (double)scoreInContext:(id)arg1;
@property(readonly, nonatomic) NSDateComponents *cls_localDateComponents;
@property(readonly, nonatomic) unsigned long long clsPeopleCount;
@property(readonly, nonatomic) NSArray *peopleNames;
@property(readonly, nonatomic) CLLocation *location;
- (id)date;
@property(readonly, copy) NSString *description;
- (id)initWithUUID:(id)arg1 itemInfo:(id)arg2 curationModel:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
