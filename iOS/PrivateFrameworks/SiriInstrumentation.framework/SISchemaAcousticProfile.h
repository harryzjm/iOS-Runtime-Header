//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaAcousticProfile : PBCodable
{
    _Bool _hasA;
    NSData *_a;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasA; // @synthesize hasA=_hasA;
@property(copy, nonatomic) NSData *a; // @synthesize a=_a;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
