//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAlarmObserver-Protocol.h>

@class NSMutableDictionary, NSString, _CDClientContext, _DKKnowledgeStore;
@protocol MTAlarmStorage, OS_dispatch_queue;

@interface MTCoreDuetMonitor : NSObject <MTAlarmObserver>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <MTAlarmStorage> _alarmStorage;
    NSMutableDictionary *_alarmStatesByAlarmID;
    _CDClientContext *_context;
    _DKKnowledgeStore *_knowledgeStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _DKKnowledgeStore *knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property(readonly, nonatomic) _CDClientContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSMutableDictionary *alarmStatesByAlarmID; // @synthesize alarmStatesByAlarmID=_alarmStatesByAlarmID;
@property(readonly, nonatomic) id <MTAlarmStorage> alarmStorage; // @synthesize alarmStorage=_alarmStorage;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (id)metadataForAlarm:(id)arg1;
- (void)_queue_writeAlarmToKnowledgeStore:(id)arg1 category:(id)arg2;
- (void)writeAlarmToKnowledgeStore:(id)arg1 alarmEvent:(unsigned long long)arg2;
- (void)_queue_writeNextAlarmStateToContextStore:(id)arg1;
- (void)_queue_writeCurrentStateToContextStore;
- (void)updateStateForNextAlarm:(id)arg1;
- (void)updateLastModifiedDateForAlarms:(id)arg1;
- (void)updateStateForIdleAlarms:(id)arg1;
- (void)updateStateForAlarm:(id)arg1 alarmEvent:(unsigned long long)arg2;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)handleSystemReady;
- (id)initWithAlarmStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
