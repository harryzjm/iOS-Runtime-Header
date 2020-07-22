//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDCoreRoutinePersistenceStore : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _migratorDestroyedStoreReason;
    _Bool _migratorFailed;
    struct {
        unsigned int timestamp:1;
        unsigned int migratorDestroyedStoreReason:1;
        unsigned int migratorFailed:1;
    } _has;
}

@property(nonatomic) int migratorDestroyedStoreReason; // @synthesize migratorDestroyedStoreReason=_migratorDestroyedStoreReason;
@property(nonatomic) _Bool migratorFailed; // @synthesize migratorFailed=_migratorFailed;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMigratorDestroyedStoreReason;
@property(nonatomic) _Bool hasMigratorFailed;
@property(nonatomic) _Bool hasTimestamp;

@end

