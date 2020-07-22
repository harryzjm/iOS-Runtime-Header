//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFServiceLikeItem-Protocol.h>

@class HFItem, HMHome, NSSet, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject, HFServiceLikeItem;

@interface HFServiceActionItem <HFServiceLikeItem>
{
    HMHome *_home;
    HFItem<HFServiceLikeItem> *_containingItem;
    NSSet *_actions;
    NSSet *_actionBuilders;
}

+ (id)_percentFormatter;
@property(retain, nonatomic) NSSet *actionBuilders; // @synthesize actionBuilders=_actionBuilders;
@property(retain, nonatomic) NSSet *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) HFItem<HFServiceLikeItem> *containingItem; // @synthesize containingItem=_containingItem;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (id)_characteristicTypeToTargetValuesMap;
- (void)_getDesiredItemDescription:(id *)arg1 controlDescription:(id *)arg2 withSourceItemResults:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithValueSource:(id)arg1;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource;
- (id)controlPanelItems;
- (id)allControlItems;
- (id)incrementalStateControlItem;
- (id)primaryStateControlItem;
- (id)accessories;
- (id)services;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)serviceActionItemForChildServiceItem:(id)arg1;
- (void)addActionBuilder:(id)arg1;
- (void)addAction:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithHome:(id)arg1 containingItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

