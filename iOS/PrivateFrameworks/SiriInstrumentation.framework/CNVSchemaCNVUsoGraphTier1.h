//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, USOSchemaUSOGraphTier1;

@interface CNVSchemaCNVUsoGraphTier1
{
    USOSchemaUSOGraphTier1 *_usoGraphTier1;
    _Bool _hasUsoGraphTier1;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasUsoGraphTier1; // @synthesize hasUsoGraphTier1=_hasUsoGraphTier1;
@property(retain, nonatomic) USOSchemaUSOGraphTier1 *usoGraphTier1; // @synthesize usoGraphTier1=_usoGraphTier1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
