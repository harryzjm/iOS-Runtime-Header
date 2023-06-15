//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDConfigurationLogEvent, HMDEventCountersManager, HMDLogEventDailyScheduler, HMDMetricsDateProvider, HMDMetricsTTRManager, HMDTimeBasedFlagsManager, NSNotificationCenter;
@protocol HMMLogEventDispatching, HMMLogEventSubmitting;

@protocol HMDLogEventAnalyzerDataSource <NSObject>
@property(readonly, copy, nonatomic) HMDConfigurationLogEvent *cachedConfiguration;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property(readonly, nonatomic) HMDMetricsTTRManager *ttrManager;
@property(readonly, nonatomic) HMDMetricsDateProvider *dateProvider;
@property(readonly, nonatomic) HMDLogEventDailyScheduler *dailyScheduler;
@property(readonly, nonatomic) id <HMMLogEventDispatching> logEventDispatcher;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter;
@property(readonly, nonatomic) HMDTimeBasedFlagsManager *flagsManager;
@property(readonly, nonatomic) HMDEventCountersManager *countersManager;
- (void)addConfigurationChangedObserver:(void (^)(HMDConfigurationLogEvent *))arg1;
@end

