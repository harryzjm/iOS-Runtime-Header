//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIPageComponent.h"

@class NSArray, NSMutableArray, NSString, SKUISegmentedControlViewElement;

__attribute__((visibility("hidden")))
@interface SKUIMenuPageComponent : SKUIPageComponent
{
    NSMutableArray *_childrenComponents;
    long long _defaultSelectedIndex;
    long long _menuStyle;
    NSString *_menuTitle;
    float _menuTitleFontSize;
    long long _menuTitleFontWeight;
    NSMutableArray *_sortURLStrings;
    NSString *_titleForMoreItem;
    NSMutableArray *_titles;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *titleForMoreItem; // @synthesize titleForMoreItem=_titleForMoreItem;
@property(readonly, nonatomic) long long menuTitleFontWeight; // @synthesize menuTitleFontWeight=_menuTitleFontWeight;
@property(readonly, nonatomic) float menuTitleFontSize; // @synthesize menuTitleFontSize=_menuTitleFontSize;
@property(readonly, nonatomic) NSString *menuTitle; // @synthesize menuTitle=_menuTitle;
@property(readonly, nonatomic) long long menuStyle; // @synthesize menuStyle=_menuStyle;
@property(readonly, nonatomic) long long defaultSelectedIndex; // @synthesize defaultSelectedIndex=_defaultSelectedIndex;
- (id)_componentWithContext:(id)arg1;
- (void)_setChildComponents:(id)arg1 forIndex:(long long)arg2;
- (long long)componentType;
- (id)titleForIndex:(long long)arg1;
- (id)sortURLForIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfItems;
- (id)childComponentsForIndex:(long long)arg1;
@property(readonly, nonatomic) NSArray *allTitles;
- (id)initWithViewElement:(id)arg1;
- (id)initWithRoomSortData:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SKUISegmentedControlViewElement *viewElement; // @dynamic viewElement;

@end

