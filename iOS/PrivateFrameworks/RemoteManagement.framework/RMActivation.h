//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSSet, NSString, RMOrganization;

@interface RMActivation
{
}

+ (id)fetchRequestForActivationsWithIdentifier:(id)arg1 organizationIdentifier:(id)arg2;
+ (id)fetchRequestForActivationsAppliedToUserDSID:(id)arg1 organizationIdentifier:(id)arg2;
+ (id)fetchRequestForActivationsBelongingToOrganizationWithIdentifier:(id)arg1;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;
@property(retain, nonatomic) RMOrganization *organization; // @dynamic organization;

// Remaining properties
@property(copy, nonatomic) NSData *activationPlist; // @dynamic activationPlist;
@property(retain, nonatomic) NSSet *appliedToUsers; // @dynamic appliedToUsers;
@property(retain, nonatomic) NSSet *configurations; // @dynamic configurations;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *organizationIdentifier; // @dynamic organizationIdentifier;

@end

