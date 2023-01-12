//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCCoreDuetListener, VCDaemonXPCEventHandler, VCTriggerEventQueue, WFBiomeListener, WFWorkflowRunCoordinator;
@protocol OS_dispatch_queue, WFDatabaseProvider;

@interface WFTriggerRegistrar : NSObject
{
    WFWorkflowRunCoordinator *_runCoordinator;
    VCCoreDuetListener *_coreDuetListener;
    WFBiomeListener *_biomeListener;
    NSObject<OS_dispatch_queue> *_queue;
    id <WFDatabaseProvider> _databaseProvider;
    VCDaemonXPCEventHandler *_eventHandler;
    VCTriggerEventQueue *_eventQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) VCTriggerEventQueue *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(readonly, nonatomic) id <WFDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) WFBiomeListener *biomeListener; // @synthesize biomeListener=_biomeListener;
@property(readonly, nonatomic) VCCoreDuetListener *coreDuetListener; // @synthesize coreDuetListener=_coreDuetListener;
@property(readonly, nonatomic) WFWorkflowRunCoordinator *runCoordinator; // @synthesize runCoordinator=_runCoordinator;
- (id)unableToLoadDatabaseErrorWithUnderlyingError:(id)arg1;
- (long long)triggerBackingForConfiguredTrigger:(id)arg1;
- (void)getConfiguredTriggerDescriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteTriggerWithIdentifier:(id)arg1 allowedDeletionClasses:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteTriggerWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fireTriggerWithIdentifier:(id)arg1 force:(_Bool)arg2 eventInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)queue_unregisterConfiguredTriggerWithIdentifier:(id)arg1 triggerBacking:(long long)arg2;
- (void)queue_unregisterConfiguredTrigger:(id)arg1;
- (void)unregisterTriggerWithIdentifier:(id)arg1 triggerBacking:(long long)arg2;
- (void)unregisterAllTriggers;
- (void)queue_registerConfiguredTrigger:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerTriggerWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerAllTriggersWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeStalePendingNotifications;
- (void)timeChangeDidOccur;
- (void)timezoneChangeDidOccur;
- (void)deviceDidUnlockForFirstTime;
- (void)dealloc;
- (id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2 runCoordinator:(id)arg3;

@end
