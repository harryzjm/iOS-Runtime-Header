//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSString, SIRINLUINTERNALTokenChain;

@interface SIRINLUINTERNALEMBEDDINGEmbeddingRequest : PBRequest <NSCopying>
{
    NSString *_text;
    SIRINLUINTERNALTokenChain *_tokenChain;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain; // @synthesize tokenChain=_tokenChain;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTokenChain;
@property(readonly, nonatomic) _Bool hasText;

@end
