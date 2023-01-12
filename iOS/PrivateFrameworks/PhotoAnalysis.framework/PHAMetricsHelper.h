//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PHAMetricsHelper : NSObject
{
}

+ (id)fullMemoryTypeStringForMemory:(id)arg1 withWorkingContext:(id)arg2;
+ (_Bool)shouldAggregateDataForReporting:(unsigned long long)arg1;
+ (id)dataAggregationKeyForCategory:(unsigned long long)arg1 subCategory:(unsigned long long)arg2 lookupTable:(id)arg3;
+ (id)aggregatedStatsForMoodKeywordCountedSet:(id)arg1;
+ (id)aggregatedStatsForMiroMoodCountVector:(id)arg1;
+ (id)aggregatedStatsForPossibleMoodCountVector:(id)arg1;
+ (id)aggregatedStatsForSuggestedMoodCountVector:(id)arg1;
+ (id)memoryBlockedFeatureTypeValueToDataAggregationKeyLookup;
+ (id)memoryBlockableFeatureTypeValueToDataAggregationKeyLookup;
+ (id)legacyMemoryCategoryValueToDataAggregationKeyLookup;
+ (id)memoryCategoryValueToDataAggregationKeyLookup;

@end
