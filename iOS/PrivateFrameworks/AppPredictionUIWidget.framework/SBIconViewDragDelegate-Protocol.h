//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppPredictionUIWidget/NSObject-Protocol.h>

@class NSArray, NSSet, NSURL, SBIconView, UIDragItem, UIDragPreviewParameters, UITargetedDragPreview;
@protocol UIDragAnimating, UIDragSession;

@protocol SBIconViewDragDelegate <NSObject>

@optional
- (_Bool)dragsSupportSystemDragsForIconView:(SBIconView *)arg1;
- (UITargetedDragPreview *)iconView:(SBIconView *)arg1 dragPreviewForItem:(UIDragItem *)arg2 session:(id <UIDragSession>)arg3 previewParameters:(UIDragPreviewParameters *)arg4;
- (NSURL *)launchURLForIconView:(SBIconView *)arg1;
- (NSSet *)launchActionsForIconView:(SBIconView *)arg1;
- (void)iconView:(SBIconView *)arg1 item:(UIDragItem *)arg2 willAnimateDragCancelWithAnimator:(id <UIDragAnimating>)arg3;
- (void)iconView:(SBIconView *)arg1 willUsePreviewForCancelling:(UITargetedDragPreview *)arg2 targetIconView:(SBIconView *)arg3;
- (SBIconView *)iconViewWillCancelDrag:(SBIconView *)arg1;
- (void)iconView:(SBIconView *)arg1 didEndDragSession:(id <UIDragSession>)arg2 withOperation:(unsigned long long)arg3;
- (void)iconView:(SBIconView *)arg1 session:(id <UIDragSession>)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)iconView:(SBIconView *)arg1 willAddDragItems:(NSArray *)arg2 toSession:(id <UIDragSession>)arg3;
- (_Bool)iconView:(SBIconView *)arg1 canAddDragItemsToSession:(id <UIDragSession>)arg2;
- (void)iconViewWillBeginDrag:(SBIconView *)arg1 session:(id <UIDragSession>)arg2;
- (void)iconView:(SBIconView *)arg1 dragLiftAnimationDidChangeDirection:(long long)arg2;
- (void)iconView:(SBIconView *)arg1 willAnimateDragLiftWithAnimator:(id <UIDragAnimating>)arg2 session:(id <UIDragSession>)arg3;
- (double)additionalDragLiftScaleForIconView:(SBIconView *)arg1;
- (long long)iconView:(SBIconView *)arg1 draggingStartLocationWithProposedStartLocation:(long long)arg2;
- (NSArray *)dragItemsForIconView:(SBIconView *)arg1;
- (_Bool)iconViewCanBeginDrags:(SBIconView *)arg1;
@end

