//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface BCSDomainShardItemMetadata : PBCodable
{
    long long _count;
    long long _index;
    long long _ttl;
    CDStruct_db572d93 _has;
}

@property(nonatomic) long long ttl; // @synthesize ttl=_ttl;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTtl;
@property(nonatomic) _Bool hasCount;
@property(nonatomic) _Bool hasIndex;

@end

