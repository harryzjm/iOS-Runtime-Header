//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIContextMenuInteractionDelegate-Protocol.h>

@class NSArray, UIContextMenuConfiguration, UIContextMenuInteraction, UIGestureRecognizer, UITargetedPreview, _UIContextMenuStyle;
@protocol NSCopying, UIContextMenuInteractionCommitAnimating;

@protocol UIContextMenuInteractionDelegate_Private <UIContextMenuInteractionDelegate>

@optional
- (UITargetedPreview *)_dci_contextMenuInteraction:(UIContextMenuInteraction *)arg1 previewForDismissingToSecondaryItemWithIdentifier:(id <NSCopying>)arg2 configuration:(UIContextMenuConfiguration *)arg3;
- (UITargetedPreview *)_dci_contextMenuInteraction:(UIContextMenuInteraction *)arg1 previewForHighlightingSecondaryItemWithIdentifier:(id <NSCopying>)arg2 configuration:(UIContextMenuConfiguration *)arg3;
- (void)contextMenuInteractionDidEnd:(UIContextMenuInteraction *)arg1;
- (void)contextMenuInteractionWillPresent:(UIContextMenuInteraction *)arg1;
- (void)contextMenuInteraction:(UIContextMenuInteraction *)arg1 willCommitWithAnimator:(id <UIContextMenuInteractionCommitAnimating>)arg2;
- (_Bool)_contextMenuInteraction:(UIContextMenuInteraction *)arg1 shouldBeDelayedByGestureRecognizer:(UIGestureRecognizer *)arg2;
- (NSArray *)_contextMenuInteraction:(UIContextMenuInteraction *)arg1 accessoriesForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (_UIContextMenuStyle *)_contextMenuInteraction:(UIContextMenuInteraction *)arg1 styleForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
@end

