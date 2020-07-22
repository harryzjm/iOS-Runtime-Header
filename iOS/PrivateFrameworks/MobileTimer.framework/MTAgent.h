//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentDiagnosticDelegate-Protocol.h>
#import <MobileTimer/MTSystemStateDelegate-Protocol.h>

@class MTAgentDiagnosticListener, MTAgentNotificationManager, MTAlarmScheduler, MTAlarmServer, MTAlarmStorage, MTAlarmSyncDataModel, MTLanguageChangeListener, MTMetrics, MTPairedDeviceListener, MTSleepMetrics, MTSleepMonitor, MTSyncCommandListener, MTSyncManager, MTSyncMonitor, MTSyncStorage, MTSystemStateListener, MTTimeListener, MTTimerScheduler, MTTimerServer, MTTimerStorage, NSDate, NSString;
@protocol MTNotificationPoster;

@interface MTAgent : NSObject <MTAgentDiagnosticDelegate, MTSystemStateDelegate>
{
    NSDate *_launchDate;
    long long _mode;
    MTAgentNotificationManager *_notificationManager;
    MTSystemStateListener *_systemStateListener;
    MTLanguageChangeListener *_languageChangeListener;
    MTPairedDeviceListener *_pairedDeviceListener;
    MTSyncCommandListener *_syncCommandListener;
    MTAgentDiagnosticListener *_diagnostics;
    MTTimeListener *_timeListener;
    MTAlarmServer *_alarmServer;
    MTAlarmSyncDataModel *_alarmSyncDataModel;
    MTAlarmScheduler *_alarmScheduler;
    MTSyncStorage *_alarmSyncStorage;
    MTAlarmStorage *_alarmStorage;
    MTSyncManager *_syncManager;
    MTSyncMonitor *_syncMonitor;
    MTSleepMonitor *_sleepMonitor;
    MTSleepMetrics *_sleepMetrics;
    MTMetrics *_syncMetrics;
    MTTimerServer *_timerServer;
    MTTimerScheduler *_timerScheduler;
    MTTimerStorage *_timerStorage;
    id <MTNotificationPoster> _notificationPoster;
}

+ (id)agent;
@property(retain, nonatomic) id <MTNotificationPoster> notificationPoster; // @synthesize notificationPoster=_notificationPoster;
@property(retain, nonatomic) MTTimerStorage *timerStorage; // @synthesize timerStorage=_timerStorage;
@property(retain, nonatomic) MTTimerScheduler *timerScheduler; // @synthesize timerScheduler=_timerScheduler;
@property(retain, nonatomic) MTTimerServer *timerServer; // @synthesize timerServer=_timerServer;
@property(retain, nonatomic) MTMetrics *syncMetrics; // @synthesize syncMetrics=_syncMetrics;
@property(retain, nonatomic) MTSleepMetrics *sleepMetrics; // @synthesize sleepMetrics=_sleepMetrics;
@property(retain, nonatomic) MTSleepMonitor *sleepMonitor; // @synthesize sleepMonitor=_sleepMonitor;
@property(retain, nonatomic) MTSyncMonitor *syncMonitor; // @synthesize syncMonitor=_syncMonitor;
@property(retain, nonatomic) MTSyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) MTAlarmStorage *alarmStorage; // @synthesize alarmStorage=_alarmStorage;
@property(retain, nonatomic) MTSyncStorage *alarmSyncStorage; // @synthesize alarmSyncStorage=_alarmSyncStorage;
@property(retain, nonatomic) MTAlarmScheduler *alarmScheduler; // @synthesize alarmScheduler=_alarmScheduler;
@property(retain, nonatomic) MTAlarmSyncDataModel *alarmSyncDataModel; // @synthesize alarmSyncDataModel=_alarmSyncDataModel;
@property(retain, nonatomic) MTAlarmServer *alarmServer; // @synthesize alarmServer=_alarmServer;
@property(retain, nonatomic) MTTimeListener *timeListener; // @synthesize timeListener=_timeListener;
@property(retain, nonatomic) MTAgentDiagnosticListener *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(retain, nonatomic) MTSyncCommandListener *syncCommandListener; // @synthesize syncCommandListener=_syncCommandListener;
@property(retain, nonatomic) MTPairedDeviceListener *pairedDeviceListener; // @synthesize pairedDeviceListener=_pairedDeviceListener;
@property(retain, nonatomic) MTLanguageChangeListener *languageChangeListener; // @synthesize languageChangeListener=_languageChangeListener;
@property(retain, nonatomic) MTSystemStateListener *systemStateListener; // @synthesize systemStateListener=_systemStateListener;
@property(retain, nonatomic) MTAgentNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSDate *launchDate; // @synthesize launchDate=_launchDate;
- (void).cxx_destruct;
- (void)printDiagnostics;
- (void)handleF5Reset;
- (void)restoreDidFinish;
- (void)_setupSyncMonitor;
- (void)_setupSecondaryListeners;
- (void)_setupInitialListeners;
- (void)_setupSync;
- (void)_setupTimers;
- (void)_setupAlarms;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

