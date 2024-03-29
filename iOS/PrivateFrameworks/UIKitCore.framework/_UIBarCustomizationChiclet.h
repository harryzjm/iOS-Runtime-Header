//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSString, UILabel, UIPointerInteraction, _UIBarCustomizationChicletAnchorView, _UIBarCustomizationItem;

__attribute__((visibility("hidden")))
@interface _UIBarCustomizationChiclet : UIView
{
    _Bool _platterVisible;
    _Bool _labelVisible;
    _Bool _minimized;
    long long _chicletSize;
    _UIBarCustomizationChicletAnchorView *_anchorView;
    _UIBarCustomizationItem *_representedItem;
    UIView *_contentWrapperView;
    UIView *_rootItemView;
    NSArray *_subitemViews;
    UIView *_platterView;
    UILabel *_label;
    UIPointerInteraction *_pointerInteraction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPointerInteraction *pointerInteraction; // @synthesize pointerInteraction=_pointerInteraction;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *platterView; // @synthesize platterView=_platterView;
@property(retain, nonatomic) NSArray *subitemViews; // @synthesize subitemViews=_subitemViews;
@property(retain, nonatomic) UIView *rootItemView; // @synthesize rootItemView=_rootItemView;
@property(retain, nonatomic) UIView *contentWrapperView; // @synthesize contentWrapperView=_contentWrapperView;
@property(readonly, nonatomic) __weak _UIBarCustomizationItem *representedItem; // @synthesize representedItem=_representedItem;
@property(nonatomic) __weak _UIBarCustomizationChicletAnchorView *anchorView; // @synthesize anchorView=_anchorView;
@property(nonatomic) long long chicletSize; // @synthesize chicletSize=_chicletSize;
@property(nonatomic) _Bool minimized; // @synthesize minimized=_minimized;
@property(nonatomic) _Bool labelVisible; // @synthesize labelVisible=_labelVisible;
@property(nonatomic) _Bool platterVisible; // @synthesize platterVisible=_platterVisible;
- (_Bool)_isDisplayingRootItem;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription *)arg1;
- (void)_updatePlatterShadow;
- (double)_interItemSpacingForChicletSize:(long long)arg1;
- (double)_currentInterItemSpacing;
- (struct CGSize)_contentSizeWithInterItemSpacing:(double)arg1;
- (struct CGSize)_currentContentSize;
- (struct CGSize)fittingSizeWithChicletSize:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
@property(readonly, nonatomic) _Bool fixed;
- (void)layoutSubviews;
- (void)_addContentView:(id)arg1;
- (void)updateItemCenterPoints;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

