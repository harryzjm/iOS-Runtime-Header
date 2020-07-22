//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/SBSStatusBarStyleOverridesAssertionClient-Protocol.h>

@class NSMapTable, NSString, NSXPCConnection, SBSStatusBarStyleOverridesCoordinator;
@protocol OS_dispatch_queue;

@interface SBSStatusBarStyleOverridesAssertionManager : NSObject <SBSStatusBarStyleOverridesAssertionClient>
{
    NSMapTable *_assertionsByIdentifier;
    NSXPCConnection *_sbXPCConnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
    SBSStatusBarStyleOverridesCoordinator *_internalQueue_styleOverrideCoordinator;
    NSObject<OS_dispatch_queue> *_coordinatorCalloutQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *coordinatorCalloutQueue; // @synthesize coordinatorCalloutQueue=_coordinatorCalloutQueue;
@property(nonatomic) __weak SBSStatusBarStyleOverridesCoordinator *internalQueue_styleOverrideCoordinator; // @synthesize internalQueue_styleOverrideCoordinator=_internalQueue_styleOverrideCoordinator;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSXPCConnection *sbXPCConnection; // @synthesize sbXPCConnection=_sbXPCConnection;
@property(retain, nonatomic) NSMapTable *assertionsByIdentifier; // @synthesize assertionsByIdentifier=_assertionsByIdentifier;
- (void).cxx_destruct;
- (void)_reactivateAssertions;
- (void)_tearDownXPCConnection;
- (void)unregisterCoordinator;
- (void)_registerStyleOverrideCoordinatorAfterInterruption;
- (void)_internalQueue_updateRegistrationForCoordinator:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)updateRegistrationForCoordinator:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_internalQueue_removeStatusBarStyleOverridesAssertionWithIdentifier:(id)arg1 invalidate:(_Bool)arg2;
- (void)statusBarTappedWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)invalidateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1;
- (void)updateStatusStringForAssertion:(id)arg1;
- (void)removeStatusBarStyleOverridesAssertion:(id)arg1;
- (void)addStatusBarStyleOverridesAssertion:(id)arg1 withHandler:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (void)_internalQueue_setupXPCConnectionIfNecessary;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
