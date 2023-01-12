//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DODMLASRSchemaDODMLASRTranscriptMetadata, NSData;

@interface DODMLASRSchemaDODMLASRTranscriptionMetrics
{
    DODMLASRSchemaDODMLASRTranscriptMetadata *_train;
    DODMLASRSchemaDODMLASRTranscriptMetadata *_dev;
    DODMLASRSchemaDODMLASRTranscriptMetadata *_test;
    DODMLASRSchemaDODMLASRTranscriptMetadata *_external;
    _Bool _hasTrain;
    _Bool _hasDev;
    _Bool _hasTest;
    _Bool _hasExternal;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasExternal; // @synthesize hasExternal=_hasExternal;
@property(nonatomic) _Bool hasTest; // @synthesize hasTest=_hasTest;
@property(nonatomic) _Bool hasDev; // @synthesize hasDev=_hasDev;
@property(nonatomic) _Bool hasTrain; // @synthesize hasTrain=_hasTrain;
@property(retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptMetadata *external; // @synthesize external=_external;
@property(retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptMetadata *test; // @synthesize test=_test;
@property(retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptMetadata *dev; // @synthesize dev=_dev;
@property(retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptMetadata *train; // @synthesize train=_train;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
