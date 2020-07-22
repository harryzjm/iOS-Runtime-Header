//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class FBSDisplayIdentity, NSString;

@interface FBUIApplicationSceneDeactivationAssertion : NSObject <BSDescriptionProviding>
{
    FBSDisplayIdentity *_displayIdentity;
    double _sceneLevel;
    long long _reason;
    CDUnknownBlockType _predicate;
    _Bool _acquired;
}

@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity; // @synthesize displayIdentity=_displayIdentity;
@property(readonly, nonatomic, getter=isAcquired) _Bool acquired; // @synthesize acquired=_acquired;
@property(readonly, copy, nonatomic) CDUnknownBlockType predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) double sceneLevel; // @synthesize sceneLevel=_sceneLevel;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)relinquish;
- (void)acquireWithPredicate:(CDUnknownBlockType)arg1 transitionContext:(id)arg2;
- (void)acquireWithTransitionContext:(id)arg1;
- (void)acquireWithPredicate:(CDUnknownBlockType)arg1;
- (void)acquire;
- (void)dealloc;
- (id)_initWithReason:(long long)arg1 sceneLevel:(double)arg2 forDisplayWithIdentity:(id)arg3;
- (id)initWithReason:(long long)arg1 sceneLevel:(double)arg2;
- (id)initWithReason:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
