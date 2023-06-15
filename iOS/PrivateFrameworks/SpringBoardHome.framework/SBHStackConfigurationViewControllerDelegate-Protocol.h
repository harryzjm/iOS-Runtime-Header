//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class NSString, SBHStackConfiguration, SBHStackConfigurationViewController, SBIcon, SBIconView, SBWidgetIcon, UIDragItem, UIDragPreviewParameters, UITargetedDragPreview, UIView, UIWindow, UIWindowScene;
@protocol SBIconDragPreview, SBIconDragPreviewContaining, SBLeafIconDataSource, UIDragAnimating, UIDragSession, UIDropSession;

@protocol SBHStackConfigurationViewControllerDelegate <NSObject>
- (double)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 iconContentScaleForGridSizeClass:(unsigned long long)arg2;
- (UIWindow<SBIconDragPreviewContaining> *)windowForIconDragPreviewsForStackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 forWindowScene:(UIWindowScene *)arg2;
- (UIView<SBIconDragPreview> *)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 dragPreviewForIconView:(SBIconView *)arg2;
- (void)stackConfigurationViewControllerRequestsDismissal:(SBHStackConfigurationViewController *)arg1;
- (void)stackConfigurationViewControllerWillAnimateWidgetInsertion:(SBHStackConfigurationViewController *)arg1;
- (void)stackConfigurationViewControllerRequestsPresentAddWidgetSheet:(SBHStackConfigurationViewController *)arg1;
- (id <SBLeafIconDataSource>)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 promoteSuggestedWidget:(id <SBLeafIconDataSource>)arg2 withinStack:(SBWidgetIcon *)arg3;
- (void)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 didRemoveSuggestedWidgetIcon:(SBWidgetIcon *)arg2;
- (void)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 isConsumingDropSession:(id <UIDropSession>)arg2;
- (SBIcon *)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 draggedIconForIdentifier:(NSString *)arg2;
- (void)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 didCommitStackConfiguration:(SBHStackConfiguration *)arg2;

@optional
- (long long)stackConfigurationViewControllerIconViewComponentBackgroundViewType:(SBHStackConfigurationViewController *)arg1;
- (void)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 iconView:(SBIconView *)arg2 dragLiftAnimationDidChangeDirection:(long long)arg3;
- (void)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 iconView:(SBIconView *)arg2 willAnimateDragLiftWithAnimator:(id <UIDragAnimating>)arg3 session:(id <UIDragSession>)arg4;
- (UITargetedDragPreview *)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 targetedDragPreviewForIconView:(SBIconView *)arg2 item:(UIDragItem *)arg3 session:(id <UIDragSession>)arg4 previewParameters:(UIDragPreviewParameters *)arg5;
- (_Bool)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 dragsSupportSystemDragsForIconView:(SBIconView *)arg2;
- (void)stackConfigurationViewControllerDoneButtonTapped:(SBHStackConfigurationViewController *)arg1;
@end

