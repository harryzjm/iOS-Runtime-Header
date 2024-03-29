//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class UIDelayedAction, UITouch;

__attribute__((visibility("hidden")))
@interface UIDragRecognizer : UIGestureRecognizer
{
    double _maximumDeviation;
    double _minimumDistance;
    struct CGPoint _startPosition;
    _Bool _restrictsToAngle;
    double _angle;
    UITouch *_touch;
    UIDelayedAction *_tooSlow;
    double _startAngle;
    double _quietPeriod;
    _Bool _canBeginDrag;
    UIDelayedAction *ignoreTouch;
}

+ (_Bool)_shouldDefaultToTouches;
- (void).cxx_destruct;
@property(retain, nonatomic) UIDelayedAction *ignoreTouch; // @synthesize ignoreTouch;
@property(nonatomic) _Bool canBeginDrag; // @synthesize canBeginDrag=_canBeginDrag;
@property(nonatomic) double quietPeriod; // @synthesize quietPeriod=_quietPeriod;
@property(nonatomic) double startAngle; // @synthesize startAngle=_startAngle;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) _Bool restrictsToAngle; // @synthesize restrictsToAngle=_restrictsToAngle;
@property(retain, nonatomic) UITouch *touch; // @synthesize touch=_touch;
@property(nonatomic) double minimumDistance; // @synthesize minimumDistance=_minimumDistance;
@property(nonatomic) struct CGPoint startPosition; // @synthesize startPosition=_startPosition;
@property(nonatomic) double maximumDeviation; // @synthesize maximumDeviation=_maximumDeviation;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)clearIgnoreTouch;
- (void)tooSlow:(id)arg1;
- (void)clearTimer;
- (void)_resetGestureRecognizer;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

