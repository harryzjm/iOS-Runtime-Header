//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MKFLocalBulletinCharacteristicRegistration
{
}

+ (id)fetchCharacteristicRegistrationForAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 characteristicInstanceID:(id)arg3 managedObjectContext:(id)arg4;
+ (id)fetchRequest;

// Remaining properties
@property(nonatomic) long long characteristicInstanceID; // @dynamic characteristicInstanceID;
@property(nonatomic) long long serviceInstanceID; // @dynamic serviceInstanceID;

@end

