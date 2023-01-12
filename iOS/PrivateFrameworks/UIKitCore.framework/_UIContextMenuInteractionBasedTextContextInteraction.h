//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIContextMenuConfiguration, UIEditMenuConfiguration, UIEditMenuInteraction;

__attribute__((visibility("hidden")))
@interface _UIContextMenuInteractionBasedTextContextInteraction
{
    struct {
        _Bool previewForHighlighting_DEPR;
        _Bool previewForDismissing_DEPR;
        _Bool highlightPreviewForItem;
        _Bool dismissalPreviewForItem;
        _Bool willPerformPreviewAction;
        _Bool willDisplay;
        _Bool willEndForConfiguration;
        _Bool styleForMenu;
        _Bool accessoriesForMenu;
        _Bool failedToBeginForSecondaryClickAtLocation;
        _Bool shouldBeDelayedByGestureRecognizer;
        _Bool asyncConfigurationForMenuAtLocation;
        _Bool overrideSuggestedActions;
        _Bool shouldAttemptToPresent;
    } _externalDelegateImplements;
    UIEditMenuConfiguration *_currentInputUIConfiguration;
    UIEditMenuConfiguration *_currentSelectionCommandsConfiguration;
    UIEditMenuInteraction *_editMenuInteraction;
    UIContextMenuConfiguration *_externallyManagedConfiguration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIContextMenuConfiguration *externallyManagedConfiguration; // @synthesize externallyManagedConfiguration=_externallyManagedConfiguration;
@property(readonly, nonatomic) UIEditMenuInteraction *editMenuInteraction; // @synthesize editMenuInteraction=_editMenuInteraction;
- (id)_suggestedActionsForContextMenuInteraction:(id)arg1 location:(struct CGPoint)arg2;
- (_Bool)_contextMenuInteraction:(id)arg1 shouldAttemptToPresentConfiguration:(id)arg2;
- (void)_contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2;
- (_Bool)_contextMenuInteraction:(id)arg1 shouldBeDelayedByGestureRecognizer:(id)arg2;
- (_Bool)_contextMenuInteraction:(id)arg1 failedToBeginForSecondaryClickAtLocation:(struct CGPoint)arg2;
- (id)_contextMenuInteraction:(id)arg1 accessoriesForMenuWithConfiguration:(id)arg2;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 dismissalPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 highlightPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (id)_targetedPreviewForCurrentSelection;
- (_Bool)_isExternalConfiguration:(id)arg1;
- (void)_presentEditMenuForInputUI;
- (_Bool)isDisplayingMenuForSelectionCommands;
- (_Bool)isDisplayingMenuForInputUI;
- (void)dismissMenuForInputUI;
- (void)presentMenuForInputUI:(id)arg1;
- (_Bool)dismissedByActionSelection;
- (_Bool)isDisplayingMenu;
- (_Bool)dismissedRecently;
- (void)updateVisibleMenuPosition;
- (void)dismissSelectionCommands;
- (void)presentSelectionCommandsWithConfiguration:(id)arg1;
- (id)_currentInputUIMenuElements;
- (id)_editMenuForCurrentSelectionWithSuggestedActions:(id)arg1 isEditMenu:(_Bool)arg2;
- (void)_querySelectionCommandsForConfiguration:(id)arg1 suggestedActions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_editMenuInteraction:(id)arg1 titleViewForMenu:(id)arg2 configuration:(id)arg3;
- (void)editMenuInteraction:(id)arg1 willDismissMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)editMenuInteraction:(id)arg1 willPresentMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (struct CGRect)editMenuInteraction:(id)arg1 targetRectForConfiguration:(id)arg2;
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;
- (id)_editMenuForSuggestedActions:(id)arg1 rvItem:(id)arg2 isEditMenu:(_Bool)arg3;
- (void)_logDeprecatedMenuControllerUsageIfNeeded;
- (_Bool)_shouldBridgeMenuControllerItems;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;
- (void)setExternalContextMenuDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

