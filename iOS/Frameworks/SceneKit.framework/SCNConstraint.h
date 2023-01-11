//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, SCNOrderedDictionary;

@interface SCNConstraint : NSObject <NSCopying, NSSecureCoding, SCNAnimatable>
{
    struct __C3DConstraint *_constraintRef;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    _Bool _enabled;
    _Bool _incremental;
    double _influenceFactor;
}

+ (_Bool)supportsSecureCoding;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (void)removeAllBindings;
- (void)unbindAnimatablePath:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)_scnBindings;
- (_Bool)isAnimationForKeyPaused:(id)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(_Bool)arg1 forKey:(id)arg2 pausedByNode:(_Bool)arg3;
- (id)animationPlayerForKey:(id)arg1;
- (void)_copyAnimationsFrom:(id)arg1;
- (id)_scnAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (void)_syncObjCAnimations;
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (_Bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (const void *)__CFObject;
- (_Bool)isPausedOrPausedByInheritance;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)finalizeDecodeConstraint:(id)arg1;
@property(nonatomic) double influenceFactor;
@property(nonatomic, getter=isIncremental) _Bool incremental;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)setConstraintRef:(struct __C3DConstraint *)arg1;
- (struct __C3DConstraint *)constraintRef;
- (void)setName:(id)arg1;
- (id)name;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

