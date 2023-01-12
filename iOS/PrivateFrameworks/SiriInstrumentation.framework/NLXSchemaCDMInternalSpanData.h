//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLXSchemaCDMSiriVocabularySpanData, NLXSchemaPLUMSpanData, NSData;

@interface NLXSchemaCDMInternalSpanData
{
    NLXSchemaCDMSiriVocabularySpanData *_siriVocabularySpanData;
    NLXSchemaPLUMSpanData *_plumSpanData;
    _Bool _hasSiriVocabularySpanData;
    _Bool _hasPlumSpanData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasPlumSpanData; // @synthesize hasPlumSpanData=_hasPlumSpanData;
@property(nonatomic) _Bool hasSiriVocabularySpanData; // @synthesize hasSiriVocabularySpanData=_hasSiriVocabularySpanData;
@property(retain, nonatomic) NLXSchemaPLUMSpanData *plumSpanData; // @synthesize plumSpanData=_plumSpanData;
@property(retain, nonatomic) NLXSchemaCDMSiriVocabularySpanData *siriVocabularySpanData; // @synthesize siriVocabularySpanData=_siriVocabularySpanData;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
