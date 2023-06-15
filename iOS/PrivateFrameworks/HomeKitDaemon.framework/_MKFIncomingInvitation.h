//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFIncomingInvitationDatabaseID, NSData, NSDate, NSNumber, NSString, NSURL, NSUUID;
@protocol MKFHomeManager;

__attribute__((visibility("hidden")))
@interface _MKFIncomingInvitation
{
}

+ (id)backingModelProtocol;
+ (id)fetchRequest;
- (id)castIfIncomingInvitation;
@property(readonly, copy, nonatomic) MKFIncomingInvitationDatabaseID *databaseID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSDate *expiryDate;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) id <MKFHomeManager> homeManager; // @dynamic homeManager;
@property(copy, nonatomic) NSUUID *homeModelID; // @dynamic homeModelID;
@property(copy, nonatomic) NSString *homeName; // @dynamic homeName;
@property(copy, nonatomic) NSUUID *idsIdentifier;
@property(copy, nonatomic) NSNumber *invitationState;
@property(copy, nonatomic) NSString *inviterMergeID; // @dynamic inviterMergeID;
@property(copy, nonatomic) NSString *inviterPairingIdentifier; // @dynamic inviterPairingIdentifier;
@property(retain, nonatomic) NSData *inviterPairingPublicKey; // @dynamic inviterPairingPublicKey;
@property(copy, nonatomic) NSString *inviterUserID; // @dynamic inviterUserID;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(retain, nonatomic) NSData *shareToken; // @dynamic shareToken;
@property(copy, nonatomic) NSURL *shareURL; // @dynamic shareURL;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

