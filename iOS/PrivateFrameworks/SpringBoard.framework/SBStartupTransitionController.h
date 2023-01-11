//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/BSTransactionObserver-Protocol.h>

@class BSTransaction, BSTransactionBlockObserver, NSSet, NSString, SBInitialRestartState, SBStartupTransitionContextPersistence, SBStartupTransitionFactory;
@protocol SBStartupTransition;

@interface SBStartupTransitionController : NSObject <BSTransactionObserver, BSDescriptionProviding>
{
    SBInitialRestartState *_initialRestartState;
    SBStartupTransitionContextPersistence *_transitionContextPersistence;
    SBStartupTransitionFactory *_transitionFactory;
    BSTransaction<SBStartupTransition> *_transition;
    BSTransactionBlockObserver *_transitionObserver;
    _Bool _ranOnce;
    NSSet *_renderOverlayDismissActions;
}

- (void).cxx_destruct;
@property(retain, nonatomic, getter=_transitionFactory, setter=_setTransitionFactory:) SBStartupTransitionFactory *transitionFactory; // @synthesize transitionFactory=_transitionFactory;
@property(retain, nonatomic, getter=_transitionContextPersistence, setter=_setTransitionContextPersistence:) SBStartupTransitionContextPersistence *transitionContextPersistence; // @synthesize transitionContextPersistence=_transitionContextPersistence;
@property(readonly, nonatomic) BSTransaction<SBStartupTransition> *startupTransition; // @synthesize startupTransition=_transition;
- (void)transactionDidComplete:(id)arg1;
- (void)transactionDidBegin:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)_saveContextFromTransitionContext:(id)arg1;
- (void)initializeAndRunStartupTransition:(CDUnknownBlockType)arg1;
- (id)initWithInitialRestartState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
