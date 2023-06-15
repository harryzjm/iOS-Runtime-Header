//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBFolderView, SBIconListView, SBIconView, UIDragItem, UIDropProposal, UITargetedDragPreview;
@protocol UIDragAnimating, UIDropSession, UIViewSpringAnimationBehaviorDescribing;

@protocol SBFolderViewDragDelegate <NSObject>

@optional
- (id <UIViewSpringAnimationBehaviorDescribing>)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 customSpringAnimationBehaviorForDroppingItem:(UIDragItem *)arg3;
- (void)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(SBIconView *)arg3;
- (_Bool)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 shouldAllowSpringLoadedInteractionForIconDropSession:(id <UIDropSession>)arg3 onIconView:(SBIconView *)arg4;
- (void)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 iconDragItem:(UIDragItem *)arg3 willAnimateDropWithAnimator:(id <UIDragAnimating>)arg4;
- (UITargetedDragPreview *)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 previewForDroppingIconDragItem:(UIDragItem *)arg3 proposedPreview:(UITargetedDragPreview *)arg4;
- (void)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 willUseIconView:(SBIconView *)arg3 forDroppingIconDragItem:(UIDragItem *)arg4;
- (SBIconView *)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 iconViewForDroppingIconDragItem:(UIDragItem *)arg3 proposedIconView:(SBIconView *)arg4;
- (void)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 performIconDrop:(id <UIDropSession>)arg3;
- (void)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 iconDropSessionDidExit:(id <UIDropSession>)arg3;
- (void)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 iconDropSession:(id <UIDropSession>)arg3 didPauseAtLocation:(struct CGPoint)arg4;
- (UIDropProposal *)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 iconDropSessionDidUpdate:(id <UIDropSession>)arg3;
- (void)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 iconDropSessionDidEnter:(id <UIDropSession>)arg3;
- (_Bool)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 canHandleIconDropSession:(id <UIDropSession>)arg3;
- (void)folderViewWillEndDragging:(SBFolderView *)arg1;
- (void)folderViewWillBeginDragging:(SBFolderView *)arg1;
@end

