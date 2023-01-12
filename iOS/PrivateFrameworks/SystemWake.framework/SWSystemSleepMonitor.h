//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SystemWake/BSInvalidatable-Protocol.h>
#import <SystemWake/SWSystemSleepMonitorProvidingDelegate-Protocol.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue, SWSystemSleepAssertionProviding, SWSystemSleepMonitorProviding;

@interface SWSystemSleepMonitor : NSObject <SWSystemSleepMonitorProvidingDelegate, BSInvalidatable>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_identifier;
    id <SWSystemSleepMonitorProviding> _monitorProvider;
    id <SWSystemSleepAssertionProviding> _sleepAssertionProvider;
    struct os_unfair_lock_s _lock;
    NSHashTable *_lock_observers;
    unsigned long long _lock_messageID;
    unsigned long long _state;
    _Bool _allowsInvalidation;
}

+ (id)monitorUsingMainQueue;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)systemPowerChanged:(unsigned int)arg1 notificationID:(void *)arg2;
- (void)invalidate;
@property(readonly, getter=isSleepImminent) _Bool sleepImminent;
@property(readonly, getter=hasSleepBeenRequested) _Bool sleepRequested;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2 allowsInvalidation:(_Bool)arg3 monitorProvider:(id)arg4 sleepAssertionProvider:(id)arg5;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
