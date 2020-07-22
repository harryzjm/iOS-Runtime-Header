//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDActivityCacheManager, HKActivityCache, HKHeartRateSummary;

@protocol HDActivityCacheManagerObserver <NSObject>
- (void)activityCacheManager:(HDActivityCacheManager *)arg1 changedTodayActivityCache:(HKActivityCache *)arg2;

@optional
- (void)activityCacheManager:(HDActivityCacheManager *)arg1 changedHeartRateSummary:(HKHeartRateSummary *)arg2 isToday:(_Bool)arg3;
- (void)activityCacheManager:(HDActivityCacheManager *)arg1 changedYesterdayActivityCache:(HKActivityCache *)arg2;
@end

