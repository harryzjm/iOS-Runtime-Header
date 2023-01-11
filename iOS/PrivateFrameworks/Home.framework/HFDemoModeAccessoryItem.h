//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFGroupableItemProtocol-Protocol.h>
#import <Home/HFItemBuilderItem-Protocol.h>
#import <Home/HFServiceLikeBuilderCreating-Protocol.h>
#import <Home/HFServiceLikeItem-Protocol.h>

@class HMAccessory, NSDictionary, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFDemoModeAccessoryItem <HFServiceLikeItem, HFServiceLikeBuilderCreating, HFItemBuilderItem, HFGroupableItemProtocol>
{
    HMAccessory *_accessory;
    NSDictionary *_configInfo;
}

+ (id)accessoryItemForAccessory:(id)arg1;
@property(retain, nonatomic) NSDictionary *configInfo; // @synthesize configInfo=_configInfo;
@property(nonatomic) __weak HMAccessory *accessory; // @synthesize accessory=_accessory;
- (void).cxx_destruct;
- (_Bool)isMediaSystemDemoType;
- (id)services;
- (id)accessories;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup;
@property(readonly, nonatomic) _Bool isContainedWithinItemGroup;
@property(readonly, nonatomic) _Bool isItemGroup;
- (id)mediaProfileContainer;
- (id)hf_serviceNameComponents;
- (id)initWithAccessory:(id)arg1;
- (id)serviceLikeBuilderInHome:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithValueSource:(id)arg1;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

