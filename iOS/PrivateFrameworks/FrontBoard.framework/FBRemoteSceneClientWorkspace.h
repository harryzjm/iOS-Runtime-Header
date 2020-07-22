//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/FBApplicationProcessLaunchTransactionObserver-Protocol.h>
#import <FrontBoard/FBSceneClientProvider-Protocol.h>
#import <FrontBoard/FBUISceneClientDelegate-Protocol.h>
#import <FrontBoard/FBUISceneClientWorkspace-Protocol.h>

@class FBApplicationProcessLaunchTransaction, FBProcess, FBSceneClientProviderInvalidationAction, FBUISceneClientIdentity, FBWorkspace, NSMutableDictionary, NSString;
@protocol FBUIProcess;

@interface FBRemoteSceneClientWorkspace : NSObject <FBApplicationProcessLaunchTransactionObserver, FBUISceneClientDelegate, FBUISceneClientWorkspace, FBSceneClientProvider>
{
    FBUISceneClientIdentity *_clientIdentity;
    FBWorkspace *_processWorkspace;
    NSMutableDictionary *_hostsByIdentifer;
    NSMutableDictionary *_clientsByIdentifier;
    NSMutableDictionary *_handlerByIdentifier;
    FBApplicationProcessLaunchTransaction *_launchTransaction;
    FBSceneClientProviderInvalidationAction *_invalidationAction;
    _Bool _invalidated;
}

@property(retain, nonatomic) FBWorkspace *processWorkspace; // @synthesize processWorkspace=_processWorkspace;
@property(readonly, copy, nonatomic) FBUISceneClientIdentity *clientIdentity; // @synthesize clientIdentity=_clientIdentity;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)transactionDidComplete:(id)arg1;
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
- (void)unregisterHost:(id)arg1;
- (id)registerHost:(id)arg1;
- (void)registerInvalidationAction:(id)arg1;
- (void)didInvalidateSceneClient:(id)arg1;
- (void)endTransaction;
- (void)beginTransaction;
- (id)clientForSceneIdentifier:(id)arg1;
@property(readonly, retain, nonatomic) FBProcess<FBUIProcess> *clientProcess;
- (id)_createSceneClientForIdentifier:(id)arg1 withSpecification:(id)arg2;
- (void)_processLaunched:(id)arg1;
- (id)_processWorkspace;
- (id)createHostForSceneWithIdentifier:(id)arg1 initialParameters:(id)arg2;
- (void)registerSceneWithIdentifier:(id)arg1 specification:(id)arg2 acquisitionHandler:(CDUnknownBlockType)arg3;
- (void)initialize;
- (void)invalidate;
- (void)dealloc;
- (id)initWithClientIdentity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

