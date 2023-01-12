//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoordinationCore/COMeshTimerAddOnDelegate-Protocol.h>
#import <CoordinationCore/COTimerManagerServiceInterface-Protocol.h>

@class COClientObserverSet, NSString;

__attribute__((visibility("hidden")))
@interface COTimerService <COTimerManagerServiceInterface, COMeshTimerAddOnDelegate>
{
    COClientObserverSet *_observers;
}

+ (_Bool)_isAllowedClient:(id)arg1;
+ (id)serviceWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) COClientObserverSet *observers; // @synthesize observers=_observers;
- (void)_didResetTimerAddOn:(id)arg1;
- (void)didChangeCompositionForTimerAddOn:(id)arg1;
- (void)didResetTimerAddOn:(id)arg1;
- (void)timerAddOn:(id)arg1 didDismissTimers:(id)arg2;
- (void)timerAddOn:(id)arg1 didFireTimers:(id)arg2;
- (void)timerAddOn:(id)arg1 didChangeTimers:(id)arg2;
- (void)timerAddOn:(id)arg1 didUpdateTimers:(id)arg2;
- (void)timerAddOn:(id)arg1 didRemoveTimers:(id)arg2;
- (void)timerAddOn:(id)arg1 didAddTimers:(id)arg2;
- (void)canDispatchForAccessoryUniqueIdentifier:(id)arg1 categoryType:(id)arg2 asInstance:(id)arg3 cluster:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)removeObserverForNotificationName:(id)arg1 cluster:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)addObserverForNotificationName:(id)arg1 constraints:(id)arg2 asInstance:(id)arg3 cluster:(id)arg4 withCallback:(CDUnknownBlockType)arg5;
- (void)dismissTimerWithIdentifier:(id)arg1 cluster:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)removeTimer:(id)arg1 cluster:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)updateTimer:(id)arg1 cluster:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)addTimer:(id)arg1 asInstance:(id)arg2 cluster:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
- (void)timersforAccessoryUniqueIdentifier:(id)arg1 asInstance:(id)arg2 cluster:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
- (void)_postNotificationName:(id)arg1 forTimers:(id)arg2 toAddOn:(id)arg3 requiresUserInfo:(_Bool)arg4;
- (_Bool)_canRequestCreationOfCluster:(id)arg1;
- (void)_addOnRemoved:(id)arg1;
- (void)_addOnAdded:(id)arg1;
- (void)_clientLost:(id)arg1;
- (void)_configureServiceInterfacesOnConnection:(id)arg1;
- (id)initWithListenerProvider:(id)arg1 addOnProvider:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
