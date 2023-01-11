//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface CKDPRecordStableUrl : PBCodable <NSCopying>
{
    NSString *_displayedHostname;
    NSData *_encryptedPublicSharingKey;
    NSData *_protectedFullToken;
    NSString *_routingKey;
    NSData *_shortTokenHash;
}

@property(retain, nonatomic) NSString *displayedHostname; // @synthesize displayedHostname=_displayedHostname;
@property(retain, nonatomic) NSData *encryptedPublicSharingKey; // @synthesize encryptedPublicSharingKey=_encryptedPublicSharingKey;
@property(retain, nonatomic) NSData *protectedFullToken; // @synthesize protectedFullToken=_protectedFullToken;
@property(retain, nonatomic) NSData *shortTokenHash; // @synthesize shortTokenHash=_shortTokenHash;
@property(retain, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDisplayedHostname;
@property(readonly, nonatomic) _Bool hasEncryptedPublicSharingKey;
@property(readonly, nonatomic) _Bool hasProtectedFullToken;
@property(readonly, nonatomic) _Bool hasShortTokenHash;
@property(readonly, nonatomic) _Bool hasRoutingKey;

@end

