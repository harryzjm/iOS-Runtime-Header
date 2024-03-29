//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class NSString, UITouch;

__attribute__((visibility("hidden")))
@interface _UIGestureStudyMetricsGestureRecognizer : UIGestureRecognizer
{
    long long _observedTouchCount;
    double _startTimestamp;
    double _allowableMovement;
    UITouch *_primaryTouch;
    struct CGPoint _originalPosition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITouch *primaryTouch; // @synthesize primaryTouch=_primaryTouch;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(nonatomic) struct CGPoint originalPosition; // @synthesize originalPosition=_originalPosition;
@property(nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(readonly, nonatomic) long long observedTouchCount; // @synthesize observedTouchCount=_observedTouchCount;
@property(readonly, nonatomic) double movement;
@property(readonly, nonatomic) double duration;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
@property(readonly, nonatomic) NSString *eventName;
- (_Bool)_affectedByGesture:(id)arg1;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)locationInView:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

