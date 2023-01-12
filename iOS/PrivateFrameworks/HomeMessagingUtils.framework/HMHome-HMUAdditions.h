//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMHome.h>

@class NSArray;

@interface HMHome (HMUAdditions)
- (id)hmu_accessoryWithUniqueIdentifierUUIDString:(id)arg1;
- (id)hmu_zoneWithName:(id)arg1;
- (id)hmu_zonesWithUniqueIdentifiers:(id)arg1;
- (id)hmu_zoneWithUniqueIdentifier:(id)arg1;
- (id)hmu_roomWithName:(id)arg1;
- (id)hmu_roomsWithUniqueIdentifiers:(id)arg1;
- (id)hmu_roomWithUniqueIdentifier:(id)arg1;
- (id)hmu_userWithSenderCorrelationIdentifier:(id)arg1;
- (_Bool)hmu_isOwner:(id)arg1;
- (_Bool)hmu_isAdministrator:(id)arg1;
- (_Bool)hmu_isRemoteAccessAllowedForUser:(id)arg1;
@property(readonly, nonatomic) _Bool hmu_isCurrentUserOwner;
@property(readonly, nonatomic) _Bool hmu_isCurrentUserAdministrator;
@property(readonly, nonatomic) _Bool hmu_isRemoteAccessAllowedForCurrentUser;
- (id)hmu_userWithUniqueIdentifierUUIDString:(id)arg1;
- (id)hmu_userWithUniqueIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *hmu_users;
@property(readonly, nonatomic) NSArray *hmu_allUsersIncludingCurrentUser;
- (id)hmu_accessoryWithDestination:(id)arg1 service:(id)arg2;
- (id)hmu_userWithDestination:(id)arg1;
- (id)hmu_userWithFromID:(id)arg1;
- (id)hmu_accessoryWithFromID:(id)arg1 service:(id)arg2;
@end
