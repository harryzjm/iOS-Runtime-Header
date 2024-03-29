//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, RBClientInheritanceManager, RBConnectionListener, RBProcess, RBProcessMonitorObserver, RBSAssertionIdentifier, RBSProcessHandle, RBSProcessIdentifier, RBSProcessIdentity;
@protocol OS_xpc_object, RBAssertionManaging, RBDaemonContextProviding, RBEntitlementManaging, RBEntitlementPossessing, RBProcessManaging, RBProcessMonitoring, RBRequestManaging, RBStateCaptureManaging;

__attribute__((visibility("hidden")))
@interface RBConnectionClient : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    struct os_unfair_lock_s _lock;
    id <RBAssertionManaging> _assertionManager;
    id <RBEntitlementManaging> _entitlementManager;
    id <RBProcessManaging> _processManager;
    id <RBProcessMonitoring> _processMonitor;
    id <RBStateCaptureManaging> _stateCaptureManager;
    id <RBDaemonContextProviding> _daemonContext;
    id <RBRequestManaging> _requestManager;
    RBConnectionListener *_listener;
    RBProcess *_containingProcess;
    _Bool _ready;
    NSString *_shortDescription;
    RBProcess *_process;
    RBSProcessHandle *_processHandle;
    RBSProcessIdentity *_processIdentity;
    RBSProcessIdentifier *_processIdentifier;
    unsigned int _euid;
    RBClientInheritanceManager *_inheritanceManager;
    id <RBEntitlementPossessing> _entitlements;
    NSMutableSet *_assertionIdentifiers;
    NSMutableSet *_deathMonitors;
    RBProcessMonitorObserver *_stateObserver;
    RBSAssertionIdentifier *_expirationBoostAssertionIdentifier;
}

- (void).cxx_destruct;
- (id)captureState;
@property(readonly, copy, nonatomic) NSString *stateCaptureTitle;
- (void)inheritanceManager:(id)arg1 didChangeInheritances:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, copy) NSString *description;
- (_Bool)hasEntitlementDomain:(unsigned long long)arg1;
- (_Bool)hasEntitlement:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

