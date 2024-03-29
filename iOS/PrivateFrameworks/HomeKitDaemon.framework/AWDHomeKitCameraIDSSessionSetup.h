//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDHomeKitCameraIDSSessionSetup : PBCodable
{
    unsigned int _idsSessionInvitationReceived;
    unsigned int _idsSessionInvitationSent;
    unsigned int _idsSessionStartedOnReceiver;
    unsigned int _idsSessionStartedOnResident;
    struct {
        unsigned int idsSessionInvitationReceived:1;
        unsigned int idsSessionInvitationSent:1;
        unsigned int idsSessionStartedOnReceiver:1;
        unsigned int idsSessionStartedOnResident:1;
    } _has;
}

@property(nonatomic) unsigned int idsSessionStartedOnReceiver; // @synthesize idsSessionStartedOnReceiver=_idsSessionStartedOnReceiver;
@property(nonatomic) unsigned int idsSessionStartedOnResident; // @synthesize idsSessionStartedOnResident=_idsSessionStartedOnResident;
@property(nonatomic) unsigned int idsSessionInvitationReceived; // @synthesize idsSessionInvitationReceived=_idsSessionInvitationReceived;
@property(nonatomic) unsigned int idsSessionInvitationSent; // @synthesize idsSessionInvitationSent=_idsSessionInvitationSent;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIdsSessionStartedOnReceiver;
@property(nonatomic) _Bool hasIdsSessionStartedOnResident;
@property(nonatomic) _Bool hasIdsSessionInvitationReceived;
@property(nonatomic) _Bool hasIdsSessionInvitationSent;

@end

