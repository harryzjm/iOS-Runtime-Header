//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString;

@interface USOSchemaUSONodeDataTier1
{
    unsigned int _index;
    NSString *_stringPayload;
    int _integerPayload;
    NSArray *_normalizedStringPayloads;
    struct {
        unsigned int index:1;
        unsigned int integerPayload:1;
    } _has;
    _Bool _hasStringPayload;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasStringPayload; // @synthesize hasStringPayload=_hasStringPayload;
@property(copy, nonatomic) NSArray *normalizedStringPayloads; // @synthesize normalizedStringPayloads=_normalizedStringPayloads;
@property(nonatomic) int integerPayload; // @synthesize integerPayload=_integerPayload;
@property(copy, nonatomic) NSString *stringPayload; // @synthesize stringPayload=_stringPayload;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)normalizedStringPayloadsAtIndex:(unsigned long long)arg1;
- (unsigned long long)normalizedStringPayloadsCount;
- (void)addNormalizedStringPayloads:(id)arg1;
- (void)clearNormalizedStringPayloads;
@property(nonatomic) _Bool hasIntegerPayload;
@property(nonatomic) _Bool hasIndex;

@end
