//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PGOverTimeMemoryConfiguration : NSObject
{
    unsigned long long _minimumNumberOfMoments;
    unsigned long long _minimumNumberOfMomentsInterestingWithAlternateJunking;
    unsigned long long _minimumNumberOfMomentsInterestingForMemories;
    unsigned long long _minimumNumberOfAssetsInExtendedCuration;
    unsigned long long _minimumNumberOfRelevantAssets;
    double _aboveMomentAverageContentScoreThreshold;
    double _minimumOverallTimeIntervalOfMoments;
    double _minimumMomentSpreadicityTimeInterval;
}

@property(nonatomic) double minimumMomentSpreadicityTimeInterval; // @synthesize minimumMomentSpreadicityTimeInterval=_minimumMomentSpreadicityTimeInterval;
@property(nonatomic) double minimumOverallTimeIntervalOfMoments; // @synthesize minimumOverallTimeIntervalOfMoments=_minimumOverallTimeIntervalOfMoments;
@property(nonatomic) double aboveMomentAverageContentScoreThreshold; // @synthesize aboveMomentAverageContentScoreThreshold=_aboveMomentAverageContentScoreThreshold;
@property(nonatomic) unsigned long long minimumNumberOfRelevantAssets; // @synthesize minimumNumberOfRelevantAssets=_minimumNumberOfRelevantAssets;
@property(nonatomic) unsigned long long minimumNumberOfAssetsInExtendedCuration; // @synthesize minimumNumberOfAssetsInExtendedCuration=_minimumNumberOfAssetsInExtendedCuration;
@property(nonatomic) unsigned long long minimumNumberOfMomentsInterestingForMemories; // @synthesize minimumNumberOfMomentsInterestingForMemories=_minimumNumberOfMomentsInterestingForMemories;
@property(nonatomic) unsigned long long minimumNumberOfMomentsInterestingWithAlternateJunking; // @synthesize minimumNumberOfMomentsInterestingWithAlternateJunking=_minimumNumberOfMomentsInterestingWithAlternateJunking;
@property(nonatomic) unsigned long long minimumNumberOfMoments; // @synthesize minimumNumberOfMoments=_minimumNumberOfMoments;

@end
