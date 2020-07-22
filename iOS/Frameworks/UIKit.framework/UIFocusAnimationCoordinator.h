//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, UIFocusUpdateContext, _UIFocusAnimationConfiguration;

@interface UIFocusAnimationCoordinator : NSObject
{
    _Bool _locked;
    _UIFocusAnimationConfiguration *_focusingConfiguration;
    _UIFocusAnimationConfiguration *_unfocusingConfiguration;
    NSMutableArray *_focusingAnimations;
    NSMutableArray *_legacyFocusingAnimations;
    NSMutableArray *_unfocusingAnimations;
    NSMutableArray *_legacyUnfocusingAnimations;
    NSMutableArray *_focusingCompletions;
    NSMutableArray *_unfocusingCompletions;
    UIFocusUpdateContext *_focusUpdateContext;
    long long _activeFocusAnimation;
}

+ (id)_focusAnimationCoordinatorForAnimationType:(long long)arg1 withConfiguration:(id)arg2 inContext:(id)arg3;
+ (id)_unfocusingAnimationCoordinatorWithConfiguration:(id)arg1 inContext:(id)arg2;
+ (id)_focusingAnimationCoordinatorWithConfiguration:(id)arg1 inContext:(id)arg2;
@property(readonly, nonatomic) long long activeFocusAnimation; // @synthesize activeFocusAnimation=_activeFocusAnimation;
@property(readonly, nonatomic, getter=_isLocked) _Bool locked; // @synthesize locked=_locked;
@property(readonly, nonatomic, getter=_focusUpdateContext) UIFocusUpdateContext *focusUpdateContext; // @synthesize focusUpdateContext=_focusUpdateContext;
@property(readonly, nonatomic) NSMutableArray *unfocusingCompletions; // @synthesize unfocusingCompletions=_unfocusingCompletions;
@property(readonly, nonatomic) NSMutableArray *focusingCompletions; // @synthesize focusingCompletions=_focusingCompletions;
@property(readonly, nonatomic) NSMutableArray *legacyUnfocusingAnimations; // @synthesize legacyUnfocusingAnimations=_legacyUnfocusingAnimations;
@property(readonly, nonatomic) NSMutableArray *unfocusingAnimations; // @synthesize unfocusingAnimations=_unfocusingAnimations;
@property(readonly, nonatomic) NSMutableArray *legacyFocusingAnimations; // @synthesize legacyFocusingAnimations=_legacyFocusingAnimations;
@property(readonly, nonatomic) NSMutableArray *focusingAnimations; // @synthesize focusingAnimations=_focusingAnimations;
@property(retain, nonatomic) _UIFocusAnimationConfiguration *unfocusingConfiguration; // @synthesize unfocusingConfiguration=_unfocusingConfiguration;
@property(retain, nonatomic) _UIFocusAnimationConfiguration *focusingConfiguration; // @synthesize focusingConfiguration=_focusingConfiguration;
- (void).cxx_destruct;
- (void)_cancelFocusAnimation:(long long)arg1;
- (void)_animateFocusAnimation:(long long)arg1;
- (void)_animate;
- (void)addCoordinatedUnfocusingAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addCoordinatedFocusingAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addCoordinatedAnimationsForAnimation:(long long)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addCoordinatedAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_consumeBlocks:(id)arg1 withAnimationContext:(id)arg2;
- (void)_consumeBlocks:(id)arg1;
- (void)_prepareForFocusAnimation:(long long)arg1;
@property(readonly, copy, nonatomic, getter=_activeConfiguration) _UIFocusAnimationConfiguration *activeConfiguration;
- (id)_configurationForFocusAnimation:(long long)arg1;
- (void)_setConfiguration:(id)arg1 forFocusAnimation:(long long)arg2;
@property(readonly, nonatomic, getter=_unfocusingRepositionAnimationDuration) double unfocusingRepositionAnimationDuration;
@property(readonly, nonatomic, getter=_unfocusingAnimationDuration) double unfocusingAnimationDuration;
@property(readonly, nonatomic, getter=_focusingAnimationDuration) double focusingAnimationDuration;
@property(readonly, nonatomic, getter=_activeAnimationDuration) double activeAnimationDuration;
@property(readonly, nonatomic, getter=_animationDelay) double animationDelay;
@property(readonly, nonatomic, getter=_animationOptions) unsigned long long animationOptions;
- (void)_configureWithFocusUpdateContext:(id)arg1;
- (id)_initWithFocusUpdateContext:(id)arg1;
- (id)init;

@end

