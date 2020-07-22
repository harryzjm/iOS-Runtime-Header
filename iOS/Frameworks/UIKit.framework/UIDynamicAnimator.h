//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CADisplayLink, NSArray, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, PKExtendedPhysicsWorld, UIDynamicAnimatorTicker, UIDynamicsDebug, UIView;
@protocol UIDynamicAnimatorDelegate, _UIDynamicReferenceSystem;

@interface UIDynamicAnimator : NSObject
{
    PKExtendedPhysicsWorld *_world;
    CADisplayLink *_displaylink;
    double _elapsedTime;
    double _realElapsedTime;
    double _lastUpdateTime;
    double _lastInterval;
    long long _ticks;
    UIDynamicsDebug *_dynamicsDebug;
    NSMutableDictionary *_bodies;
    NSMutableArray *_topLevelBehaviors;
    NSMutableSet *_registeredBehaviors;
    NSMutableSet *_behaviorsToRemove;
    NSMutableSet *_behaviorsToAdd;
    NSMutableIndexSet *_availableFieldCategories;
    NSMutableArray *_postSolverActions;
    NSMutableArray *_beginContacts;
    NSMutableArray *_endContacts;
    _Bool _isInWorldStepMethod;
    _Bool _needsLocalBehaviorReevaluation;
    _Bool _stopping;
    unsigned long long _referenceSystemType;
    unsigned long long _integralization;
    struct {
        unsigned int delegateImplementsDynamicAnimatorDidPause:1;
        unsigned int delegateImplementsDynamicAnimatorWillResume:1;
    } _stateFlags;
    double _accuracy;
    int _registeredCollisionGroups;
    int _registeredImplicitBounds;
    struct CGRect _referenceSystemBounds;
    id <_UIDynamicReferenceSystem> _referenceSystem;
    int _debugInterval;
    _Bool _debugEnabled;
    CDUnknownBlockType _action;
    id <UIDynamicAnimatorDelegate> _delegate;
    _Bool _disableDisplayLink;
    double _speed;
    UIDynamicAnimatorTicker *_ticker;
}

+ (id)_allDynamicAnimators;
+ (void)_clearReferenceViewFromAnimators:(id)arg1;
+ (void)_referenceViewSizeChanged:(id)arg1;
+ (void)_unregisterAnimator:(id)arg1;
+ (void)_registerAnimator:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) UIDynamicAnimatorTicker *ticker; // @synthesize ticker=_ticker;
- (void).cxx_destruct;
- (id)_referenceSystem;
- (unsigned long long)_referenceSystemType;
- (struct CGRect)_referenceSystemBounds;
- (void)_setReferenceSystem:(id)arg1;
@property(readonly, nonatomic) UIView *referenceView;
- (void)setReferenceView:(id)arg1;
- (double)_realElapsedTime;
- (long long)_ticks;
- (void)_displayLinkTick:(id)arg1;
- (double)_animatorInterval;
- (_Bool)_animatorStep:(double)arg1;
- (_Bool)_alwaysDisableDisplayLink;
- (void)_setAlwaysDisableDisplayLink:(_Bool)arg1;
- (void)_setAction:(CDUnknownBlockType)arg1;
- (void)_setDelegate:(id)arg1;
@property(nonatomic) __weak id <UIDynamicAnimatorDelegate> delegate;
- (id)_delegate;
- (void)_postSolverStep;
- (void)_runBlockPostSolverIfNeeded:(CDUnknownBlockType)arg1;
- (void)_preSolverStep;
- (void)_setDebugEnabled:(_Bool)arg1;
- (_Bool)_debugEnabled;
- (int)_debugInterval;
- (void)_setDebugInterval:(int)arg1;
- (unsigned long long)debugFrameInterval;
- (void)setDebugFrameInterval:(unsigned long long)arg1;
- (void)setDebugEnabled:(_Bool)arg1;
- (_Bool)isDebugEnabled;
- (double)debugAnimationSpeed;
- (void)setDebugAnimationSpeed:(double)arg1;
- (void)_start;
- (void)_tickle;
- (void)_clearReferenceView;
- (void)_stop;
- (void)_setRunning:(_Bool)arg1;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (_Bool)_isWorldActive;
- (void)_setupWorld;
- (double)_speed;
- (void)_setSpeed:(double)arg1;
- (id)_world;
- (id)_bodyForItem:(id)arg1;
- (id)_keyForItem:(id)arg1;
- (id)_registerBodyForItem:(id)arg1;
- (id)_newBodyForItem:(id)arg1 inItemGroup:(id)arg2;
- (void)updateItemUsingCurrentState:(id)arg1;
- (void)updateItemFromCurrentState:(id)arg1;
- (id)layoutAttributesForCellAtIndexPath:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)itemsInRect:(struct CGRect)arg1;
- (void)_unregisterBodyForItem:(id)arg1 action:(CDUnknownBlockType)arg2;
- (void)_defaultMapper:(id)arg1 position:(struct CGPoint)arg2 angle:(double)arg3 itemType:(unsigned long long)arg4;
- (unsigned long long)_animatorIntegralization;
- (void)_setAnimatorIntegralization:(unsigned long long)arg1;
- (void)_unregisterCollisionGroup;
- (int)_registerCollisionGroup;
@property(readonly, copy, nonatomic) NSArray *behaviors;
@property(readonly, nonatomic) double elapsedTime;
- (void)removeAllBehaviors;
- (void)_traverseBehaviorHierarchy:(CDUnknownBlockType)arg1;
- (void)_unregisterImplicitBounds;
- (void)_registerImplicitBounds;
- (void)_reevaluateImplicitBounds;
- (void)_evaluateLocalBehaviors;
- (void)_shouldReevaluateLocalBehaviors;
- (void)_reportEndContacts;
- (void)_reportBeginContacts;
- (void)didEndContact:(id)arg1;
- (void)didBeginContact:(id)arg1;
- (void)_unregisterBehavior:(id)arg1;
- (void)_registerBehavior:(id)arg1;
- (_Bool)_containsBehavior:(id)arg1;
- (void)_checkBehavior:(id)arg1;
- (void)removeBehavior:(id)arg1;
- (void)addBehavior:(id)arg1;
- (double)_ptmRatio;
- (id)recursiveDescription;
- (id)description;
- (void)dealloc;
- (id)initWithReferenceSystem:(id)arg1;
- (id)init;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithReferenceView:(id)arg1;
- (void)_unregisterFieldCategoryForFieldBehavior:(id)arg1;
- (void)_registerFieldCategoryForFieldBehavior:(id)arg1;

@end

