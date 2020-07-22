//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CallHistory/NSCopying-Protocol.h>

@interface AWDCallHistoryDatabaseInfo : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _fetchLimit;
    unsigned int _schema;
    unsigned int _size;
    struct {
        unsigned int timestamp:1;
        unsigned int fetchLimit:1;
        unsigned int schema:1;
        unsigned int size:1;
    } _has;
}

@property(nonatomic) unsigned int schema; // @synthesize schema=_schema;
@property(nonatomic) unsigned int fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(nonatomic) unsigned int size; // @synthesize size=_size;
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
@property(nonatomic) _Bool hasSchema;
@property(nonatomic) _Bool hasFetchLimit;
@property(nonatomic) _Bool hasSize;
@property(nonatomic) _Bool hasTimestamp;

@end

