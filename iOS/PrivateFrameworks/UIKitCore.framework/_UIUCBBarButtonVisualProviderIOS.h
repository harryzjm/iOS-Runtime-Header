//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIButtonBarButtonVisualProvider.h"

@class UIButton, _UISlotView;

__attribute__((visibility("hidden")))
@interface _UIUCBBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider
{
    UIButton *_contentButton;
    _UISlotView *_securePasteButtonSlotView;
    _Bool _slotViewHasRemoteContent;
    CDUnknownBlockType _menuProvider;
}

+ (id)_defaultTitleAttributes;
- (void).cxx_destruct;
- (void)updateMenu;
- (_Bool)canUpdateMenuInPlace;
- (struct CGPoint)menuAnchorPoint;
- (id)buttonContextMenuTargetedPreview;
- (id)buttonContextMenuStyleFromDefaultStyle:(id)arg1;
- (id)buttonContextMenuInteractionConfiguration;
- (id)pointerShapeInContainer:(id)arg1;
- (id)imageSymbolConfiguration;
- (id)_constraintsForButton:(id)arg1 withButtonItem:(id)arg2;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (void)enableSecureButton:(_Bool)arg1;
- (void)updateSecureButton;
- (_Bool)shouldSuppressPointerSpecularFilter;
- (_Bool)shouldUseImageInsets;
- (void)_configureImageOrTitleFromBarItem:(id)arg1;
- (long long)_securePasteButtonSite;
- (id)_defaultTitleAttributes;
- (id)_newButtonForType:(long long)arg1;
- (id)contentView;
- (void)updateButton:(id)arg1 forEnabledState:(_Bool)arg2;
- (void)updateButton:(id)arg1 forHighlightedState:(_Bool)arg2;

@end

