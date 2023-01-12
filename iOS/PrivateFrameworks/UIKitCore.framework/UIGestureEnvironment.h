//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSMutableSet, UIGestureGraph;
@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface UIGestureEnvironment : NSObject
{
    struct __CFRunLoopObserver *_gestureEnvironmentUpdateObserver;
    NSMutableSet *_gestureRecognizersNeedingUpdate;
    NSMutableSet *_gestureRecognizersNeedingReset;
    NSMutableSet *_gestureRecognizersNeedingRemoval;
    NSMutableArray *_dirtyGestureRecognizers;
    NSMutableSet *_gestureRecognizersBlockedFromReset;
    unsigned long long _lastBlockedResetEvaluationMachTime;
    id <BSInvalidatable> _blockedResetStateCaptureToken;
    NSMutableArray *_delayedTouches;
    NSMutableArray *_delayedTouchesToSend;
    NSMutableArray *_delayedPresses;
    NSMutableArray *_delayedPressesToSend;
    NSMutableArray *_preUpdateActions;
    _Bool _dirtyGestureRecognizersUnsorted;
    _Bool _updateExclusivity;
    _Bool _isUpdatingGestureEnvironment;
    UIGestureGraph *_dependencyGraph;
    NSMapTable *_nodesByGestureRecognizer;
}

- (void).cxx_destruct;
- (void)removeGestureRecognizer:(id)arg1;
- (void)addGestureRecognizer:(id)arg1;
- (void)dealloc;
- (id)init;

@end

