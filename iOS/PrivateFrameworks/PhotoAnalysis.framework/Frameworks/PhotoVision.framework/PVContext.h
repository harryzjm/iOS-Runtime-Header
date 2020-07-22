//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoVision/NSCopying-Protocol.h>
#import <PhotoVision/NSSecureCoding-Protocol.h>

@interface PVContext : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _quarantineTwinsOnAssetEnabled;
    _Bool _personBuildingDisabled;
    _Bool _personBuilderMergeCandidatesDisabled;
    float _faceClusteringThreshold;
    float _faceMergeFaceprintDistanceThreshold;
    float _facePrimarySuggestionsThreshold;
    unsigned long long _minimumSuggestionSize;
    unsigned long long _minFaceCountToTriggerClustering;
    unsigned long long _maxFaceCountForClustering;
    unsigned long long _minimumFaceGroupSizeForCreatingMergeCandidates;
}

+ (_Bool)supportsSecureCoding;
@property unsigned long long minimumFaceGroupSizeForCreatingMergeCandidates; // @synthesize minimumFaceGroupSizeForCreatingMergeCandidates=_minimumFaceGroupSizeForCreatingMergeCandidates;
@property _Bool personBuilderMergeCandidatesDisabled; // @synthesize personBuilderMergeCandidatesDisabled=_personBuilderMergeCandidatesDisabled;
@property _Bool personBuildingDisabled; // @synthesize personBuildingDisabled=_personBuildingDisabled;
@property unsigned long long maxFaceCountForClustering; // @synthesize maxFaceCountForClustering=_maxFaceCountForClustering;
@property unsigned long long minFaceCountToTriggerClustering; // @synthesize minFaceCountToTriggerClustering=_minFaceCountToTriggerClustering;
@property _Bool quarantineTwinsOnAssetEnabled; // @synthesize quarantineTwinsOnAssetEnabled=_quarantineTwinsOnAssetEnabled;
@property unsigned long long minimumSuggestionSize; // @synthesize minimumSuggestionSize=_minimumSuggestionSize;
@property float facePrimarySuggestionsThreshold; // @synthesize facePrimarySuggestionsThreshold=_facePrimarySuggestionsThreshold;
@property float faceMergeFaceprintDistanceThreshold; // @synthesize faceMergeFaceprintDistanceThreshold=_faceMergeFaceprintDistanceThreshold;
@property float faceClusteringThreshold; // @synthesize faceClusteringThreshold=_faceClusteringThreshold;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

