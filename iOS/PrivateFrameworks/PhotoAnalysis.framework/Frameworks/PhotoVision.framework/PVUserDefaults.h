//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PVUserDefaults : NSObject
{
}

+ (unsigned long long)minimumFaceGroupSizeForCreatingMergeCandidates;
+ (_Bool)personBuilderMergeCandidatesDisabled;
+ (_Bool)personBuildingDisabled;
+ (_Bool)suggestionsLogEnabled;
+ (unsigned long long)maxFaceCountForClustering;
+ (unsigned long long)minFaceCountToTriggerClustering;
+ (_Bool)quarantineTwinsOnAssetEnabled;
+ (unsigned long long)minimumSuggestionSize;
+ (float)facePrimarySuggestionsThreshold;
+ (float)faceMergeFaceprintDistanceThreshold;
+ (float)faceClusteringThreshold;
+ (double)_doubleValueForKey:(id)arg1 defaultValue:(double)arg2;
+ (float)_floatValueForKey:(id)arg1 defaultValue:(float)arg2;
+ (int)_intValueForKey:(id)arg1 defaultValue:(int)arg2;
+ (_Bool)_boolValueForKey:(id)arg1 defaultValue:(_Bool)arg2;

@end

