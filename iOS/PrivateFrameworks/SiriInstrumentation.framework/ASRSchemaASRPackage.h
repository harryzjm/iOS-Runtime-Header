//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASRSchemaASRRecognitionResult, NSData;

@interface ASRSchemaASRPackage
{
    ASRSchemaASRRecognitionResult *_rawRecognition;
    ASRSchemaASRRecognitionResult *_postItn;
    _Bool _hasRawRecognition;
    _Bool _hasPostItn;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasPostItn; // @synthesize hasPostItn=_hasPostItn;
@property(nonatomic) _Bool hasRawRecognition; // @synthesize hasRawRecognition=_hasRawRecognition;
@property(retain, nonatomic) ASRSchemaASRRecognitionResult *postItn; // @synthesize postItn=_postItn;
@property(retain, nonatomic) ASRSchemaASRRecognitionResult *rawRecognition; // @synthesize rawRecognition=_rawRecognition;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
