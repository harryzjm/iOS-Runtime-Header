//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HFReorderableHomeKitItemList;

@interface HUDashboardPageItemManager : HFItemManager
{
}

- (id)_itemForSorting;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
@property(readonly, nonatomic) HFReorderableHomeKitItemList *reorderableRoomList;

@end
