//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarBadgeView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCellularExpandedItem
{
    _UIStatusBarBadgeView *_badgeView;
}

+ (id)badgeDisplayIdentifier;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2;
@property(retain, nonatomic) _UIStatusBarBadgeView *badgeView; // @synthesize badgeView=_badgeView;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)_stringForCellularType:(long long)arg1;

@end
