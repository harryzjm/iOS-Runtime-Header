//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FamilyCircle/NSSecureCoding-Protocol.h>

@class FAEligibilityRequirements, FAFamilyCloudKitProperties, FAFamilyMember, NSArray, NSDictionary, NSString;

@interface FAFamilyCircle : NSObject <NSSecureCoding>
{
    _Bool _canAddMembers;
    _Bool _showAddMemberButton;
    NSArray *_pendingMembers;
    NSArray *_invites;
    FAFamilyMember *_me;
    NSArray *_members;
    FAEligibilityRequirements *_eligibilityRequirements;
    FAFamilyCloudKitProperties *_cloudKitProperties;
    NSDictionary *__serverResponse;
    NSString *_addMemberButtonLabel;
    NSString *_familyMembersFooterLabel;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showAddMemberButton; // @synthesize showAddMemberButton=_showAddMemberButton;
@property(readonly, copy, nonatomic) NSString *familyMembersFooterLabel; // @synthesize familyMembersFooterLabel=_familyMembersFooterLabel;
@property(readonly, copy, nonatomic) NSString *addMemberButtonLabel; // @synthesize addMemberButtonLabel=_addMemberButtonLabel;
@property(readonly, nonatomic) _Bool canAddMembers; // @synthesize canAddMembers=_canAddMembers;
@property(readonly) NSDictionary *_serverResponse; // @synthesize _serverResponse=__serverResponse;
@property(readonly) FAFamilyCloudKitProperties *cloudKitProperties; // @synthesize cloudKitProperties=_cloudKitProperties;
@property(readonly) FAEligibilityRequirements *eligibilityRequirements; // @synthesize eligibilityRequirements=_eligibilityRequirements;
@property(readonly) NSArray *members; // @synthesize members=_members;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) FAFamilyMember *me; // @synthesize me=_me;
@property(readonly, copy, nonatomic) NSArray *pendingMembers; // @synthesize pendingMembers=_pendingMembers;
@property(readonly, copy, nonatomic) NSArray *invites; // @synthesize invites=_invites;
@property(readonly, copy, nonatomic) NSArray *firstNames;
- (id)memberForAltDSID:(id)arg1;
- (id)initWithServerResponse:(id)arg1;

@end
