//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface CLPInstSchemaCLPCurareAppIntentSampleClassificationStarted
{
    SISchemaUUID *_originalRequestId;
    _Bool _hasOriginalRequestId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasOriginalRequestId; // @synthesize hasOriginalRequestId=_hasOriginalRequestId;
@property(retain, nonatomic) SISchemaUUID *originalRequestId; // @synthesize originalRequestId=_originalRequestId;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
