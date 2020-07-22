//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/CAAnimationDelegate-Protocol.h>

@class CALayer, NSDictionary, NSMapTable, NSMutableArray, NSString, TSDFPSCounter;

__attribute__((visibility("hidden")))
@interface KNTransitionRenderer <CAAnimationDelegate>
{
    CALayer *mBackgroundLayer;
    NSMutableArray *mTextures;
    NSDictionary *mAttributes;
    long long mNumberOfAnimationsStarted;
    NSMapTable *_animatedLayers;
    _Bool mShouldAnimateTransition;
    _Bool mAnimationsRanToCompletion;
    id mTransitionEndCallbackTarget;
    SEL mTransitionEndCallbackSelector;
    id mTransitionImmediateEndCallbackTarget;
    SEL mTransitionImmediateEndCallbackSelector;
    TSDFPSCounter *mFPSCounter;
}

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)updateAnimationTestingLog;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)pauseAnimationsAtTime:(double)arg1;
- (void)stopAnimations;
- (void)forceRemoveAnimations;
- (void)removeAnimationsAndFinish:(_Bool)arg1;
- (void)p_removeAnimationsShouldForceRemove:(_Bool)arg1;
- (void)updateAnimationsForLayerTime:(double)arg1;
- (_Bool)p_addAnimations:(id)arg1 atTime:(double)arg2 relativeToCurrentMediaTime:(_Bool)arg3;
- (_Bool)addAnimationsAtTime:(double)arg1 relativeToCurrentMediaTime:(_Bool)arg2;
- (void)animateWithDelay:(double)arg1;
- (void)renderSlideIndex:(unsigned long long)arg1;
- (void)waitUntilAsyncRenderingIsCompleteShouldCancel:(_Bool)arg1;
- (void)renderTextures;
- (void)generateTextures;
- (void)setupLayerTreeForTransition;
@property(readonly, copy) NSString *description;
- (void)p_checkForNullTransitions:(Class)arg1;
- (void)registerForTransitionImmediateEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForTransitionEndCallback:(SEL)arg1 target:(id)arg2;
- (void)setupPluginContext;
- (id)plugin;
- (void)teardown;
- (void)dealloc;
- (id)initWithEffectClass:(Class)arg1 direction:(unsigned long long)arg2 duration:(double)arg3 session:(id)arg4 attributes:(id)arg5 animatedSlideView:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

