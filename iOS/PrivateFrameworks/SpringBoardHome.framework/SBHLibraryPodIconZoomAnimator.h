//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/SBHLibraryViewControllerObserver-Protocol.h>

@class NSArray, NSString, SBFolderController, SBFolderIcon, SBHLibraryPodFolderView, SBHLibraryPodZoomSettings, SBHLibraryViewController, SBIconView, UIView;
@protocol SBHLibraryPodIconZoomAnimationContaining;

@interface SBHLibraryPodIconZoomAnimator <SBHLibraryViewControllerObserver>
{
    SBHLibraryViewController *_libraryViewController;
    SBFolderController *_folderController;
    SBHLibraryPodFolderView *_folderView;
    UIView *_folderScalingView;
    UIView *_folderClippingView;
    UIView *_matchMoveWrapperView;
    UIView *_searchBar;
    UIView *_libraryScalingView;
    NSArray *_visibleIconViews;
    NSArray *_miniPodIconViews;
    _Bool _animationComplete;
    SBFolderIcon *_targetIcon;
    SBIconView *_targetIconView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SBIconView *targetIconView; // @synthesize targetIconView=_targetIconView;
@property(readonly, nonatomic) SBFolderIcon *targetIcon; // @synthesize targetIcon=_targetIcon;
- (void)_cancelAnimationForIconViewClippedOrObscured;
- (void)_handleIconViewClippedNotification:(id)arg1;
- (void)libraryViewController:(id)arg1 willPresentSearchController:(id)arg2;
- (void)_removeMatchMoveAnimation;
- (void)_setupMatchMoveAnimation;
- (void)_cleanupMiniPodIconViewsAfterCrossfade;
- (void)_prepareToCrossfadeMiniPodIconViews;
- (void)_captureVisibleAndMiniPodIconViews;
- (void)_returnFolderAndLibraryScalingViews;
- (void)_setupFolderAndLibraryScalingViews;
- (void)_updateLibraryAlphaForZoomFraction:(double)arg1;
- (void)_updateSearchBarAlphaForZoomFraction:(double)arg1;
- (void)_updateSearchBarForZoomFraction:(double)arg1;
- (void)_updateLibraryScaleForZoomFraction:(double)arg1;
- (void)_updateFolderViewFramesForZoomFraction:(double)arg1;
- (void)_animateIconViewTransformsAndAlphaForZoomFraction:(double)arg1 withAnimationSettings:(id)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateFolderNavigationBarAlphaForZoomFraction:(double)arg1;
- (void)_updateIconCrossfadeForZoomFraction:(double)arg1;
- (double)_scaleForZoomFraction:(double)arg1;
- (struct CGPoint)_centerOfMiniPodIconViews;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(_Bool)arg4 sharedCompletion:(CDUnknownBlockType)arg5;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(CDUnknownBlockType)arg3;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
- (void)cleanup;
- (id)referenceIconView;
- (void)dealloc;
- (id)initWithAnimationContainer:(id)arg1 innerFolderController:(id)arg2 folderIcon:(id)arg3 searchBar:(id)arg4 libraryViewController:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) id <SBHLibraryPodIconZoomAnimationContaining> animationContainer; // @dynamic animationContainer;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SBHLibraryPodZoomSettings *settings; // @dynamic settings;
@property(readonly) Class superclass;

@end
