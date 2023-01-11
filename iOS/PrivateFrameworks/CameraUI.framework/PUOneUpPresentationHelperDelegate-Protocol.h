//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/NSObject-Protocol.h>

@class PUOneUpPresentationHelper, PUOneUpViewController, UIScrollView, UIView, UIViewController;

@protocol PUOneUpPresentationHelperDelegate <NSObject>
- (UIViewController *)oneUpPresentationHelperViewController:(PUOneUpPresentationHelper *)arg1;

@optional
- (unsigned long long)oneUpPresentationHelperAdditionalOptions:(PUOneUpPresentationHelper *)arg1;
- (long long)oneUpPresentationHelperPreferredPresentationOrientation:(PUOneUpPresentationHelper *)arg1;
- (_Bool)oneUpPresentationHelperPreventRevealInMomentAction:(PUOneUpPresentationHelper *)arg1;
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 willPresentOneUpPreviewViewController:(PUOneUpViewController *)arg2;
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 previewScrubberDidBecomeAvailable:(UIScrollView *)arg2;
- (_Bool)oneUpPresentationHelperShouldAutoPlay:(PUOneUpPresentationHelper *)arg1;
- (_Bool)oneUpPresentationHelperEnableFreezeLayoutOnOrientationChange:(PUOneUpPresentationHelper *)arg1;
- (_Bool)oneUpPresentationHelperDisableFinalFadeoutAnimation:(PUOneUpPresentationHelper *)arg1;
- (_Bool)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(PUOneUpPresentationHelper *)arg1;
- (long long)oneUpPresentationHelperPreferredBarStyle:(PUOneUpPresentationHelper *)arg1;
- (UIScrollView *)oneUpPresentationHelperScrollView:(PUOneUpPresentationHelper *)arg1;
- (UIView *)oneUpPresentationHelperViewHostingTilingView:(PUOneUpPresentationHelper *)arg1;
- (UIView *)oneUpPresentationHelperViewHostingGestureRecognizers:(PUOneUpPresentationHelper *)arg1;
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 didDismissOneUpViewController:(PUOneUpViewController *)arg2;
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 willPresentOneUpViewController:(PUOneUpViewController *)arg2;
- (long long)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 transitionTypeWithProposedTransitionType:(long long)arg2;
@end

