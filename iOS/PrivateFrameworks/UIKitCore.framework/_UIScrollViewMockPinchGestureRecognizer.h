//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIScrollViewPinchGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIScrollViewMockPinchGestureRecognizer : NSObject
{
    double _scale;
    double _velocity;
    long long _state;
    UIScrollViewPinchGestureRecognizer *_gestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollViewPinchGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (id)_activeTouchesForEvent:(id)arg1;
- (struct CGPoint)anchorPoint;
- (double)velocity;
- (double)scale;
@property(nonatomic) long long state;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)simulateScale:(double)arg1 velocity:(double)arg2;

@end

