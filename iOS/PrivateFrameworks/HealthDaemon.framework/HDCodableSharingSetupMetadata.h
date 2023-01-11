//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface HDCodableSharingSetupMetadata : PBCodable <NSCopying>
{
    NSMutableArray *_invitationTokens;
    NSString *_ownerCloudKitEmailAddress;
    NSData *_ownerParticipant;
    NSData *_shareParticipant;
    NSData *_sourceProfileIdentifier;
    NSString *_syncCircleIdentifier;
}

+ (Class)invitationTokenType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *invitationTokens; // @synthesize invitationTokens=_invitationTokens;
@property(retain, nonatomic) NSString *ownerCloudKitEmailAddress; // @synthesize ownerCloudKitEmailAddress=_ownerCloudKitEmailAddress;
@property(retain, nonatomic) NSData *shareParticipant; // @synthesize shareParticipant=_shareParticipant;
@property(retain, nonatomic) NSData *sourceProfileIdentifier; // @synthesize sourceProfileIdentifier=_sourceProfileIdentifier;
@property(retain, nonatomic) NSData *ownerParticipant; // @synthesize ownerParticipant=_ownerParticipant;
@property(retain, nonatomic) NSString *syncCircleIdentifier; // @synthesize syncCircleIdentifier=_syncCircleIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)invitationTokenAtIndex:(unsigned long long)arg1;
- (unsigned long long)invitationTokensCount;
- (void)addInvitationToken:(id)arg1;
- (void)clearInvitationTokens;
@property(readonly, nonatomic) _Bool hasOwnerCloudKitEmailAddress;
@property(readonly, nonatomic) _Bool hasShareParticipant;
@property(readonly, nonatomic) _Bool hasSourceProfileIdentifier;
@property(readonly, nonatomic) _Bool hasOwnerParticipant;
@property(readonly, nonatomic) _Bool hasSyncCircleIdentifier;

@end
