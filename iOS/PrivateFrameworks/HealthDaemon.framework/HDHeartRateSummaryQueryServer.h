//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDActivityCacheManagerObserver-Protocol.h>

@class HDActivityCacheManager, HKHeartRateSummary, NSString;

@interface HDHeartRateSummaryQueryServer <HDActivityCacheManagerObserver>
{
    HDActivityCacheManager *_activityCacheManager;
    HKHeartRateSummary *_latestSummary;
}

- (void).cxx_destruct;
- (void)activityCacheManager:(id)arg1 changedHeartRateSummary:(id)arg2 isToday:(_Bool)arg3;
- (void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2;
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (_Bool)_shouldListenForUpdates;
- (void)_queue_stop;
- (void)_queue_start;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6 activityCacheManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

