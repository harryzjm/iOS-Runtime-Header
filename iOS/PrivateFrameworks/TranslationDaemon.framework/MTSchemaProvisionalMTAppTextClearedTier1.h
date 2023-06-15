//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class MTSchemaProvisionalMTLocalePair, NSData, NSString;

__attribute__((visibility("hidden")))
@interface MTSchemaProvisionalMTAppTextClearedTier1 : SISchemaInstrumentationMessage
{
    NSString *_translationPayload;
    MTSchemaProvisionalMTLocalePair *_localePair;
}

+ (id)lt_initWithPayload:(id)arg1 localePair:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MTSchemaProvisionalMTLocalePair *localePair; // @synthesize localePair=_localePair;
@property(copy, nonatomic) NSString *translationPayload; // @synthesize translationPayload=_translationPayload;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)deleteLocalePair;
- (_Bool)hasLocalePair;
- (void)deleteTranslationPayload;
- (_Bool)hasTranslationPayload;

@end

