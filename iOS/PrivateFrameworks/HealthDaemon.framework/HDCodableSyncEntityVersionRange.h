//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableEntityIdentifier, HDCodableSyncVersionRange;

@interface HDCodableSyncEntityVersionRange : PBCodable <NSCopying>
{
    HDCodableEntityIdentifier *_entityIdentifier;
    HDCodableSyncVersionRange *_versionRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HDCodableSyncVersionRange *versionRange; // @synthesize versionRange=_versionRange;
@property(retain, nonatomic) HDCodableEntityIdentifier *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasVersionRange;
@property(readonly, nonatomic) _Bool hasEntityIdentifier;

@end
