//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccessoryAdvertisement, NSString;

__attribute__((visibility("hidden")))
@interface HMDUnassociatedMediaAccessory
{
    HMDAccessoryAdvertisement *_advertisement;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain) HMDAccessoryAdvertisement *advertisement; // @synthesize advertisement=_advertisement;
- (id)logIdentifier;
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (long long)associationOptions;
- (id)dumpDescription;
- (unsigned long long)transportTypes;
- (_Bool)isHAPAirPlay2Accessory;
- (void)updateAdvertisementData:(id)arg1;
- (id)initWithAdvertisement:(id)arg1 messageDispatcher:(id)arg2;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;
- (id)modelForChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

