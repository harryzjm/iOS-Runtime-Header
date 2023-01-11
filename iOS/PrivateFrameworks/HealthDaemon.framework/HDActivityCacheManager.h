//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDActivityCacheDataSource, HDProfile, HDSourceEntity, HKActivityCache, HKCategorySample, HKCategoryType, HKHeartRateSummary, HKQuantityType, NSCalendar, NSDate, NSDateInterval, NSHashTable, NSMutableDictionary, NSSet, NSString, NSTimeZone, _HKDelayedOperation;
@protocol OS_dispatch_queue;

@interface HDActivityCacheManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, HDDatabaseProtectedDataObserver>
{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    long long _todayActivityCacheIndex;
    long long _yesterdayActivityCacheIndex;
    long long _tomorrowActivityCacheIndex;
    _Bool _cacheIndicesAreSet;
    NSTimeZone *_currentTimeZone;
    NSDateInterval *_todayDateInterval;
    NSDateInterval *_yesterdayDateInterval;
    _Bool _existingActivityCachesAreSet;
    HKActivityCache *_existingYesterdayActivityCache;
    HKActivityCache *_existingTodayActivityCache;
    HKHeartRateSummary *_todayHeartRateSummary;
    HKHeartRateSummary *_yesterdayHeartRateSummary;
    HDSourceEntity *_localDeviceSourceEntity;
    HDActivityCacheDataSource *_dataSource;
    HKQuantityType *_calorieGoalType;
    HKQuantityType *_moveMinuteGoalType;
    HKQuantityType *_exerciseGoalType;
    HKQuantityType *_standGoalType;
    NSSet *_allQuantityTypes;
    NSMutableDictionary *_goalsByIndex;
    HKCategoryType *_activityMoveModeChangeType;
    HKCategorySample *_todayActivityMoveModeChangeSample;
    HKCategorySample *_yesterdayActivityMoveModeChangeSample;
    _Bool _activityMoveModeIsSet;
    _HKDelayedOperation *_updateCachesOperation;
    _HKDelayedOperation *_rebuildCachesOperation;
    NSHashTable *_observers;
    _Bool _hasSubscribedToSignificantTimeChangeNotifications;
    long long _wheelchairUse;
    int _rebuildCacheNotificationToken;
    NSDate *_dateOverride;
    NSTimeZone *_timeZoneOverride;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimeZone *timeZoneOverride; // @synthesize timeZoneOverride=_timeZoneOverride;
@property(retain, nonatomic) NSDate *dateOverride; // @synthesize dateOverride=_dateOverride;
- (void)_userCharacteristicsDidChangeNotification:(id)arg1;
- (void)_queue_alertObservers:(id)arg1 heartRateSummaryChanged:(id)arg2;
- (void)_queue_alertObserversYesterdayActivityCacheChanged:(id)arg1;
- (void)_queue_alertObserversTodayActivityCacheChanged:(id)arg1;
- (void)removeActivityCacheObserver:(id)arg1;
- (void)addActivityCacheObserver:(id)arg1;
- (void)accessStatisticsBuilderWithCacheIndex:(long long)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) HKActivityCache *yesterdayActivityCache;
@property(readonly, nonatomic) HKActivityCache *currentActivityCache;
@property(readonly) NSCalendar *calendar;
- (void)_queue_deleteActivityCaches:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)daemonReady:(id)arg1;
- (void)_queue_rebuildCachesIfNeededForTimeChange;
- (void)_didReceiveSignificantTimeChangeNotification;
- (void)_queue_registerForSignificantTimeChangeNotification;
- (void)_queue_streamSamplesAdded;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)_queue_rebuildActivityCaches;
- (void)_calculateCacheIndicesWithTodayIndex:(long long *)arg1 yesterdayIndex:(long long *)arg2 tomorrowIndex:(long long *)arg3 todayStart:(id)arg4 yesterdayStart:(id)arg5 tomorrowStart:(id)arg6 calendar:(id)arg7;
- (id)_queue_gregorianCalendar;
- (id)_queue_currentTimeZone;
- (id)_queue_currentDate;
- (void)_queue_resetDataSource;
- (void)_queue_resetDailyGoalWithType:(id)arg1;
- (void)_queue_resetCacheIndices;
- (void)_queue_resetExistingActivityCaches;
- (void)_queue_resetEverything;
- (id)_mostRecentSampleWithType:(id)arg1 beforeDate:(id)arg2 error:(id *)arg3;
- (void)_queue_updateDateIntervalsWithExistingActivityCaches;
- (void)_queue_updateWheelchairUse;
- (void)_queue_primeExistingActivityCaches;
- (void)_queue_primeLocalSource;
- (void)_queue_primeCacheIndices;
- (void)_queue_updateCaches;
- (_Bool)_queue_updateActivityMoveModeWithSamples:(id)arg1;
- (long long)_queue_yesterdayActivityMoveMode;
- (long long)_queue_todayActivityMoveMode;
- (void)_queue_resetActivityMoveMode;
- (void)_queue_primeActivityMoveMode;
- (_Bool)_queue_updateGoalWithSample:(id)arg1;
- (_Bool)_queue_updateDailyGoalsWithSamples:(id)arg1;
- (void)_queue_primeDailyGoalWithType:(id)arg1;
- (void)_queue_primeDailyGoals;
- (_Bool)_queue_allGoalsLoaded;
- (_Bool)_queue_standGoalSet;
- (_Bool)_queue_exerciseGoalSet;
- (_Bool)_queue_moveMinuteGoalSet;
- (_Bool)_queue_calorieGoalSet;
- (void)_queue_primeDataSource;
- (_Bool)_queue_readyToPrimeDataSource;
- (void)_queue_updateHeartRateSummaries;
- (id)_queue_saveCacheWithDateInterval:(id)arg1 calorieGoal:(id)arg2 moveMinuteGoal:(id)arg3 exerciseGoal:(id)arg4 standGoal:(id)arg5 cacheIndex:(long long)arg6 previousCache:(id)arg7 statisticsBuilder:(id)arg8 wheelchairUse:(long long)arg9 activityMoveMode:(long long)arg10 generateStats:(_Bool)arg11;
- (void)_queue_saveCaches;
- (_Bool)_queue_saveYesterdayCache;
- (_Bool)_queue_saveTodayCache;
- (_Bool)_queue_readyToSaveCaches;
- (void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
