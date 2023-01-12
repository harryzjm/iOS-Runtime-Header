//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class _UISheetPresentationController;

@interface UIViewController (MobileSafariFrameworkExtras)
@property(readonly, nonatomic) _Bool _sf_isPKAddPassesViewController;
@property(readonly, nonatomic) _Bool _sf_isMFMailComposeViewController;
- (void)_sf_animateAlongsideTransitionOrPerform:(CDUnknownBlockType)arg1;
- (void)_sf_presentViewControllerOnTopOfPresentedViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) struct CGRect _sf_bottomUnsafeAreaFrameForToolbar;
@property(readonly, nonatomic) struct CGRect _sf_bottomUnsafeAreaFrame;
@property(readonly, nonatomic) UIViewController *_sf_viewControllerToPresentFrom;
- (void)safari_dismissPresentedAlert;
- (_Bool)safari_isEventuallyPresentedByViewControllerClass:(Class)arg1;
@property(readonly, nonatomic) _Bool safari_isPresentedByActivityViewController;
@property(readonly, nonatomic) _Bool safari_prefersHalfHeightSheetPresentationWithLoweredBar;
@property(readonly, nonatomic) _UISheetPresentationController *safari_sheetPresentationController;
@property(readonly, nonatomic) _Bool safari_wantsDoneButtonInModalBookmarksPanel;
- (void)safari_updateApplicationBackgroundStyle;
@property(readonly, nonatomic) _Bool safari_wantsTransparentApplicationBackground;
@end

