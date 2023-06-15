//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDAppleAccountManager, HMDCloudSyncLogEventsAnalyzer, HMDConfigurationLogEvent, HMDCoreAnalyticsLogEventObserverDelegate, HMDDevice, HMDDiagnosticReporterLogObserver, HMDEventCountersManager, HMDHH2AutoMigrationEligibilityLogEventSubmitter, HMDHH2MigrationLogEventsAnalyzer, HMDHomeManager, HMDHouseholdMetricsManager, HMDLogEventBulletinNotificationsAnalyzer, HMDLogEventCountingAnalyzer, HMDLogEventDailyScheduler, HMDLogEventElectionEventsAnalyzer, HMDLogEventErrorEventsAnalyzer, HMDLogEventHAPMetricsEventAnalyzer, HMDLogEventMessageEventsAnalyzer, HMDLogEventProcessLaunchAnalyzer, HMDLogEventProcessMemoryEventsAnalyzer, HMDLogEventReachabilityEventsAnalyzer, HMDLogEventUserActivityAnalyzer, HMDMessageDispatcher, HMDMetricsAccessoryDetailsManager, HMDMetricsDateProvider, HMDMetricsDeviceStateManager, HMDMetricsTTRManager, HMDNetworkObserver, HMDPowerLogObserver, HMDThreadNetworkObserver, HMDTimeBasedFlagsManager, HMMCoreAnalyticsLogEventObserver, HMMCoreAnalyticsTagObserver, HMMSiriSELFLogEventObserver, NSArray, NSMutableArray, NSNotificationCenter, NSString, NSUUID;
@protocol HMDEWSLogging, HMDMetricsDeviceStateProvider, HMDUserNotificationCenterSettingsProviding, HMMLogEventDispatching, HMMLogEventSubmitting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDMetricsManager : NSObject
{
    NSMutableArray *_configurationObservers;
    struct os_unfair_lock_s _lock;
    _Bool _metricsCollectionStarted;
    HMDEventCountersManager *_countersManager;
    HMDTimeBasedFlagsManager *_flagsManager;
    HMDMetricsTTRManager *_ttrManager;
    HMDMetricsDateProvider *_dateProvider;
    HMDConfigurationLogEvent *_cachedConfiguration;
    NSString *_PRKitDateString;
    NSString *_PRKitUUIDString;
    HMDNetworkObserver *_networkObserver;
    HMDThreadNetworkObserver *_threadNetworkObserver;
    NSNotificationCenter *_notificationCenter;
    HMDHomeManager *_homeManager;
    id <HMMLogEventDispatching> _logEventDispatcher;
    HMDLogEventDailyScheduler *_dailyScheduler;
    id <HMDEWSLogging> _ewsLogger;
    HMDMetricsDeviceStateManager *_deviceStateManager;
    HMDMessageDispatcher *_messageDispatcher;
    HMDAppleAccountManager *_accountManager;
    id <HMDUserNotificationCenterSettingsProviding> _notificationSettingsProvider;
    HMDHH2AutoMigrationEligibilityLogEventSubmitter *_hh2AutoMigrationEligibilitySubmitter;
    HMDMetricsAccessoryDetailsManager *_accessoryDetailsManager;
    HMDHouseholdMetricsManager *_householdMetricsManager;
    HMDCoreAnalyticsLogEventObserverDelegate *_coreAnalyticsDelegate;
    NSArray *_coreAnalyticsFilters;
    HMMCoreAnalyticsLogEventObserver *_coreAnalyticsObserver;
    HMDDiagnosticReporterLogObserver *_diagnosticReporterLogObserver;
    HMDPowerLogObserver *_powerLogObserver;
    HMMSiriSELFLogEventObserver *_siriSELFLoggingObserver;
    HMDLogEventBulletinNotificationsAnalyzer *_bulletinNotificationsAnalyzer;
    HMDCloudSyncLogEventsAnalyzer *_cloudSyncLogEventsAnalyzer;
    HMDLogEventElectionEventsAnalyzer *_electionEventsAnalyzer;
    HMDLogEventErrorEventsAnalyzer *_errorEventsAnalyzer;
    HMDLogEventCountingAnalyzer *_eventCountingAnalyzer;
    HMDLogEventHAPMetricsEventAnalyzer *_hapEventsAnalyzer;
    HMDHH2MigrationLogEventsAnalyzer *_hh2MigrationAnalyzer;
    HMDLogEventMessageEventsAnalyzer *_messagingEventsAnalyzer;
    HMDLogEventProcessLaunchAnalyzer *_processLaunchEventsAnalyzer;
    HMDLogEventProcessMemoryEventsAnalyzer *_processMemoryEventsAnalyzer;
    HMDLogEventReachabilityEventsAnalyzer *_reachabilityEventsAnalyzer;
    HMDLogEventUserActivityAnalyzer *_userActivityEventsAnalyzer;
    HMMCoreAnalyticsTagObserver *_coreAnalyticsTagObserver;
    NSMutableArray *_aggregationAnalysisEventContributingAnalyzers;
}

