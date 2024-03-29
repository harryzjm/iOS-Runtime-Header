//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSSet, NSString, SLHighlight, UIAction, UIColor, UIImageView, UILabel, UIPointerInteraction, UIVisualEffect, UIVisualEffectView;
@protocol SLHighlightPillViewDelegate;

__attribute__((visibility("hidden")))
@interface SLHighlightPillView
{
    _Bool _shouldDrawBackgroundBlur;
    id <SLHighlightPillViewDelegate> _delegate;
    SLHighlight *_highlight;
    NSArray *_contextMenuItems;
    NSString *_blurEffectGroupName;
    UIColor *_preferredBackgroundColor;
    UIVisualEffectView *_blurView;
    UIVisualEffectView *_chevronImageView;
    UIVisualEffect *_chevronEffect;
    UIImageView *_lastChevronImageView;
    UILabel *_noAttributionsDebugLabel;
    UIPointerInteraction *_pointerInteraction;
    NSArray *_attributionIdentifiers;
    unsigned long long _variant;
    NSSet *_excludedContextMenuIdentifiers;
    UIAction *_replyAction;
    UIAction *_hideAction;
    NSArray *_chevronConstraints;
}

+ (void)openMessagesForMessageGUID:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *chevronConstraints; // @synthesize chevronConstraints=_chevronConstraints;
@property(retain, nonatomic) UIAction *hideAction; // @synthesize hideAction=_hideAction;
@property(retain, nonatomic) UIAction *replyAction; // @synthesize replyAction=_replyAction;
@property(retain, nonatomic) NSSet *excludedContextMenuIdentifiers; // @synthesize excludedContextMenuIdentifiers=_excludedContextMenuIdentifiers;
@property(nonatomic) unsigned long long variant; // @synthesize variant=_variant;
@property(retain, nonatomic) NSArray *attributionIdentifiers; // @synthesize attributionIdentifiers=_attributionIdentifiers;
@property(retain, nonatomic) UIPointerInteraction *pointerInteraction; // @synthesize pointerInteraction=_pointerInteraction;
@property(retain, nonatomic) UILabel *noAttributionsDebugLabel; // @synthesize noAttributionsDebugLabel=_noAttributionsDebugLabel;
@property(retain, nonatomic) UIImageView *lastChevronImageView; // @synthesize lastChevronImageView=_lastChevronImageView;
@property(retain, nonatomic) UIVisualEffect *chevronEffect; // @synthesize chevronEffect=_chevronEffect;
@property(retain, nonatomic) UIVisualEffectView *chevronImageView; // @synthesize chevronImageView=_chevronImageView;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIColor *preferredBackgroundColor; // @synthesize preferredBackgroundColor=_preferredBackgroundColor;
@property(retain, nonatomic) NSString *blurEffectGroupName; // @synthesize blurEffectGroupName=_blurEffectGroupName;
@property(retain, nonatomic) NSArray *contextMenuItems; // @synthesize contextMenuItems=_contextMenuItems;
@property(nonatomic) _Bool shouldDrawBackgroundBlur; // @synthesize shouldDrawBackgroundBlur=_shouldDrawBackgroundBlur;
@property(retain, nonatomic) SLHighlight *highlight; // @synthesize highlight=_highlight;
@property(nonatomic) __weak id <SLHighlightPillViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)_targetedPreviewForInteraction:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)_hideMenuItemSelected;
- (void)_replyMenuItemSelected;
- (id)_uiActionItems;
- (void)excludeContextMenuItemsWithIdentifiers:(id)arg1;
- (void)refreshContextMenuItems;
- (_Bool)shouldShowReplyContextMenu;
- (_Bool)shouldShowContextMenu;
- (id)makePlaceholderSlotContentForStyle:(id)arg1;
- (_Bool)shouldInvalidatePreviousPlaceHolderSlotContent:(id)arg1 forStyle:(id)arg2;
- (void)renderRemoteContentForLayerContextID:(unsigned long long)arg1 style:(id)arg2 yield:(CDUnknownBlockType)arg3;
- (void)remoteContentIsLoadedValueChanged;
- (id)_attributionIdentifiers;
- (void)_pillTapped:(id)arg1 forEvent:(id)arg2;
- (void)_configureChevronForSlotStyle:(id)arg1;
- (double)expectedHeightForMaxWidth:(double)arg1;
- (void)layoutSubviews;
- (void)_setupDebugPillLabel;
- (void)_setupBlurView;
- (_Bool)_shouldDisplayDebugPillLabel;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithHighlight:(id)arg1 maxWidth:(double)arg2 variant:(unsigned long long)arg3 shouldDrawBlur:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

