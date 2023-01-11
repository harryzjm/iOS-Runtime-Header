//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFCharacteristicWriteActionBuilderFactory-Protocol.h>
#import <Home/HFServiceLikeBuilderCreating-Protocol.h>
#import <Home/HFServiceLikeItem-Protocol.h>

@class HMAccessory, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFProgrammableSwitchAccessoryItem <HFServiceLikeItem, HFServiceLikeBuilderCreating, HFCharacteristicWriteActionBuilderFactory>
{
    HMAccessory *_accessory;
    id <HFCharacteristicValueSource> _valueSource;
}

@property(retain, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(retain, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
- (void).cxx_destruct;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (_Bool)actionsMayRequireDeviceUnlock;
- (_Bool)containsActionableCharacteristics;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (_Bool)shouldReduceOptionItemsForNotifyingCharacteristics;
- (id)services;
- (id)accessories;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)copyWithValueSource:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithAccessory:(id)arg1 valueSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

