//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSXPCBacklightProxyObserverMask, NSString, RBSProcessMonitor;
@protocol BLSBacklightProxy, BLSXPCBacklightProxyClientInterface;

__attribute__((visibility("hidden")))
@interface BLSHXPCBacklightProxyHost : NSObject
{
    id <BLSBacklightProxy> _localBacklightProxy;
    id <BLSXPCBacklightProxyClientInterface> _lock_observingClient;
    RBSProcessMonitor *_processMonitor;
    BLSXPCBacklightProxyObserverMask *_lock_observingMask;
    int _clientPid;
    unsigned int _entitlements;
    struct os_unfair_lock_s _lock;
    _Bool _lock_clientIsTaskScheduled;
    _Bool _lock_stateIsStale;
    _Bool _lock_valid;
    _Bool _lock_observingDidCompleteUpdateToState;
    _Bool _lock_observingDidChangeAlwaysOnEnabled;
    _Bool _lock_observingActivatingWithEvent;
    _Bool _lock_observingDeactivatingWithEvent;
    _Bool _lock_observingPerformingEvent;
}

- (void).cxx_destruct;
- (void)backlight:(id)arg1 performingEvent:(id)arg2;
- (_Bool)observesPerformingAllEvents;
- (void)backlight:(id)arg1 deactivatingWithEvent:(id)arg2;
- (_Bool)observesDeactivation;
- (void)backlight:(id)arg1 activatingWithEvent:(id)arg2;
- (_Bool)observesActivation;
- (void)backlight:(id)arg1 didChangeAlwaysOnEnabled:(_Bool)arg2;
- (void)backlight:(id)arg1 didCompleteUpdateToState:(long long)arg2 forEvents:(id)arg3 abortedEvents:(id)arg4;
- (oneway void)nowObservingWithMask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)performChangeRequest:(id)arg1;
- (_Bool)deviceSupportsAlwaysOn;
- (_Bool)isAlwaysOnEnabled;
- (_Bool)isTransitioning;
- (id)getFlipbookState;
- (id)getBacklightState;
- (void)invalidate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithLocalBacklightProxy:(id)arg1 peer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

