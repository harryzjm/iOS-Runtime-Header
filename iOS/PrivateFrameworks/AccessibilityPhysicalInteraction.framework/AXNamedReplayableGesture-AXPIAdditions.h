//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityUtilities/AXNamedReplayableGesture.h>

@interface AXNamedReplayableGesture (AXPIAdditions)
+ (void)_addFingerPoints:(id)arg1 toReplayableGesture:(id)arg2 atTime:(double)arg3;
+ (void)_addAllFingerPointsForPoint:(struct CGPoint)arg1 numberOfFingers:(unsigned long long)arg2 toReplayableGesture:(id)arg3 atTime:(double)arg4;
+ (id)_pinchGestureWithCenter:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 radiusDelta:(double)arg3 angleDelta:(double)arg4 startingWidth:(double)arg5;
+ (id)rotateLeftGestureWithPoint:(struct CGPoint)arg1 bounds:(struct CGRect)arg2;
+ (id)rotateRightGestureWithPoint:(struct CGPoint)arg1 bounds:(struct CGRect)arg2;
+ (id)pinchOutGestureWithPoint:(struct CGPoint)arg1 bounds:(struct CGRect)arg2;
+ (id)pinchInGestureWithPoint:(struct CGPoint)arg1 bounds:(struct CGRect)arg2;
+ (id)forceTouchGestureAtPoint:(struct CGPoint)arg1;
+ (id)scrollGestureFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 duration:(double)arg3;
+ (id)lineGestureBetweenPoints:(id)arg1 duration:(double)arg2 numberOfFingers:(unsigned long long)arg3 initialHoldDuration:(double)arg4;
+ (id)lineGestureBetweenPoints:(id)arg1 duration:(double)arg2 numberOfFingers:(unsigned long long)arg3;
+ (id)flickGestureStartingAtPoint:(struct CGPoint)arg1 endingAtPoint:(struct CGPoint)arg2 numberOfFingers:(unsigned long long)arg3;
+ (id)flickGestureAtPoint:(struct CGPoint)arg1 angle:(double)arg2 numberOfFingers:(unsigned long long)arg3;
+ (id)holdGestureAtPoint:(struct CGPoint)arg1 withDuration:(double)arg2 numberOfFingers:(unsigned long long)arg3;
+ (id)longPressGestureAtPoint:(struct CGPoint)arg1;
+ (id)_tapGestureAtPoint:(struct CGPoint)arg1 isDoubleTap:(_Bool)arg2 numberOfFingers:(unsigned long long)arg3 force:(double)arg4;
+ (id)tapGestureAtPoint:(struct CGPoint)arg1 isDoubleTap:(_Bool)arg2 numberOfFingers:(unsigned long long)arg3;
+ (id)lineGestureBetweenPoints:(id)arg1 duration:(double)arg2;
+ (id)flickGestureAtPoint:(struct CGPoint)arg1 angle:(double)arg2;
+ (id)tapGestureAtPoint:(struct CGPoint)arg1;
@end

