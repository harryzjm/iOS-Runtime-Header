//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKContainerID, CKRecordID, CKShareID, CKShareParticipant, NSArray, NSData, NSMutableArray, NSMutableSet, NSString, NSURL;

@interface CKShare <NSSecureCoding, NSCopying>
{
    _Bool _allowsReadOnlyParticipantsToSeeEachOther;
    _Bool _serializePersonalInfo;
    long long _publicPermission;
    NSMutableSet *_addedParticipantIDs;
    NSMutableSet *_removedParticipantIDs;
    NSMutableArray *_lastFetchedParticipants;
    CKContainerID *_containerID;
    CKRecordID *_rootRecordID;
    NSMutableArray *_allParticipants;
    NSData *_invitedProtectionData;
    NSString *_invitedProtectionEtag;
    NSString *_previousInvitedProtectionEtag;
    NSData *_publicProtectionData;
    NSString *_publicProtectionEtag;
    NSString *_previousPublicProtectionEtag;
    NSArray *_invitedKeysToRemove;
    CKShareID *_shareID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
@property(nonatomic) _Bool serializePersonalInfo; // @synthesize serializePersonalInfo=_serializePersonalInfo;
@property(retain, nonatomic) NSArray *invitedKeysToRemove; // @synthesize invitedKeysToRemove=_invitedKeysToRemove;
@property(nonatomic) _Bool allowsReadOnlyParticipantsToSeeEachOther; // @synthesize allowsReadOnlyParticipantsToSeeEachOther=_allowsReadOnlyParticipantsToSeeEachOther;
@property(retain, nonatomic) NSString *previousPublicProtectionEtag; // @synthesize previousPublicProtectionEtag=_previousPublicProtectionEtag;
@property(retain, nonatomic) NSString *publicProtectionEtag; // @synthesize publicProtectionEtag=_publicProtectionEtag;
@property(retain, nonatomic) NSData *publicProtectionData; // @synthesize publicProtectionData=_publicProtectionData;
@property(retain, nonatomic) NSString *previousInvitedProtectionEtag; // @synthesize previousInvitedProtectionEtag=_previousInvitedProtectionEtag;
@property(retain, nonatomic) NSString *invitedProtectionEtag; // @synthesize invitedProtectionEtag=_invitedProtectionEtag;
@property(retain, nonatomic) NSData *invitedProtectionData; // @synthesize invitedProtectionData=_invitedProtectionData;
@property(retain, nonatomic) NSMutableArray *allParticipants; // @synthesize allParticipants=_allParticipants;
@property(copy, nonatomic) CKRecordID *rootRecordID; // @synthesize rootRecordID=_rootRecordID;
@property(retain, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property(retain, nonatomic) NSMutableArray *lastFetchedParticipants; // @synthesize lastFetchedParticipants=_lastFetchedParticipants;
@property(retain, nonatomic) NSMutableSet *removedParticipantIDs; // @synthesize removedParticipantIDs=_removedParticipantIDs;
@property(retain, nonatomic) NSMutableSet *addedParticipantIDs; // @synthesize addedParticipantIDs=_addedParticipantIDs;
@property(nonatomic) long long publicPermission; // @synthesize publicPermission=_publicPermission;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeSystemFieldsWithCoder:(id)arg1;
- (id)shareURL;
@property(retain, nonatomic) NSData *publicSharingIdentity;
- (id)privateToken;
- (id)encryptedPublicSharingKey;
- (void)setWantsPublicSharingKey:(_Bool)arg1;
- (void)_getDecryptedShareInContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_copyWithoutPersonalInfo;
- (void)_stripPersonalInfo;
- (void)_addParticipantEmails:(id)arg1 phoneNumbers:(id)arg2 asReadWrite:(_Bool)arg3 inContainer:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)updateFromServerShare:(id)arg1;
- (void)registerFetchedParticipant:(id)arg1;
- (void)resetFetchedParticipants;
- (_Bool)_participantArray:(id)arg1 isEquivalentToArray:(id)arg2;
- (_Bool)_participantArray:(id)arg1 containsEquivalentWithPermissionsParticipant:(id)arg2;
@property(readonly, nonatomic) CKShareParticipant *currentUserParticipant;
- (id)removedParticipants;
- (id)addedParticipants;
- (void)_removeParticipantBypassingChecks:(id)arg1;
- (void)removeParticipant:(id)arg1;
- (void)_addParticipantBypassingChecks:(id)arg1;
- (void)addParticipant:(id)arg1;
- (id)_knownParticipantEqualToParticipant:(id)arg1;
@property(readonly, nonatomic) CKShareParticipant *owner;
- (void)clearModifiedParticipants;
@property(readonly, nonatomic) NSArray *participants;
- (void)CKAssignToContainerWithID:(id)arg1;
- (_Bool)hasEncryptedData;
- (id)debugDescription;
- (id)description;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)copyWithOriginalValues;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setPublicPermissionNoSideEffects:(long long)arg1;
- (void)_removeAllParticipants;
- (void)_removePendingPrivateParticipants;
- (void)_commonCKShareInit;
- (void)_addOwnerParticipant;
- (id)_initWithShareRecordID:(id)arg1;
- (id)init;
- (id)initWithRootRecord:(id)arg1 shareID:(id)arg2;
- (id)initWithRootRecord:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSURL *URL; // @dynamic URL;
@property(copy, nonatomic) NSURL *mutableURL; // @dynamic mutableURL;

@end

