//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSMutableArray;

@interface PPPBContactNameRecordCache : PBCodable <NSCopying>
{
    long long _createdAt;
    NSMutableArray *_records;
    struct {
        unsigned int createdAt:1;
    } _has;
}

+ (Class)recordsType;
@property(nonatomic) long long createdAt; // @synthesize createdAt=_createdAt;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
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
@property(nonatomic) _Bool hasCreatedAt;
- (id)recordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordsCount;
- (void)addRecords:(id)arg1;
- (void)clearRecords;

@end

