//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentDiagnosticDelegate-Protocol.h>
#import <MobileTimer/MTAlarmObserver-Protocol.h>
#import <MobileTimer/MTSource-Protocol.h>
#import <MobileTimer/MTSyncDataModel-Protocol.h>

@class MTAlarmStorage, MTMetrics, MTSyncServiceManager, NSString;
@protocol NAScheduler, OS_dispatch_queue;

@interface MTAlarmSyncDataModel : NSObject <MTSource, MTAlarmObserver, MTSyncDataModel, MTAgentDiagnosticDelegate>
{
    MTSyncServiceManager *_syncServiceManager;
    MTAlarmStorage *_alarmStorage;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <NAScheduler> _serializer;
    MTMetrics *_syncMetrics;
}

+ (CDUnknownBlockType)defaultBlock;
- (void).cxx_destruct;
@property(retain, nonatomic) MTMetrics *syncMetrics; // @synthesize syncMetrics=_syncMetrics;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) MTAlarmStorage *alarmStorage; // @synthesize alarmStorage=_alarmStorage;
@property(retain, nonatomic) MTSyncServiceManager *syncServiceManager; // @synthesize syncServiceManager=_syncServiceManager;
- (id)gatherDiagnostics;
- (void)printDiagnostics;
- (_Bool)isFromOtherDevice;
- (id)sourceIdentifier;
- (void)resetDataStore;
- (void)_performSnooze:(id)arg1;
- (void)_performDismiss:(id)arg1;
- (void)_performAction:(id)arg1;
- (void)applyChange:(id)arg1;
- (id)dataFileName;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)stopSyncServices;
- (void)startSyncServices;
- (void)_setupSyncManagerWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithAlarmStorage:(id)arg1 syncMetrics:(id)arg2 syncServiceManagerBlock:(CDUnknownBlockType)arg3 serializer:(id)arg4 serialQueue:(id)arg5;
- (id)initWithAlarmStorage:(id)arg1 syncMetrics:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
