//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFClockItemStorageDelegate-Protocol.h>
#import <AssistantServices/AFInvalidating-Protocol.h>

@class AFClockItemStorage, AFClockTimerSnapshot, NSHashTable, NSMutableOrderedSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface AFClockTimerObserver : NSObject <AFClockItemStorageDelegate, AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_listeners;
    AFClockTimerSnapshot *_timerSnapshot;
    AFClockItemStorage *_timerStorage;
    NSMutableOrderedSet *_notifiedFiringTimerIDs;
    NSUUID *_timersChangedToken;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_enumerateListenersUsingBlock:(CDUnknownBlockType)arg1;
- (void)_handleFetchTimersForReason:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchTimersForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_tearDown;
- (void)_setUp;
- (id)_timerSnapshot;
- (void)timersChanged:(id)arg1;
- (void)stateReset:(id)arg1;
- (void)firingTimerDismissed:(id)arg1;
- (void)firingTimerChanged:(id)arg1;
- (void)timerFired:(id)arg1;
- (void)timersRemoved:(id)arg1;
- (void)timersUpdated:(id)arg1;
- (void)timersAdded:(id)arg1;
- (void)clockItemStorageDidUpdate:(id)arg1 insertedItemIDs:(id)arg2 updatedItemIDs:(id)arg3 deletedItemIDs:(id)arg4;
- (void)invalidate;
- (void)getNotifiedFiringTimerIDsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getTimerSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

