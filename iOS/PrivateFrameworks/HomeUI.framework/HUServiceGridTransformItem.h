//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFHomeKitTransformItem.h>

#import <HomeUI/HFCharacteristicWriteActionBuilderFactory-Protocol.h>
#import <HomeUI/HFServiceVendor-Protocol.h>

@class HFItem, NSString;
@protocol HFHomeKitItemProtocol><HFServiceVendor><HFCharacteristicWriteActionBuilderFactory;

@interface HUServiceGridTransformItem : HFHomeKitTransformItem <HFServiceVendor, HFCharacteristicWriteActionBuilderFactory>
{
}

- (id)currentStateActionBuildersForHome:(id)arg1;
- (_Bool)actionsMayRequireDeviceUnlock;
- (_Bool)containsActionableCharacteristics;
- (id)accessories;
- (id)services;
@property(readonly, nonatomic) HFItem<HFHomeKitItemProtocol><HFServiceVendor><HFCharacteristicWriteActionBuilderFactory> *sourceServicePickerItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
