//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSMutableArray, UIBarButtonItemGroup, UILayoutGuide, _UIButtonBarLayout;

__attribute__((visibility("hidden")))
@interface _UIButtonBarItemGroupLayout
{
    NSMapTable *_itemLayoutMap;
    NSMutableArray *_itemLayouts;
    NSMutableArray *_configuredItemLayouts;
    _UIButtonBarLayout *_representativeLayout;
    _Bool _compact;
    _Bool _useGroupSizing;
    _Bool _suppressSpacing;
    UIBarButtonItemGroup *_group;
    UILayoutGuide *_groupSizeGuide;
    CDUnknownBlockType _itemViewGenerator;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType itemViewGenerator; // @synthesize itemViewGenerator=_itemViewGenerator;
@property(nonatomic) _Bool suppressSpacing; // @synthesize suppressSpacing=_suppressSpacing;
@property(nonatomic) _Bool useGroupSizing; // @synthesize useGroupSizing=_useGroupSizing;
@property(nonatomic) _Bool compact; // @synthesize compact=_compact;
@property(readonly, nonatomic) UILayoutGuide *groupSizeGuide; // @synthesize groupSizeGuide=_groupSizeGuide;
@property(readonly, nonatomic) UIBarButtonItemGroup *group; // @synthesize group=_group;
- (id)description;
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (void)_addLayoutGuides:(id)arg1;
- (void)_addLayoutViews:(id)arg1;
- (void)_iterateConfiguredLayouts:(CDUnknownBlockType)arg1;
- (void)_configure;
- (id)_newLayoutForBarButtonItem:(id)arg1 useGroupSizing:(_Bool)arg2;
- (id)_representativeLayout;
- (id)_itemLayouts;
- (id)subLayouts;
- (_Bool)isGroupLayout;
- (_Bool)isSpaceLayout;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;
- (id)layoutsForSpacerItem:(id)arg1;
- (id)layoutForBarButtonItem:(id)arg1;
- (void)dirtyLayoutForPlainAppearanceChange:(_Bool)arg1 doneAppearanceChanged:(_Bool)arg2;
- (id)initWithLayoutMetrics:(id)arg1 barButtonItemGroup:(id)arg2;
- (_Bool)shouldHoriziontallyCenterView:(id)arg1;
- (id)initWithLayoutMetrics:(id)arg1;

@end
