//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DODMLASRSchemaDODMLASRAudioFileResultTier1, DODMLASRSchemaDODMLASRPersonalizationExperimentContext, DODMLASRSchemaDODMLASRUserEditExperimentContext, DODMLASRSchemaDODMLASRUserEditExperimentEndedTier1, DODMLSchemaDODMLClientEventMetadata, NSData;

@interface DODMLSchemaDODMLClientEvent
{
    DODMLSchemaDODMLClientEventMetadata *_eventMetadata;
    DODMLASRSchemaDODMLASRPersonalizationExperimentContext *_personalizationExperimentContext;
    DODMLASRSchemaDODMLASRUserEditExperimentContext *_userEditExperimentContext;
    DODMLASRSchemaDODMLASRUserEditExperimentEndedTier1 *_userEditExperimentEndedTier1;
    DODMLASRSchemaDODMLASRAudioFileResultTier1 *_audioFileResultTier1;
    _Bool _hasEventMetadata;
    _Bool _hasPersonalizationExperimentContext;
    _Bool _hasUserEditExperimentContext;
    _Bool _hasUserEditExperimentEndedTier1;
    _Bool _hasAudioFileResultTier1;
    unsigned long long _whichEvent_Type;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasAudioFileResultTier1; // @synthesize hasAudioFileResultTier1=_hasAudioFileResultTier1;
@property(nonatomic) _Bool hasUserEditExperimentEndedTier1; // @synthesize hasUserEditExperimentEndedTier1=_hasUserEditExperimentEndedTier1;
@property(nonatomic) _Bool hasUserEditExperimentContext; // @synthesize hasUserEditExperimentContext=_hasUserEditExperimentContext;
@property(nonatomic) _Bool hasPersonalizationExperimentContext; // @synthesize hasPersonalizationExperimentContext=_hasPersonalizationExperimentContext;
@property(nonatomic) _Bool hasEventMetadata; // @synthesize hasEventMetadata=_hasEventMetadata;
@property(retain, nonatomic) DODMLSchemaDODMLClientEventMetadata *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(readonly, nonatomic) unsigned long long whichEvent_Type; // @synthesize whichEvent_Type=_whichEvent_Type;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(retain, nonatomic) DODMLASRSchemaDODMLASRAudioFileResultTier1 *audioFileResultTier1; // @synthesize audioFileResultTier1=_audioFileResultTier1;
@property(retain, nonatomic) DODMLASRSchemaDODMLASRUserEditExperimentEndedTier1 *userEditExperimentEndedTier1; // @synthesize userEditExperimentEndedTier1=_userEditExperimentEndedTier1;
@property(retain, nonatomic) DODMLASRSchemaDODMLASRUserEditExperimentContext *userEditExperimentContext; // @synthesize userEditExperimentContext=_userEditExperimentContext;
@property(retain, nonatomic) DODMLASRSchemaDODMLASRPersonalizationExperimentContext *personalizationExperimentContext; // @synthesize personalizationExperimentContext=_personalizationExperimentContext;
- (id)qualifiedMessageName;
- (int)getAnyEventType;

@end
