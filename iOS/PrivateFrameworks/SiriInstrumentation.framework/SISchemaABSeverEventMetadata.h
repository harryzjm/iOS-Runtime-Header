//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface SISchemaABSeverEventMetadata
{
    SISchemaUUID *_siriDeviceId;
    SISchemaUUID *_speechId;
    long long _timestampNs;
    CDStruct_8e7b2486 _has;
    _Bool _hasSiriDeviceId;
    _Bool _hasSpeechId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasSpeechId; // @synthesize hasSpeechId=_hasSpeechId;
@property(nonatomic) _Bool hasSiriDeviceId; // @synthesize hasSiriDeviceId=_hasSiriDeviceId;
@property(nonatomic) long long timestampNs; // @synthesize timestampNs=_timestampNs;
@property(retain, nonatomic) SISchemaUUID *speechId; // @synthesize speechId=_speechId;
@property(retain, nonatomic) SISchemaUUID *siriDeviceId; // @synthesize siriDeviceId=_siriDeviceId;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasTimestampNs;

@end
