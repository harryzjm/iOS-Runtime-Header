//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSNumber, NSString;

@interface PHCloudInvitation
{
    _Bool _isMine;
    int _invitationState;
    int _invitationStateLocal;
    NSString *_inviteeFirstName;
    NSString *_inviteeLastName;
    NSString *_inviteeFullName;
    NSDate *_inviteeSubscriptionDate;
    NSString *_albumGUID;
    NSString *_cloudGUID;
    NSNumber *_inviteeEmailKey;
    NSString *_inviteeHashedPersonID;
}

+ (id)fetchType;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *inviteeHashedPersonID; // @synthesize inviteeHashedPersonID=_inviteeHashedPersonID;
@property(readonly, nonatomic) NSNumber *inviteeEmailKey; // @synthesize inviteeEmailKey=_inviteeEmailKey;
@property(readonly, nonatomic) int invitationStateLocal; // @synthesize invitationStateLocal=_invitationStateLocal;
@property(readonly, nonatomic) NSString *cloudGUID; // @synthesize cloudGUID=_cloudGUID;
@property(readonly, nonatomic) NSString *albumGUID; // @synthesize albumGUID=_albumGUID;
@property(readonly, nonatomic) NSDate *inviteeSubscriptionDate; // @synthesize inviteeSubscriptionDate=_inviteeSubscriptionDate;
@property(readonly, nonatomic) _Bool isMine; // @synthesize isMine=_isMine;
@property(readonly, nonatomic) NSString *inviteeFullName; // @synthesize inviteeFullName=_inviteeFullName;
@property(readonly, nonatomic) NSString *inviteeLastName; // @synthesize inviteeLastName=_inviteeLastName;
@property(readonly, nonatomic) NSString *inviteeFirstName; // @synthesize inviteeFirstName=_inviteeFirstName;
@property(readonly, nonatomic) int invitationState; // @synthesize invitationState=_invitationState;
@property(readonly, nonatomic) NSString *invitationStateDescription;
@property(readonly, nonatomic) NSArray *inviteePhones;
@property(readonly, nonatomic) NSArray *inviteeEmails;
- (id)personInfoManager;
- (id)inviteeDisplayNameIncludingEmail:(_Bool)arg1;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;

@end
