//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString, SBAppLayout, SBBestAppSuggestion, SBDisplayItem, SBLayoutStateTransitionContext, SBSwitcherTransitionRequest, SBWorkspaceApplicationSceneTransitionContext;
@protocol SBSwitcherContentViewControlling;

@protocol SBSwitcherContentViewControllerDelegate <NSObject>
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 deletedDisplayItem:(SBDisplayItem *)arg2 inAppLayout:(SBAppLayout *)arg3 forReason:(long long)arg4;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 performTransitionWithRequest:(SBSwitcherTransitionRequest *)arg2 gestureInitiated:(_Bool)arg3;

@optional
- (_Bool)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 shouldSkipNonAnimatedLayoutPassAfterTransition:(SBWorkspaceApplicationSceneTransitionContext *)arg2;
- (struct CGAffineTransform)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 transformForCardUnderSheetForBoundsSize:(struct CGSize)arg2;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 layoutStateTransitionDidEndWithTransitionContext:(SBLayoutStateTransitionContext *)arg2;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 reopenHiddenAppLayoutsWithBundleIdentifier:(NSString *)arg2;
- (void)cancelActiveGestureForSwitcherContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setCacheAsynchronousRenderingSurfaces:(_Bool)arg2;
- (_Bool)switcherContentControllerControlsHomeScreenContents:(id <SBSwitcherContentViewControlling>)arg1;
- (_Bool)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 shouldResignActiveForStartOfTransition:(SBLayoutStateTransitionContext *)arg2;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setPointerInteractionsEnabled:(_Bool)arg2;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setContainerStatusBarHidden:(_Bool)arg2 partsHidden:(unsigned long long)arg3 animationDuration:(double)arg4;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 requestNewWindowForBundleIdentifier:(NSString *)arg2;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setWallpaperStyle:(long long)arg2;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setWallpaperScale:(double)arg2 withAnimationMode:(long long)arg3 completion:(void (^)(_Bool, _Bool))arg4;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setHomeScreenBackdropBlurMaterialRecipeName:(NSString *)arg2 withAnimationMode:(long long)arg3 completion:(void (^)(_Bool, _Bool))arg4;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setHomeScreenBackdropBlurType:(long long)arg2;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setHomeScreenBackdropBlurProgress:(double)arg2 withAnimationMode:(long long)arg3 completion:(void (^)(_Bool, _Bool))arg4;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setHomeScreenDimmingAlpha:(double)arg2 withAnimationMode:(long long)arg3 completion:(void (^)(_Bool, _Bool))arg4;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setHomeScreenAlpha:(double)arg2 withAnimationMode:(long long)arg3 completion:(void (^)(_Bool, _Bool))arg4;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setHomeScreenScale:(double)arg2 withAnimationMode:(long long)arg3 completion:(void (^)(_Bool, _Bool))arg4;
- (void)updateWindowVisibilityForSwitcherContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (void)updateUserInteractionEnabledForSwitcherContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 activatedBestAppSuggestion:(SBBestAppSuggestion *)arg2;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 bringAppLayoutToFront:(SBAppLayout *)arg2;
@end

