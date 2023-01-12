//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemProvider.h>

@class HMAccessory, NSMutableSet;

@interface HUConnectedEcosystemsItemProvider : HFItemProvider
{
    HMAccessory *_accessory;
    NSMutableSet *_connectedEcosystemsItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *connectedEcosystemsItems; // @synthesize connectedEcosystemsItems=_connectedEcosystemsItems;
@property(readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
- (id)items;
- (id)reloadItems;
- (id)initWithAccessory:(id)arg1;
- (id)init;

@end
