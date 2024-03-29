//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol _UIEventDeferringSystemShellBehaviorDelegate;

__attribute__((visibility("hidden")))
@interface _UIEventDeferringBehavior_SystemShell
{
    struct {
        unsigned int hasSystemShellBehaviorDelegate:1;
        unsigned int delegateWantsLocalCompatibilityRules:1;
        unsigned int delegateShouldSuppressRemoteRule:1;
        unsigned int delegateCompareRemoteRules:1;
    } _behaviorDelegateFlags;
    id <_UIEventDeferringSystemShellBehaviorDelegate> _systemShellBehaviorDelegate;
}

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (long long)compareRemoteRuleOwningElement:(id)arg1 toElement:(id)arg2 inEnvironment:(id)arg3;
- (_Bool)shouldSuppressRemoteRuleForOwningElement:(id)arg1 inEnvironment:(id)arg2;
- (_Bool)shouldDisableRemoteViewControllerEventDeferringForKeyboardKeyWindowChanges;
- (_Bool)wantsLocalCompatibilityRules;
- (void)setSystemShellBehaviorDelegate:(id)arg1;
- (id)systemShellBehaviorDelegate;
- (id)initWithEventDeferringManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

