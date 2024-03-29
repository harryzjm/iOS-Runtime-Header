//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, NSMapTable, _UIBarButtonItemData, _UIButtonBar, _UIPointerInteractionAssistant;

__attribute__((visibility("hidden")))
@interface _UIToolbarContentView
{
    _UIButtonBar *_buttonBar;
    _UIPointerInteractionAssistant *_assistant;
    NSLayoutConstraint *_buttonBarLeadingConstraint;
    NSLayoutConstraint *_buttonBarTrailingConstraint;
    NSMapTable *_absorptionTable;
    double _standardEdgeSpacing;
    _Bool _compactMetrics;
    long long _itemDistribution;
    _UIBarButtonItemData *_plainItemAppearance;
    _UIBarButtonItemData *_doneItemAppearance;
    struct NSDirectionalEdgeInsets _padding;
}

- (void).cxx_destruct;
@property(copy, nonatomic) _UIBarButtonItemData *doneItemAppearance; // @synthesize doneItemAppearance=_doneItemAppearance;
@property(copy, nonatomic) _UIBarButtonItemData *plainItemAppearance; // @synthesize plainItemAppearance=_plainItemAppearance;
@property(nonatomic) long long itemDistribution; // @synthesize itemDistribution=_itemDistribution;
@property(nonatomic) struct NSDirectionalEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) _Bool compactMetrics; // @synthesize compactMetrics=_compactMetrics;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_appearanceChanged;
- (long long)barType;
- (double)defaultTextPadding;
- (double)defaultEdgeSpacing;
- (double)absorptionForItem:(id)arg1;
- (id)_computeEdgeAbsorptionForItems:(id)arg1;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(_Bool)arg3;
- (void)_updateThreeUpFlagsForItems:(id)arg1;
- (void)reloadWithItems:(id)arg1;
- (void)updateConstraints;
- (void)_ensureButtonBar;
- (void)updateContent;
- (void)_setButtonBarLeadingInset:(double)arg1 trailingInset:(double)arg2;
- (struct NSDirectionalEdgeInsets)_directionalSafeArea;
- (void)tintColorDidChange;
- (void)layoutMarginsDidChange;

@end

