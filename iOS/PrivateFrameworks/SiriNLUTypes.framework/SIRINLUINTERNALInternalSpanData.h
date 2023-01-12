//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class SIRINLUINTERNALOvertonKGSpanData, SIRINLUINTERNALPLUMSpanData, SIRINLUINTERNALSiriVocabularySpanData;

@interface SIRINLUINTERNALInternalSpanData : PBCodable <NSCopying>
{
    SIRINLUINTERNALOvertonKGSpanData *_overtonKgSpanData;
    SIRINLUINTERNALPLUMSpanData *_plumSpanData;
    SIRINLUINTERNALSiriVocabularySpanData *_siriVocabularySpanData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SIRINLUINTERNALOvertonKGSpanData *overtonKgSpanData; // @synthesize overtonKgSpanData=_overtonKgSpanData;
@property(retain, nonatomic) SIRINLUINTERNALPLUMSpanData *plumSpanData; // @synthesize plumSpanData=_plumSpanData;
@property(retain, nonatomic) SIRINLUINTERNALSiriVocabularySpanData *siriVocabularySpanData; // @synthesize siriVocabularySpanData=_siriVocabularySpanData;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasOvertonKgSpanData;
@property(readonly, nonatomic) _Bool hasPlumSpanData;
@property(readonly, nonatomic) _Bool hasSiriVocabularySpanData;

@end
