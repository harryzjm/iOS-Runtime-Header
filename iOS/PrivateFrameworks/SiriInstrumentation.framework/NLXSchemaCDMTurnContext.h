//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLXSchemaCDMNLContext, NLXSchemaNLXLegacyNLContext, NSData;

@interface NLXSchemaCDMTurnContext
{
    NLXSchemaCDMNLContext *_nlContext;
    NLXSchemaNLXLegacyNLContext *_legacyNlContext;
    _Bool _hasNlContext;
    _Bool _hasLegacyNlContext;
    unsigned long long _whichTurncontexttype;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasLegacyNlContext; // @synthesize hasLegacyNlContext=_hasLegacyNlContext;
@property(nonatomic) _Bool hasNlContext; // @synthesize hasNlContext=_hasNlContext;
@property(readonly, nonatomic) unsigned long long whichTurncontexttype; // @synthesize whichTurncontexttype=_whichTurncontexttype;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(retain, nonatomic) NLXSchemaNLXLegacyNLContext *legacyNlContext; // @synthesize legacyNlContext=_legacyNlContext;
@property(retain, nonatomic) NLXSchemaCDMNLContext *nlContext; // @synthesize nlContext=_nlContext;

@end
