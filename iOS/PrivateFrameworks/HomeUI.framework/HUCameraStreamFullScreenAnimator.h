//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HUGridCameraCell;

@interface HUCameraStreamFullScreenAnimator : NSObject
{
    HUGridCameraCell *_sourceCameraCell;
}

@property(readonly, nonatomic) HUGridCameraCell *sourceCameraCell; // @synthesize sourceCameraCell=_sourceCameraCell;
- (void).cxx_destruct;
- (struct CGRect)_adjustPresentedViewFrame:(struct CGRect)arg1 forTransitionContext:(id)arg2;
- (struct CGRect)_toViewFinalFrame:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithSourceCameraCell:(id)arg1;

@end

