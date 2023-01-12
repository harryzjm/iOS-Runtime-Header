//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class NSMutableDictionary, NSMutableSet;
@protocol UIKeyboardPinchGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardPinchGestureRecognizer : UIGestureRecognizer
{
    _Bool _pinchDetected;
    double _initialPinchSeparation;
    double _pinchSeparationValues[4];
    NSMutableSet *_activeTouches;
    NSMutableDictionary *_initialTouchPoints;
    double _beginPinchTimestamp;
    id <UIKeyboardPinchGestureRecognizerDelegate> _pinchDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double initialPinchSeparation; // @synthesize initialPinchSeparation=_initialPinchSeparation;
@property(readonly, nonatomic) _Bool pinchDetected; // @synthesize pinchDetected=_pinchDetected;
@property(nonatomic) __weak id <UIKeyboardPinchGestureRecognizerDelegate> pinchDelegate; // @synthesize pinchDelegate=_pinchDelegate;
- (double)finalProgressForInitialProgress:(double)arg1;
- (void)interpretTouchesForSplit;
- (void)resetPinchCalculations;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

