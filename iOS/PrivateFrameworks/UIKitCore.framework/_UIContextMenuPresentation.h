//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIClickPresentation.h"

@class NSArray, NSString, _UIContextMenuUIController, _UIFulfilledContextMenuConfiguration;
@protocol _UIContextMenuPresentationDelegate;

__attribute__((visibility("hidden")))
@interface _UIContextMenuPresentation : _UIClickPresentation
{
    _Bool _suppressInputViewDuringPresentation;
    id <_UIContextMenuPresentationDelegate> _delegate;
    _UIContextMenuUIController *_uiController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool suppressInputViewDuringPresentation; // @synthesize suppressInputViewDuringPresentation=_suppressInputViewDuringPresentation;
@property(readonly, nonatomic) _UIContextMenuUIController *uiController; // @synthesize uiController=_uiController;
@property(nonatomic) __weak id <_UIContextMenuPresentationDelegate> delegate; // @synthesize delegate=_delegate;
- (id)preferredFocusEnvironmentsForContextMenuPreviewPresentationController:(id)arg1;
- (void)contextMenuPreviewPresentationController:(id)arg1 didChangePreviewContentSize:(struct CGSize)arg2;
- (id)contextMenuUIController:(id)arg1 dismissalPreviewForItem:(id)arg2 clientReturnedPreview:(_Bool *)arg3;
- (void)contextMenuUIController:(id)arg1 didBeginDragWithTouch:(id)arg2;
- (void)contextMenuUIControllerDidEndPanInteraction:(id)arg1;
- (_Bool)contextMenuUIControllerShouldAllowSwipeToDismissForBeginningPanInteraction:(id)arg1;
- (void)contextMenuUIController:(id)arg1 didRequestDismissalWithReason:(unsigned long long)arg2 alongsideActions:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)contextMenuUIController:(id)arg1 didSelectMenuLeaf:(id)arg2;
- (void)contextMenuUIControllerWillPerformLayout:(id)arg1 withPreviewSize:(struct CGSize)arg2;
- (id)contextMenuUIController:(id)arg1 willDisplayMenu:(id)arg2;
- (void)requestMenuDismissal;
- (id)windowSceneActivationPreview;
- (void)dragWillCancelWithAnimator:(id)arg1;
- (id)previewForCancellingDragItem:(id)arg1;
- (id)livePreviewForDragItem:(id)arg1 preferringFullSize:(_Bool)arg2;
- (void)viewTraitCollectionDidChange;
- (void)retargetDismissingMenuToPreview:(id)arg1;
- (void)displayMenu:(id)arg1 inPlaceOfMenu:(id)arg2;
- (void)dismiss;
- (void)prepareToDismiss;
- (void)setAlongsideAnimatorForDismissal:(id)arg1;
- (void)present;
- (void)prepareToPresent;
- (void)setAlongsideAnimatorForPresentation:(id)arg1;
- (id)_platformMetrics;
@property(readonly, nonatomic) NSArray *visibleMenus;
@property(readonly, nonatomic) _UIFulfilledContextMenuConfiguration *menuConfiguration;
- (id)initWithPresentingViewController:(id)arg1 configuration:(id)arg2 style:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

