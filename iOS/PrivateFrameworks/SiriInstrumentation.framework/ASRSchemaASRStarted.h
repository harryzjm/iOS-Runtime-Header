//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SISchemaUUID;

@interface ASRSchemaASRStarted
{
    int _task;
    int _modelLocale;
    NSString *_datapackVersion;
    _Bool _isHighQualityAsset;
    NSString *_hammerVersion;
    NSString *_geoLanguageModelRegion;
    _Bool _geoLanguageModelLoaded;
    unsigned long long _speechProfileAgeInNs;
    SISchemaUUID *_dictationUiInteractionId;
    NSString *_portraitExperimentVariantName;
    struct {
        unsigned int task:1;
        unsigned int modelLocale:1;
        unsigned int isHighQualityAsset:1;
        unsigned int geoLanguageModelLoaded:1;
        unsigned int speechProfileAgeInNs:1;
    } _has;
    _Bool _hasDatapackVersion;
    _Bool _hasHammerVersion;
    _Bool _hasGeoLanguageModelRegion;
    _Bool _hasDictationUiInteractionId;
    _Bool _hasPortraitExperimentVariantName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasPortraitExperimentVariantName; // @synthesize hasPortraitExperimentVariantName=_hasPortraitExperimentVariantName;
@property(nonatomic) _Bool hasDictationUiInteractionId; // @synthesize hasDictationUiInteractionId=_hasDictationUiInteractionId;
@property(nonatomic) _Bool hasGeoLanguageModelRegion; // @synthesize hasGeoLanguageModelRegion=_hasGeoLanguageModelRegion;
@property(nonatomic) _Bool hasHammerVersion; // @synthesize hasHammerVersion=_hasHammerVersion;
@property(nonatomic) _Bool hasDatapackVersion; // @synthesize hasDatapackVersion=_hasDatapackVersion;
@property(copy, nonatomic) NSString *portraitExperimentVariantName; // @synthesize portraitExperimentVariantName=_portraitExperimentVariantName;
@property(retain, nonatomic) SISchemaUUID *dictationUiInteractionId; // @synthesize dictationUiInteractionId=_dictationUiInteractionId;
@property(nonatomic) unsigned long long speechProfileAgeInNs; // @synthesize speechProfileAgeInNs=_speechProfileAgeInNs;
@property(nonatomic) _Bool geoLanguageModelLoaded; // @synthesize geoLanguageModelLoaded=_geoLanguageModelLoaded;
@property(copy, nonatomic) NSString *geoLanguageModelRegion; // @synthesize geoLanguageModelRegion=_geoLanguageModelRegion;
@property(copy, nonatomic) NSString *hammerVersion; // @synthesize hammerVersion=_hammerVersion;
@property(nonatomic) _Bool isHighQualityAsset; // @synthesize isHighQualityAsset=_isHighQualityAsset;
@property(copy, nonatomic) NSString *datapackVersion; // @synthesize datapackVersion=_datapackVersion;
@property(nonatomic) int modelLocale; // @synthesize modelLocale=_modelLocale;
@property(nonatomic) int task; // @synthesize task=_task;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasSpeechProfileAgeInNs;
@property(nonatomic) _Bool hasGeoLanguageModelLoaded;
@property(nonatomic) _Bool hasIsHighQualityAsset;
@property(nonatomic) _Bool hasModelLocale;
@property(nonatomic) _Bool hasTask;

@end
