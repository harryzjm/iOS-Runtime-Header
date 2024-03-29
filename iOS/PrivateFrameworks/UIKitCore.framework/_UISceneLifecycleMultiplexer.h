//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIApplicationSceneSettings, UIScene;

__attribute__((visibility("hidden")))
@interface _UISceneLifecycleMultiplexer : NSObject
{
    UIScene *_uiSceneOfRecord;
    UIApplicationSceneSettings *_transitionalLifecycleState;
    struct {
        unsigned int completedLaunch:1;
        unsigned int activatedOnce:1;
    } _multiplexerFlags;
}

+ (void)configureInitialDeactivationReasons:(unsigned long long)arg1;
+ (id)_mostActiveSceneForApplicationState;
+ (id)mostActiveWindowSceneOnScreen:(id)arg1;
+ (id)mostActiveScene;
+ (long long)_compareLifecycleStateOfScene:(id)arg1 toScene:(id)arg2;
+ (id)_mostActiveSceneIncludingInternal:(_Bool)arg1 withTest:(CDUnknownBlockType)arg2;
+ (id)mostActiveSceneWithTest:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_globalTestRelatedActivationActionsForFirstActivation:(_Bool)arg1 foreground:(_Bool)arg2 interfaceStyle:(long long)arg3 transitionContext:(id)arg4;
- (_Bool)_prepareForClientSuspensionWithScene:(id)arg1;
- (void)_scheduleFirstCommit;
- (void)_evalTransitionToSettings:(id)arg1 fromSettings:(id)arg2 forceExit:(_Bool)arg3 withTransitionStore:(CDStruct_a70f6672)arg4;
- (void)_performBlock:(CDUnknownBlockType)arg1 withApplicationOfDeactivationReasons:(unsigned long long)arg2 fromReasons:(unsigned long long)arg3;
- (void)collectBackingStores;
- (void)forceExitWithTransitionContext:(id)arg1 scene:(id)arg2;
- (void)uiScene:(id)arg1 transitionedFromState:(id)arg2 withTransitionContext:(id)arg3;
@property(readonly, nonatomic) _Bool activatedOnce;
- (void)noteApplicationLaunchCompleted;
- (void)completeApplicationLaunchWithFBSScene:(id)arg1 transitionContext:(id)arg2;
- (_Bool)isTrackingScene:(id)arg1;
@property(readonly, nonatomic) _Bool runningInTaskSwitcher;
@property(readonly, nonatomic) _Bool suspendedUnderLock;
@property(readonly, nonatomic) _Bool suspendedEventsOnly;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) long long applicationState;
@property(readonly, nonatomic) _Bool lifecycleWantsUnnecessaryDelayForSceneDelivery;
- (id)initForAppSingleton:(id)arg1;

@end

