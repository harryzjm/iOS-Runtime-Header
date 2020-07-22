//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UIView;

@interface HUCameraStreamFullScreenDismissingAnimator <UIViewControllerAnimatedTransitioning>
{
    UIView *_cameraViewSnapshot;
    UIView *_cameraOverlaySnapshot;
}

@property(readonly, nonatomic) UIView *cameraOverlaySnapshot; // @synthesize cameraOverlaySnapshot=_cameraOverlaySnapshot;
@property(readonly, nonatomic) UIView *cameraViewSnapshot; // @synthesize cameraViewSnapshot=_cameraViewSnapshot;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithSourceFrameInPresentingView:(struct CGRect)arg1 cameraViewSnapshot:(id)arg2 cameraOverlaySnapshot:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
