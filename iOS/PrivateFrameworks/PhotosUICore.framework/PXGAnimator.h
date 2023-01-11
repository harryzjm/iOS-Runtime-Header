//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXGAnimationDataStore, PXGAnimatorLayout, PXGIndexSetArray, PXGSpriteDataStore;

@interface PXGAnimator : NSObject
{
    PXGAnimationDataStore *_animationDataStore;
    PXGAnimatorLayout *_animatorLayout;
    double _lastUpdateTime;
    unsigned int _numberOfProlongatedSprites;
    PXGIndexSetArray *_spriteIndexesByGroupIndex;
    PXGSpriteDataStore *_doubleSidedSpriteDataStore;
    PXGSpriteDataStore *_oldAnimationPresentationSpriteDataStore;
    _Bool _isSkippingAnimations;
    _Bool _animating;
    double _speed;
    long long _computeCount;
    long long _preferredFramesPerSecond;
}

- (void).cxx_destruct;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property(readonly, nonatomic) long long computeCount; // @synthesize computeCount=_computeCount;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void)_stopAllAnimations;
@property(readonly, nonatomic) _Bool hasCriticalAnimations;
- (void)retargetAnimationsAfterStartTime:(double)arg1 newStartTime:(double)arg2;
- (void)computeAnimationStateForTime:(double)arg1 inputSpriteDataStore:(id)arg2 inputChangeDetails:(id)arg3 inputLayout:(id)arg4 viewportShift:(struct CGPoint)arg5 animationPresentationSpriteDataStore:(id)arg6 animationTargetSpriteDataStore:(id)arg7 animationChangeDetails:(out id *)arg8 animationLayout:(out id *)arg9;
- (id)_animationByAnimationIndexForAnimations:(id)arg1;
- (void)dealloc;
- (id)init;

@end
