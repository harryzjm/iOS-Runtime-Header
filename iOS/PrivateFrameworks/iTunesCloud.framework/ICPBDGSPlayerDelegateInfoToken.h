//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSData;

@interface ICPBDGSPlayerDelegateInfoToken : PBCodable <NSCopying>
{
    double _expirationTimeInterval;
    unsigned long long _sessionID;
    NSData *_token;
    struct {
        unsigned int expirationTimeInterval:1;
        unsigned int sessionID:1;
    } _has;
}

@property(nonatomic) double expirationTimeInterval; // @synthesize expirationTimeInterval=_expirationTimeInterval;
@property(nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasExpirationTimeInterval;
@property(nonatomic) _Bool hasSessionID;
@property(readonly, nonatomic) _Bool hasToken;

@end

