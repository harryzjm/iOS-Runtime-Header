//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIBarButtonItem, UIView, _UITAMICAdaptorView;

__attribute__((visibility("hidden")))
@interface _UIButtonBarItemLayout
{
    UIBarButtonItem *_item;
    UIView *_itemView;
    _UITAMICAdaptorView *_itemViewWrapper;
    NSLayoutConstraint *_requestedSize;
    NSLayoutConstraint *_maximumAlignmentSize;
    NSLayoutConstraint *_groupSameSize;
    NSLayoutConstraint *_popoverGuideLeading;
    NSLayoutConstraint *_popoverGuideTrailing;
    NSLayoutConstraint *_popoverGuideTop;
    NSLayoutConstraint *_popoverGuideHeight;
    _Bool _useGroupSizing;
    _Bool _suppressSpacing;
    CDUnknownBlockType _itemViewGenerator;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType itemViewGenerator; // @synthesize itemViewGenerator=_itemViewGenerator;
@property(nonatomic) _Bool suppressSpacing; // @synthesize suppressSpacing=_suppressSpacing;
@property(nonatomic) _Bool useGroupSizing; // @synthesize useGroupSizing=_useGroupSizing;
- (id)description;
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (void)_addLayoutGuides:(id)arg1;
- (void)_addLayoutViews:(id)arg1;
- (void)_configure;
- (void)_updateItemViewSizing;
- (void)_updateCustomView;
- (_Bool)_shouldBeDirty;
- (id)barButtonItem;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;
- (_Bool)shouldHorizontallyCenterView:(id)arg1;
- (void)_updateItemView;
- (void)dirtyLayoutForPlainAppearanceChange:(_Bool)arg1 doneAppearanceChanged:(_Bool)arg2;
- (id)initWithLayoutMetrics:(id)arg1 barButtonItem:(id)arg2;
- (id)initWithLayoutMetrics:(id)arg1;

@end

