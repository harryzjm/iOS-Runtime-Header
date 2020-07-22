//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData;

@interface HDCodableObjectSourceAuthorization : PBCodable <NSCopying>
{
    long long _authorizationStatus;
    double _modificationDate;
    NSData *_sourceUUID;
    struct {
        unsigned int authorizationStatus:1;
        unsigned int modificationDate:1;
    } _has;
}

@property(nonatomic) double modificationDate; // @synthesize modificationDate=_modificationDate;
@property(nonatomic) long long authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(retain, nonatomic) NSData *sourceUUID; // @synthesize sourceUUID=_sourceUUID;
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
@property(nonatomic) _Bool hasModificationDate;
@property(nonatomic) _Bool hasAuthorizationStatus;
@property(readonly, nonatomic) _Bool hasSourceUUID;

@end

