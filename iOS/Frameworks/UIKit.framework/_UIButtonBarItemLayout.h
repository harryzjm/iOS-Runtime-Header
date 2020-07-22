//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIBarButtonItem, UILayoutGuide, UIView, _UITAMICAdaptorView;

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
    UILayoutGuide *_popoverLayoutGuide;
    CDUnknownBlockType _itemViewGenerator;
}

@property(copy, nonatomic) CDUnknownBlockType itemViewGenerator; // @synthesize itemViewGenerator=_itemViewGenerator;
@property(nonatomic) _Bool useGroupSizing; // @synthesize useGroupSizing=_useGroupSizing;
@property(readonly, nonatomic) UILayoutGuide *popoverLayoutGuide; // @synthesize popoverLayoutGuide=_popoverLayoutGuide;
- (void).cxx_destruct;
- (id)description;
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (void)_addLayoutGuides:(id)arg1;
- (void)_addLayoutViews:(id)arg1;
- (void)_configure;
- (void)_updateItemViewSizing;
- (void)_updateCustomView;
- (_Bool)_shouldBeDirty;
- (id)_item;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;
- (_Bool)shouldHoriziontallyCenterView:(id)arg1;
- (void)_updateItemView;
- (id)initWithLayoutMetrics:(id)arg1 barButtonItem:(id)arg2;
- (id)initWithLayoutMetrics:(id)arg1;

@end

