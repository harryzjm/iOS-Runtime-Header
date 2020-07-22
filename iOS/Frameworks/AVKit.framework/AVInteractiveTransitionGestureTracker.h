//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer;
@protocol AVInteractiveTransitionGestureTrackerDelegate;

@interface AVInteractiveTransitionGestureTracker : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _pinchToDismissEnabled;
    _Bool _pinchToPresentEnabled;
    _Bool _panToDismissEnabled;
    _Bool _trackingUpwardPan;
    long long _activeGestureType;
    double _rotation;
    double _previousPinchScale;
    id <AVInteractiveTransitionGestureTrackerDelegate> _delegate;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIRotationGestureRecognizer *_rotationGestureRecognizer;
    NSArray *_recognizers;
    struct CGPoint _locationOfInitialPinchInWindow;
}

@property(nonatomic, getter=isTrackingUpwardPan) _Bool trackingUpwardPan; // @synthesize trackingUpwardPan=_trackingUpwardPan;
@property(readonly, nonatomic) NSArray *recognizers; // @synthesize recognizers=_recognizers;
@property(readonly, nonatomic) UIRotationGestureRecognizer *rotationGestureRecognizer; // @synthesize rotationGestureRecognizer=_rotationGestureRecognizer;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(readonly, nonatomic) __weak id <AVInteractiveTransitionGestureTrackerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double previousPinchScale; // @synthesize previousPinchScale=_previousPinchScale;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) struct CGPoint locationOfInitialPinchInWindow; // @synthesize locationOfInitialPinchInWindow=_locationOfInitialPinchInWindow;
@property(nonatomic, getter=isPanToDismissEnabled) _Bool panToDismissEnabled; // @synthesize panToDismissEnabled=_panToDismissEnabled;
@property(nonatomic, getter=isPinchToPresentEnabled) _Bool pinchToPresentEnabled; // @synthesize pinchToPresentEnabled=_pinchToPresentEnabled;
@property(nonatomic, getter=isPinchToDismissEnabled) _Bool pinchToDismissEnabled; // @synthesize pinchToDismissEnabled=_pinchToDismissEnabled;
@property(nonatomic) long long activeGestureType; // @synthesize activeGestureType=_activeGestureType;
- (void).cxx_destruct;
- (void)_reset;
- (void)_cancel;
- (void)_finish;
- (void)_beginTracking:(long long)arg1;
- (void)_handlePanGesture:(id)arg1;
- (void)_handleRotationGesture:(id)arg1;
- (void)_handlePinchGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)transitionDidBegin;
- (_Bool)isTracking;
- (void)addRecognizersToView:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

