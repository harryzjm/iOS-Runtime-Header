//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSData, SISchemaUUID;

__attribute__((visibility("hidden")))
@interface MTSchemaProvisionalMTClientEventMetadata : SISchemaInstrumentationMessage
{
    SISchemaUUID *_mtId;
    SISchemaUUID *_sessionId;
}

+ (id)lt_initWithMtId:(id)arg1 sessionId:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) SISchemaUUID *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) SISchemaUUID *mtId; // @synthesize mtId=_mtId;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)deleteSessionId;
- (_Bool)hasSessionId;
- (void)deleteMtId;
- (_Bool)hasMtId;

@end

