//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKBubbleSet;

@interface GKBubbleFlowOverlayView
{
}

+ (id)sharedBubbleOverlayViewForWindow:(id)arg1;
+ (id)sharedBubbleOverlayView;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)willBeginTransition;
@property(readonly, nonatomic) GKBubbleSet *secondaryBubbleControls;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)defaultRectForBubbleOfType:(long long)arg1;

@end

