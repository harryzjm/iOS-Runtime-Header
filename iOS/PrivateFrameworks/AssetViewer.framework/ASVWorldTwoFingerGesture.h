//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASVWorldGestureDragOffsetCorrector;
@protocol ASVWorldTwoFingerGestureDelegate;

@interface ASVWorldTwoFingerGesture
{
    id <ASVWorldTwoFingerGestureDelegate> _worldDelegate;
    ASVWorldGestureDragOffsetCorrector *_dragOffsetCorrector;
}

@property(retain, nonatomic) ASVWorldGestureDragOffsetCorrector *dragOffsetCorrector; // @synthesize dragOffsetCorrector=_dragOffsetCorrector;
@property(nonatomic) __weak id <ASVWorldTwoFingerGestureDelegate> worldDelegate; // @synthesize worldDelegate=_worldDelegate;
- (void).cxx_destruct;
- (void)finishGesture;
- (void)updatePanWithFirstTouchLocation:secondTouchLocation:midPoint: /* Error: Ran out of types for this method. */;
- (id)initWithFirstTouch:(id)arg1 secondTouch:(id)arg2 dataSource:(id)arg3 worldDelegate:(id)arg4;

@end
