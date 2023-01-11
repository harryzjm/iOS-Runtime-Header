//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class LTSchemaLocaleConfidence, NSData, NSString;

@interface LTSchemaLIDSpeechTranslationEvent : PBCodable
{
    NSString *_requestID;
    LTSchemaLocaleConfidence *_selectedLocale;
    LTSchemaLocaleConfidence *_alternateLocale;
    NSString *_userSelectedLocale;
    unsigned int _responseTimeMs;
    unsigned int _speechElapsedTime;
    struct {
        unsigned int responseTimeMs:1;
        unsigned int speechElapsedTime:1;
    } _has;
    _Bool _hasRequestID;
    _Bool _hasSelectedLocale;
    _Bool _hasAlternateLocale;
    _Bool _hasUserSelectedLocale;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasUserSelectedLocale; // @synthesize hasUserSelectedLocale=_hasUserSelectedLocale;
@property(nonatomic) _Bool hasAlternateLocale; // @synthesize hasAlternateLocale=_hasAlternateLocale;
@property(nonatomic) _Bool hasSelectedLocale; // @synthesize hasSelectedLocale=_hasSelectedLocale;
@property(nonatomic) _Bool hasRequestID; // @synthesize hasRequestID=_hasRequestID;
@property(nonatomic) unsigned int speechElapsedTime; // @synthesize speechElapsedTime=_speechElapsedTime;
@property(nonatomic) unsigned int responseTimeMs; // @synthesize responseTimeMs=_responseTimeMs;
@property(copy, nonatomic) NSString *userSelectedLocale; // @synthesize userSelectedLocale=_userSelectedLocale;
@property(retain, nonatomic) LTSchemaLocaleConfidence *alternateLocale; // @synthesize alternateLocale=_alternateLocale;
@property(retain, nonatomic) LTSchemaLocaleConfidence *selectedLocale; // @synthesize selectedLocale=_selectedLocale;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasSpeechElapsedTime;
@property(nonatomic) _Bool hasResponseTimeMs;

@end
