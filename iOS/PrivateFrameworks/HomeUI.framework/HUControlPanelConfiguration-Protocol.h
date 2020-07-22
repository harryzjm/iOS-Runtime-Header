//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFControlItem, HFControlPanelItem, HFValueTransformer, HUControlPanelCell;
@protocol HUControlPanelRule;

@protocol HUControlPanelConfiguration <NSObject>
@property(readonly, nonatomic) Class cellClass;
@property(readonly, nonatomic) id <HUControlPanelRule> rule;
- (void)setupControlsForCell:(HUControlPanelCell *)arg1 item:(HFControlPanelItem *)arg2;

@optional
- (_Bool)shouldShowSectionTitleForItem:(HFControlPanelItem *)arg1;
- (HFValueTransformer *)valueTransformerForControlItem:(HFControlItem *)arg1;
@end

