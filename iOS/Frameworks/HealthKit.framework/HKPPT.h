//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HKPPTInterface, OS_dispatch_queue;

@interface HKPPT : NSObject
{
    id <HKPPTInterface> _pptInterface;
    NSObject<OS_dispatch_queue> *_pptQueue;
}

- (void).cxx_destruct;
- (id)_dateComponentsFromString:(id)arg1;
- (unsigned long long)_randomNumberBetweenMin:(unsigned long long)arg1 max:(unsigned long long)arg2;
- (id)_createStepSampleWithStepCount:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)_generateStepSamples:(long long)arg1;
- (void)_invalidParams:(id)arg1 forTest:(id)arg2;
- (void)_failedTest:(id)arg1 withResults:(id)arg2;
- (void)_failedTest:(id)arg1;
- (void)_finishedTest:(id)arg1 extraResults:(id)arg2;
- (void)_finishedTest:(id)arg1;
- (void)_startedTest:(id)arg1;
- (_Bool)performPPTTest:(id)arg1 preflightHealthDirectory:(id)arg2 sampleTypes:(id)arg3 killHealthd:(_Bool)arg4;
- (_Bool)performDateRangeQueryPPTTest:(id)arg1;
- (_Bool)performLatestSummaryQueryPPTTest:(id)arg1 date:(id)arg2;
- (_Bool)performPPTTest:(id)arg1 enumerateWorkoutRouteWithDatumCount:(long long)arg2;
- (_Bool)performPPTTest:(id)arg1 insertWorkoutRouteWithDatumCount:(long long)arg2 batched:(_Bool)arg3;
- (_Bool)performSyntheticJournalMergePPTTest:(id)arg1 simulatedDuration:(double)arg2;
- (_Bool)performJournalMergePPTTest:(id)arg1 healthDirectory:(id)arg2;
- (_Bool)performPPTTest:(id)arg1 collectionQueryForType:(id)arg2 anchorDate:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 dateIntervalsString:(id)arg6 separateBySource:(_Bool)arg7 average:(_Bool)arg8 minimum:(_Bool)arg9 maximum:(_Bool)arg10 sum:(_Bool)arg11;
- (_Bool)performPPTTest:(id)arg1 statisticsQueryForType:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 separateBySource:(_Bool)arg5 average:(_Bool)arg6 minimum:(_Bool)arg7 maximum:(_Bool)arg8 sum:(_Bool)arg9;
- (_Bool)performPPTTest:(id)arg1 anchoredQueryForType:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 withLimit:(long long)arg5 anchor:(long long)arg6;
- (_Bool)performPPTTest:(id)arg1 sampleQueryForType:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 withLimit:(long long)arg5;
- (_Bool)performPPTTest:(id)arg1 saveDataWithCount:(long long)arg2;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (id)initWithHKPPTInterface:(id)arg1 usingQueue:(id)arg2;
- (id)init;

@end

