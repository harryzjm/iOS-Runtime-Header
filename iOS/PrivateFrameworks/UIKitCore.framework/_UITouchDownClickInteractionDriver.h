//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIGestureRecognizer, UIView, _UITouchDownGestureRecognizer;
@protocol _UIClickInteractionDriverDelegate;

__attribute__((visibility("hidden")))
@interface _UITouchDownClickInteractionDriver : NSObject
{
    _UITouchDownGestureRecognizer *_gesture;
    _Bool _cancelsTouchesInView;
    _Bool _clicksUpAutomaticallyAfterTimeout;
    id <_UIClickInteractionDriverDelegate> _delegate;
    UIView *_view;
    double _allowableMovement;
    unsigned long long _inputPrecision;
}

+ (_Bool)prefersCancelsTouchesInView;
+ (_Bool)requiresForceCapability;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long inputPrecision; // @synthesize inputPrecision=_inputPrecision;
@property(readonly, nonatomic) _Bool clicksUpAutomaticallyAfterTimeout; // @synthesize clicksUpAutomaticallyAfterTimeout=_clicksUpAutomaticallyAfterTimeout;
@property(nonatomic) _Bool cancelsTouchesInView; // @synthesize cancelsTouchesInView=_cancelsTouchesInView;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <_UIClickInteractionDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (void)cancelInteraction;
@property(readonly, nonatomic) _Bool isCurrentlyAcceleratedByForce;
@property(readonly, nonatomic) UIGestureRecognizer *primaryGestureRecognizer;
@property(readonly, nonatomic) _Bool hasExceededAllowableMovement;
@property(readonly, nonatomic) double touchDuration;
@property(readonly, nonatomic) double maximumEffectProgress;
- (id)init;

// Remaining properties
@property(nonatomic) unsigned long long behavior;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long driverStyle;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

