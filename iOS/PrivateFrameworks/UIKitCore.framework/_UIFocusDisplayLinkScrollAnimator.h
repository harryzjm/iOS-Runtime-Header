//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMapTable, NSTimer, UIScreen, _UIFocusEngineScrollableContainerOffsets;

__attribute__((visibility("hidden")))
@interface _UIFocusDisplayLinkScrollAnimator : NSObject
{
    UIScreen *_screen;
    _UIFocusEngineScrollableContainerOffsets *_singleScrollableContainerEntry;
    NSMapTable *_scrollableContainers;
    CADisplayLink *_displayLink;
    NSTimer *_timer;
    double _lastTimerFireDate;
    double _defaultConvergenceRate;
}

- (void).cxx_destruct;
- (struct CGPoint)_hyperJumpContentOffsetIfNecessaryForEntry:(id)arg1 currentOffset:(struct CGPoint)arg2;
- (struct CGPoint)_applyAccelerationLimitToAcceleration:(struct CGPoint)arg1 currentOffset:(struct CGPoint)arg2 targetOffset:(struct CGPoint)arg3;
- (void)_processEntry:(id)arg1 timeDelta:(long long)arg2 completed:(id)arg3 cancelled:(id)arg4;
- (void)_removeEntry:(id)arg1;
- (void)_commonHeartbeat:(double)arg1;
- (void)_displayLinkHeartbeat:(id)arg1;
- (void)_timerHeartbeat:(id)arg1;
- (_Bool)_shouldPushAndPopRunLoopModes;
- (void)_updateHeartbeatConfiguration;
- (void)_switchToTimerScrolling;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)_canCreateDisplayLink;
- (id)_createEntryForEnvironmentScrollableContainer:(id)arg1;
- (id)_entryForEnvironmentScrollableContainer:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)_entryForScrollableContainer:(id)arg1;
- (struct CGPoint)velocityToScrollFromOffset:(struct CGPoint)arg1 toOffset:(struct CGPoint)arg2;
- (struct CGPoint)currentVelocityForScrollableContainer:(id)arg1;
- (struct CGPoint)targetContentOffsetForScrollableContainer:(id)arg1;
- (_Bool)isAnimatingScrollableContainer:(id)arg1;
- (void)adjustTargetContentOffsetForScrollableContainer:(id)arg1 byDelta:(struct CGPoint)arg2;
- (void)cancelScrollingForScrollableContainer:(id)arg1;
- (void)setTargetContentOffset:(struct CGPoint)arg1 forEnvironmentScrollableContainer:(id)arg2 convergenceRate:(double)arg3 completion:(CDUnknownBlockType)arg4;
@property(nonatomic) double defaultConvergenceRate;
- (void)dealloc;
- (id)initWithScreen:(id)arg1;

@end

