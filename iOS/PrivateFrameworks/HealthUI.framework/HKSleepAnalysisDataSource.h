//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HKSleepAnalysisDataSource
{
    CDUnknownBlockType _userInfoCreationBlock;
}

@property(copy, nonatomic) CDUnknownBlockType userInfoCreationBlock; // @synthesize userInfoCreationBlock=_userInfoCreationBlock;
- (void).cxx_destruct;
- (CDUnknownBlockType)_mappingFunctionForConsistencyChartWithContext:(id)arg1;
- (CDUnknownBlockType)_mappingFunctionForEfficiencyChartWithContext:(id)arg1;
- (CDUnknownBlockType)_mappingFunctionForDurationChartWithContext:(id)arg1;
- (CDUnknownBlockType)mappingFunctionForContext:(id)arg1;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
