//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, NSTimer, UIScrollView, _UIFocusEnginePanGestureRecognizer, _UIFocusFastScrollingTouchSequence, _UIRotaryGestureRecognizer;
@protocol _UIFocusFastScrollingRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingRecognizer : NSObject
{
    _UIFocusEnginePanGestureRecognizer *_panGesture;
    _UIRotaryGestureRecognizer *_rotaryGesture;
    _UIFocusFastScrollingTouchSequence *_currentTouch;
    NSMapTable *_swipeSequences;
    NSTimer *_swipeIntervalTimer;
    UIScrollView *_previewingScrollView;
    NSTimer *_previewingTouchTimer;
    unsigned long long _spatialFocusUpdateCount;
    _Bool _persistFastScrollingPreviewThroughReset;
    _Bool _enabled;
    id <_UIFocusFastScrollingRecognizerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <_UIFocusFastScrollingRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)focusEnginePanGesture:(id)arg1 touchCancelledAtDigitizerLocation:(struct CGPoint)arg2;
- (void)focusEnginePanGesture:(id)arg1 touchEndedAtDigitizerLocation:(struct CGPoint)arg2;
- (void)focusEnginePanGesture:(id)arg1 touchMovedToDigitizerLocation:(struct CGPoint)arg2;
- (void)focusEnginePanGesture:(id)arg1 touchBeganAtDigitizerLocation:(struct CGPoint)arg2;
- (void)_deactivatePreviewingScrollViewIfNecessary;
- (void)_activatePreviewingScrollViewForScrollingStyle:(long long)arg1 emphasisAnimation:(_Bool)arg2 overrideIndexDisplayMode:(_Bool)arg3;
- (void)_activatePreviewingScrollViewForEdgeGesture;
- (void)_activatePreviewingScrollViewForEdgeGestureAfterDelay;
- (void)_notifyDelegateWithScrollView:(id)arg1 scrollingStyle:(long long)arg2 heading:(unsigned long long)arg3;
- (_Bool)_scrollViewIsEligibleForFastScrolling:(id)arg1 alongHeading:(unsigned long long)arg2 withScrollingStyle:(long long)arg3;
- (id)_scrollViewsContainingCurrentlyFocusedItem;
- (_Bool)_attemptToImmediatelyRecognizeEdgeGesture;
- (id)_deepestEligibleScrollViewContainingFocusedItem:(unsigned long long)arg1 withScrollingStyle:(long long)arg2;
- (_Bool)_canFastScrollWithEdgeSwipe;
- (_Bool)_swipeSequenceCanBeginFastScrolling:(id)arg1;
- (void)_updateActiveSwipeSequencesForScrollViews:(id)arg1;
- (unsigned long long)_bestHeadingForAccumulator:(struct CGVector)arg1;
- (void)_swipeIntervalElapsed:(id)arg1;
- (void)_stopSwipeIntervalTimer;
- (void)_startSwipeIntervalTimer;
- (void)_swipeOccuredAlongHeading:(unsigned long long)arg1;
- (void)_touchSequenceDidEnd:(id)arg1;
- (void)reset;
- (void)_handlePanGesture:(id)arg1;
- (_Bool)attemptToImmediatelyRecognizeRotaryGesture;
- (_Bool)canImmediatelyRecognizeRotaryGesture;
- (void)deactivateRotaryGesturePreviewingScrollViewIfNecessary;
- (void)activateRotaryGesturePreviewingScrollViewWithEmphasisAnimation:(_Bool)arg1;
- (void)pageButtonPressWithHeading:(unsigned long long)arg1 didRepeat:(unsigned long long)arg2;
- (void)joystickMovementWithHeading:(unsigned long long)arg1 didRepeat:(unsigned long long)arg2;
- (void)directionalPressWithHeading:(unsigned long long)arg1 didRepeat:(unsigned long long)arg2;
- (void)_focusDidUpate:(id)arg1;
- (void)dealloc;
- (id)initWithPanGesture:(id)arg1 rotaryGesture:(id)arg2;
- (id)initWithPanGesture:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