+ (id)namespaceUUID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *aggregationAnalysisEventContributingAnalyzers; // @synthesize aggregationAnalysisEventContributingAnalyzers=_aggregationAnalysisEventContributingAnalyzers;
@property(readonly) HMMCoreAnalyticsTagObserver *coreAnalyticsTagObserver; // @synthesize coreAnalyticsTagObserver=_coreAnalyticsTagObserver;
@property(readonly, nonatomic) HMDLogEventUserActivityAnalyzer *userActivityEventsAnalyzer; // @synthesize userActivityEventsAnalyzer=_userActivityEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventReachabilityEventsAnalyzer *reachabilityEventsAnalyzer; // @synthesize reachabilityEventsAnalyzer=_reachabilityEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventProcessMemoryEventsAnalyzer *processMemoryEventsAnalyzer; // @synthesize processMemoryEventsAnalyzer=_processMemoryEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventProcessLaunchAnalyzer *processLaunchEventsAnalyzer; // @synthesize processLaunchEventsAnalyzer=_processLaunchEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventMessageEventsAnalyzer *messagingEventsAnalyzer; // @synthesize messagingEventsAnalyzer=_messagingEventsAnalyzer;
@property(readonly, nonatomic) HMDHH2MigrationLogEventsAnalyzer *hh2MigrationAnalyzer; // @synthesize hh2MigrationAnalyzer=_hh2MigrationAnalyzer;
@property(readonly, nonatomic) HMDLogEventHAPMetricsEventAnalyzer *hapEventsAnalyzer; // @synthesize hapEventsAnalyzer=_hapEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventCountingAnalyzer *eventCountingAnalyzer; // @synthesize eventCountingAnalyzer=_eventCountingAnalyzer;
@property(readonly, nonatomic) HMDLogEventErrorEventsAnalyzer *errorEventsAnalyzer; // @synthesize errorEventsAnalyzer=_errorEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventElectionEventsAnalyzer *electionEventsAnalyzer; // @synthesize electionEventsAnalyzer=_electionEventsAnalyzer;
@property(readonly, nonatomic) HMDCloudSyncLogEventsAnalyzer *cloudSyncLogEventsAnalyzer; // @synthesize cloudSyncLogEventsAnalyzer=_cloudSyncLogEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventBulletinNotificationsAnalyzer *bulletinNotificationsAnalyzer; // @synthesize bulletinNotificationsAnalyzer=_bulletinNotificationsAnalyzer;
@property(readonly, nonatomic) HMMSiriSELFLogEventObserver *siriSELFLoggingObserver; // @synthesize siriSELFLoggingObserver=_siriSELFLoggingObserver;
@property(readonly, nonatomic) HMDPowerLogObserver *powerLogObserver; // @synthesize powerLogObserver=_powerLogObserver;
@property(readonly, nonatomic) HMDDiagnosticReporterLogObserver *diagnosticReporterLogObserver; // @synthesize diagnosticReporterLogObserver=_diagnosticReporterLogObserver;
@property(readonly, nonatomic) HMMCoreAnalyticsLogEventObserver *coreAnalyticsObserver; // @synthesize coreAnalyticsObserver=_coreAnalyticsObserver;
@property(readonly, nonatomic) NSArray *coreAnalyticsFilters; // @synthesize coreAnalyticsFilters=_coreAnalyticsFilters;
@property(readonly, nonatomic) HMDCoreAnalyticsLogEventObserverDelegate *coreAnalyticsDelegate; // @synthesize coreAnalyticsDelegate=_coreAnalyticsDelegate;
@property(readonly, nonatomic) HMDHouseholdMetricsManager *householdMetricsManager; // @synthesize householdMetricsManager=_householdMetricsManager;
@property(readonly, nonatomic) HMDMetricsAccessoryDetailsManager *accessoryDetailsManager; // @synthesize accessoryDetailsManager=_accessoryDetailsManager;
@property(readonly, nonatomic) HMDHH2AutoMigrationEligibilityLogEventSubmitter *hh2AutoMigrationEligibilitySubmitter; // @synthesize hh2AutoMigrationEligibilitySubmitter=_hh2AutoMigrationEligibilitySubmitter;
@property(readonly, nonatomic) id <HMDUserNotificationCenterSettingsProviding> notificationSettingsProvider; // @synthesize notificationSettingsProvider=_notificationSettingsProvider;
@property(readonly, nonatomic) HMDAppleAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(readonly, nonatomic) HMDMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property _Bool metricsCollectionStarted; // @synthesize metricsCollectionStarted=_metricsCollectionStarted;
@property(readonly, nonatomic) HMDMetricsDeviceStateManager *deviceStateManager; // @synthesize deviceStateManager=_deviceStateManager;
@property(readonly, nonatomic) __weak id <HMDEWSLogging> ewsLogger; // @synthesize ewsLogger=_ewsLogger;
@property(readonly, nonatomic) HMDLogEventDailyScheduler *dailyScheduler; // @synthesize dailyScheduler=_dailyScheduler;
@property(readonly, nonatomic) id <HMMLogEventDispatching> logEventDispatcher; // @synthesize logEventDispatcher=_logEventDispatcher;
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) HMDThreadNetworkObserver *threadNetworkObserver; // @synthesize threadNetworkObserver=_threadNetworkObserver;
@property(readonly, nonatomic) HMDNetworkObserver *networkObserver; // @synthesize networkObserver=_networkObserver;
@property(readonly, nonatomic) NSString *PRKitUUIDString; // @synthesize PRKitUUIDString=_PRKitUUIDString;
@property(readonly, nonatomic) NSString *PRKitDateString; // @synthesize PRKitDateString=_PRKitDateString;
@property(readonly, nonatomic) HMDMetricsDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) HMDMetricsTTRManager *ttrManager; // @synthesize ttrManager=_ttrManager;
@property(readonly, nonatomic) HMDTimeBasedFlagsManager *flagsManager; // @synthesize flagsManager=_flagsManager;
@property(readonly, nonatomic) HMDEventCountersManager *countersManager; // @synthesize countersManager=_countersManager;
@property(readonly, nonatomic) NSUUID *homeUUIDForCurrentResidentDevice;
@property(readonly, nonatomic) NSArray *homeDataSources;
@property(readonly, nonatomic) NSArray *devicesOnCurrentAccount;
@property(readonly, nonatomic) HMDDevice *currentDevice;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)waitToCompleteCurrentlyQueuedTasks;
- (void)_handleLogEventDailySchedulerSubmitRequest:(id)arg1;
- (void)_handleLogEventDailySchedulerStatusRequest:(id)arg1;
- (void)_handleResetEventCounters:(id)arg1;
- (void)_handleFetchEventCounters:(id)arg1;
- (void)addRateTrigger:(id)arg1 forEventName:(id)arg2 requestGroup:(id)arg3 atThreshold:(unsigned long long)arg4 windowSize:(unsigned long long)arg5;
- (void)addThresholdTrigger:(id)arg1 forEventName:(id)arg2 requestGroup:(id)arg3 atThreshold:(unsigned long long)arg4 uploadImmediately:(_Bool)arg5;
- (void)addThresholdTrigger:(id)arg1 forEventName:(id)arg2 requestGroup:(id)arg3 atThreshold:(unsigned long long)arg4;
- (void)registerEWSTriggers;
- (void)startAnalyzers;
- (void)registerTaggedLoggingProcessors;
@property(readonly) _Bool isSubmissionEnabled;
@property(readonly, nonatomic) _Bool isDemoModeConfigured;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter;
- (void)updateWidgetStatusInCachedConfiguration;
- (id)accessoryForIdentifier:(id)arg1;
@property(readonly, nonatomic) id <HMDMetricsDeviceStateProvider> deviceStateProvider;
- (id)cachedHomeConfigurationForHomeUUID:(id)arg1;
@property(readonly, copy, nonatomic) HMDConfigurationLogEvent *cachedConfiguration; // @synthesize cachedConfiguration=_cachedConfiguration;
- (void)homeKitConfigurationChanged;
@property(readonly, copy, nonatomic) NSArray *configurationObservers;
- (void)addConfigurationChangedObserver:(CDUnknownBlockType)arg1;
- (id)logHomeKitErrorAggregationSummary;
- (id)logHomeKitAggregationAnalysisSummary;
- (void)resetHomeKitAggregationAnalysisContext;
- (id)homeKitAggregationAnalysisLogEvent;
- (void)submitDailyAggregationAnalysisEvents;
- (void)submitCurrentUserSettings;
- (void)runDailyTask;
- (void)startMetricsCollection;
- (void)configureHAPMetricsDispatcher:(id)arg1;
- (void)_registerForMessages;
- (void)addAnalyzer:(id)arg1 toListOfAggregationAnalysisEventContributing:(id)arg2;
- (id)initWithMessageDispatcher:(id)arg1 accountManager:(id)arg2 notificationSettingsProvider:(id)arg3 logEventDispatcher:(id)arg4 dailyScheduler:(id)arg5 dateProvider:(id)arg6 countersManager:(id)arg7 flagsManager:(id)arg8 ewsLogger:(id)arg9 deviceStateManager:(id)arg10 networkObserver:(id)arg11 hh2AutoMigrationEligibilitySubmitter:(id)arg12 coreAnalyticsTagObserver:(id)arg13;
- (id)initWithMessageDispatcher:(id)arg1 accountManager:(id)arg2 notificationSettingsProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

