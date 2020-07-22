//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class UIInputViewAnimationStyle, UIInputViewSet, UISnapshotView;

__attribute__((visibility("hidden")))
@interface UIInputViewTransition : NSObject
{
    UIInputViewSet *oldSet;
    UIInputViewSet *newSet;
    UIInputViewAnimationStyle *animationStyle;
    _Bool cancelled;
    int animationState;
    double animationStartTime;
    _Bool skipNotifications;
    _Bool skipFencing;
    struct CGRect beginFrame;
    struct CGRect endFrame;
    struct CGRect beginFrameScreen;
    struct CGRect endFrameScreen;
    struct CGRect beginFloatingFrame;
    struct CGRect endFloatingFrame;
    struct CGRect beginFloatingFrameScreen;
    struct CGRect endFloatingFrameScreen;
    int activeClippingModes;
    UISnapshotView *snapshotView;
    struct CGRect snapshotViewBeginFrame;
    struct CGRect snapshotViewEndFrame;
}

@property(nonatomic) int activeClippingModes; // @synthesize activeClippingModes;
@property(nonatomic) struct CGRect snapshotViewEndFrame; // @synthesize snapshotViewEndFrame;
@property(nonatomic) struct CGRect snapshotViewBeginFrame; // @synthesize snapshotViewBeginFrame;
@property(retain, nonatomic) UISnapshotView *snapshotView; // @synthesize snapshotView;
@property(nonatomic) struct CGRect endFloatingFrameScreen; // @synthesize endFloatingFrameScreen;
@property(nonatomic) struct CGRect beginFloatingFrameScreen; // @synthesize beginFloatingFrameScreen;
@property(nonatomic) struct CGRect endFloatingFrame; // @synthesize endFloatingFrame;
@property(nonatomic) struct CGRect beginFloatingFrame; // @synthesize beginFloatingFrame;
@property(nonatomic) struct CGRect endFrameScreen; // @synthesize endFrameScreen;
@property(nonatomic) struct CGRect beginFrameScreen; // @synthesize beginFrameScreen;
@property(nonatomic) struct CGRect endFrame; // @synthesize endFrame;
@property(nonatomic) struct CGRect beginFrame; // @synthesize beginFrame;
@property(nonatomic) _Bool skipFencing; // @synthesize skipFencing;
@property(nonatomic) _Bool skipNotifications; // @synthesize skipNotifications;
@property(nonatomic) double animationStartTime; // @synthesize animationStartTime;
@property(nonatomic) int animationState; // @synthesize animationState;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled;
@property(retain, nonatomic) UIInputViewAnimationStyle *animationStyle; // @synthesize animationStyle;
@property(retain, nonatomic) UIInputViewSet *oldSet; // @synthesize oldSet;
- (id)description;
@property(readonly, nonatomic) _Bool ignoreFrameChanges;
- (_Bool)isOnScreen;
- (_Bool)isAccessoryViewChangedOnly;
- (_Bool)requiresAutomaticAppearanceEnabled;
- (_Bool)shouldRecomputeEndFrame;
- (_Bool)shouldCompleteOnSuspend;
- (_Bool)isAlmostDone;
- (_Bool)subsumesTransition:(id)arg1;
@property(readonly, nonatomic) int cancelState;
@property(readonly, nonatomic) int endState;
@property(readonly, nonatomic) int transitioningState;
@property(readonly, nonatomic) int beginState;
- (_Bool)fadeAccessoryView;
- (void)postNotificationsForTransitionEnd;
- (void)postNotificationsForTransitionStart;
- (id)userInfoForTransition;
@property(readonly, nonatomic) struct CGPoint deprecatedCenterEnd;
@property(readonly, nonatomic) struct CGPoint deprecatedCenterBegin;
@property(readonly, nonatomic) struct CGRect deprecatedBounds;
- (void)setNewSet:(id)arg1;
- (id)newSet;
- (void)dealloc;

@end

