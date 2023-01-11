//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class ASCodableActivityDataPreview, ASCodableShareLocations, NSString;

@interface ASCodableInviteResponse : PBCodable <NSCopying>
{
    ASCodableActivityDataPreview *_activityDataPreview;
    NSString *_handshakeToken;
    NSString *_inviteeBuildNumber;
    NSString *_inviteeCloudKitAddress;
    ASCodableShareLocations *_inviteeShareLocations;
    unsigned int _inviteeVersion;
    int _responseCode;
    struct {
        unsigned int inviteeVersion:1;
        unsigned int responseCode:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ASCodableActivityDataPreview *activityDataPreview; // @synthesize activityDataPreview=_activityDataPreview;
@property(nonatomic) unsigned int inviteeVersion; // @synthesize inviteeVersion=_inviteeVersion;
@property(retain, nonatomic) NSString *inviteeBuildNumber; // @synthesize inviteeBuildNumber=_inviteeBuildNumber;
@property(retain, nonatomic) ASCodableShareLocations *inviteeShareLocations; // @synthesize inviteeShareLocations=_inviteeShareLocations;
@property(retain, nonatomic) NSString *inviteeCloudKitAddress; // @synthesize inviteeCloudKitAddress=_inviteeCloudKitAddress;
@property(nonatomic) int responseCode; // @synthesize responseCode=_responseCode;
@property(retain, nonatomic) NSString *handshakeToken; // @synthesize handshakeToken=_handshakeToken;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasActivityDataPreview;
@property(nonatomic) _Bool hasInviteeVersion;
@property(readonly, nonatomic) _Bool hasInviteeBuildNumber;
@property(readonly, nonatomic) _Bool hasInviteeShareLocations;
@property(readonly, nonatomic) _Bool hasInviteeCloudKitAddress;
@property(nonatomic) _Bool hasResponseCode;
@property(readonly, nonatomic) _Bool hasHandshakeToken;

@end
