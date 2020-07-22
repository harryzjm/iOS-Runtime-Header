//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDCoreRoutineModelVisitCount : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _count;
    NSMutableArray *_visits;
    CDStruct_eca94db9 _has;
}

+ (Class)visitsType;
@property(retain, nonatomic) NSMutableArray *visits; // @synthesize visits=_visits;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
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
- (id)visitsAtIndex:(unsigned long long)arg1;
- (unsigned long long)visitsCount;
- (void)addVisits:(id)arg1;
- (void)clearVisits;
@property(nonatomic) _Bool hasCount;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

