//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSTimer, UITouch;

@interface MPTapGestureRecognizer : UIGestureRecognizer
{
    unsigned long long _lastTapCount;
    struct CGPoint _tapLocation;
    UITouch *_trackingTouch;
    NSTimer *_tapHandleTimer;
}

@property unsigned long long tapCount; // @synthesize tapCount=_lastTapCount;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (struct CGPoint)locationInView:(id)arg1;
- (void)_delayedHandleTaps:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_resetTapTimer;
- (void)_setTapTimerWithDuration:(double)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

