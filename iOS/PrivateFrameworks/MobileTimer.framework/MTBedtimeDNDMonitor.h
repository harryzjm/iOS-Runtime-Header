//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileTimer/DNDModeAssertionUpdateListener-Protocol.h>
#import <MobileTimer/MTAgentDiagnosticDelegate-Protocol.h>
#import <MobileTimer/MTSleepObserver-Protocol.h>
#import <MobileTimer/MTTimeObserver-Protocol.h>

@class DNDModeAssertionService, MTSleepMonitor, NSString;
@protocol MTAlarmStorage;

@interface MTBedtimeDNDMonitor : NSObject <DNDModeAssertionUpdateListener, MTSleepObserver, MTTimeObserver, MTAgentDiagnosticDelegate>
{
    id <MTAlarmStorage> _alarmStorage;
    MTSleepMonitor *_sleepMonitor;
    CDUnknownBlockType _currentDateProvider;
    DNDModeAssertionService *_assertionService;
}

@property(retain, nonatomic) DNDModeAssertionService *assertionService; // @synthesize assertionService=_assertionService;
@property(copy, nonatomic) CDUnknownBlockType currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
@property(retain, nonatomic) MTSleepMonitor *sleepMonitor; // @synthesize sleepMonitor=_sleepMonitor;
@property(retain, nonatomic) id <MTAlarmStorage> alarmStorage; // @synthesize alarmStorage=_alarmStorage;
- (void).cxx_destruct;
- (id)gatherDiagnostics;
- (void)printDiagnostics;
- (void)timeListener:(id)arg1 didDetectSignificantTimeChangeWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)sleepMonitor:(id)arg1 sleepAlarmDidChange:(id)arg2;
- (void)sleepMonitor:(id)arg1 wakeUpAlarmWasDismissed:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepMonitor:(id)arg1 bedtimeWasReached:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepMonitor:(id)arg1 bedtimeReminderWasConfirmed:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepMonitor:(id)arg1 bedtimeReminderDidFire:(id)arg2 sleepAlarm:(id)arg3;
- (void)handleManualDNDInvalidation;
- (void)modeAssertionService:(id)arg1 didReceiveModeAssertionInvalidation:(id)arg2;
- (void)disengageDND;
- (void)engageDND;
- (void)_checkDNDForAlarm:(id)arg1 delay:(double)arg2;
- (void)_checkDNDForAlarm:(id)arg1;
- (void)checkDND;
- (void)dealloc;
- (id)initWithAlarmStorage:(id)arg1 sleepMonitor:(id)arg2 currentDateProvider:(CDUnknownBlockType)arg3;
- (id)initWithAlarmStorage:(id)arg1 sleepMonitor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

