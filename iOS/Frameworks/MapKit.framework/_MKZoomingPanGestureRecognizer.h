//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPanGestureRecognizer.h>

@interface _MKZoomingPanGestureRecognizer : UIPanGestureRecognizer
{
    double _zoomDraggingResistance;
    double _translation;
    double _scale;
    double _velocity;
    double _previousVelocity;
    _Bool _didStartUpdate;
    double _lastUpdateTimestamp;
}

@property(nonatomic) double zoomDraggingResistance; // @synthesize zoomDraggingResistance=_zoomDraggingResistance;
- (void)_updateScaleAndVelocityIfNeeded:(long long)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) double velocity;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
