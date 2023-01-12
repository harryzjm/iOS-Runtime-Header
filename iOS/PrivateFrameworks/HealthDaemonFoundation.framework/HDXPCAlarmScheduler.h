//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemonFoundation/HDDiagnosticObject-Protocol.h>

@class NSMapTable, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface HDXPCAlarmScheduler : NSObject <HDDiagnosticObject>
{
    NSMapTable *_alarms;
    NSMutableSet *_pendingEvents;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _unitTest_schedulerObserver;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType unitTest_schedulerObserver; // @synthesize unitTest_schedulerObserver=_unitTest_schedulerObserver;
- (id)diagnosticDescription;
- (void)unscheduleEventWithName:(id)arg1;
- (void)scheduleEvent:(id)arg1;
- (void)removeAlarm:(id)arg1;
- (void)addAlarm:(id)arg1;
- (void)_queue_notifyAlarmsOfPendingEvents;
- (void)_queue_handleEvent:(id)arg1;
- (void)unittest_fireEvent:(id)arg1;
- (void)_queue_unscheduleEventWithName:(id)arg1;
- (void)_queue_scheduleEvent:(id)arg1;
- (void)_queue_handleXPCEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
