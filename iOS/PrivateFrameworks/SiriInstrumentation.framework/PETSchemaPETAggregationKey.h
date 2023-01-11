//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PETSchemaPETRawMessage;

@interface PETSchemaPETAggregationKey : PBCodable
{
    int _type;
    unsigned int _datestamp;
    double _bucket;
    PETSchemaPETRawMessage *_raw_message;
    struct {
        unsigned int type:1;
        unsigned int datestamp:1;
        unsigned int bucket:1;
    } _has;
    _Bool _hasRaw_message;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasRaw_message; // @synthesize hasRaw_message=_hasRaw_message;
@property(retain, nonatomic) PETSchemaPETRawMessage *raw_message; // @synthesize raw_message=_raw_message;
@property(nonatomic) double bucket; // @synthesize bucket=_bucket;
@property(nonatomic) unsigned int datestamp; // @synthesize datestamp=_datestamp;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasBucket;
@property(nonatomic) _Bool hasDatestamp;
@property(nonatomic) _Bool hasType;

@end
