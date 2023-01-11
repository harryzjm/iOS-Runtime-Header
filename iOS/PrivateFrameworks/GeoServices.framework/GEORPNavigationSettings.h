//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEORPNavigationSettings : PBCodable <NSCopying>
{
    unsigned long long _distanceUnits;
    unsigned long long _maxAlternateRouteCount;
    unsigned long long _voiceVolume;
    int _userPreferredTransportType;
    NSString *_voiceLanguage;
    _Bool _beepBeforeInstruction;
    _Bool _muteSpeechOverride;
    _Bool _pauseSpokenAudio;
    _Bool _shouldUseGuidanceEventManager;
    _Bool _speechEnabled;
    struct {
        unsigned int distanceUnits:1;
        unsigned int maxAlternateRouteCount:1;
        unsigned int voiceVolume:1;
        unsigned int userPreferredTransportType:1;
        unsigned int beepBeforeInstruction:1;
        unsigned int muteSpeechOverride:1;
        unsigned int pauseSpokenAudio:1;
        unsigned int shouldUseGuidanceEventManager:1;
        unsigned int speechEnabled:1;
    } _has;
}

@property(nonatomic) _Bool shouldUseGuidanceEventManager; // @synthesize shouldUseGuidanceEventManager=_shouldUseGuidanceEventManager;
@property(retain, nonatomic) NSString *voiceLanguage; // @synthesize voiceLanguage=_voiceLanguage;
@property(nonatomic) _Bool beepBeforeInstruction; // @synthesize beepBeforeInstruction=_beepBeforeInstruction;
@property(nonatomic) unsigned long long maxAlternateRouteCount; // @synthesize maxAlternateRouteCount=_maxAlternateRouteCount;
@property(nonatomic) _Bool speechEnabled; // @synthesize speechEnabled=_speechEnabled;
@property(nonatomic) _Bool muteSpeechOverride; // @synthesize muteSpeechOverride=_muteSpeechOverride;
@property(nonatomic) _Bool pauseSpokenAudio; // @synthesize pauseSpokenAudio=_pauseSpokenAudio;
@property(nonatomic) unsigned long long distanceUnits; // @synthesize distanceUnits=_distanceUnits;
@property(nonatomic) unsigned long long voiceVolume; // @synthesize voiceVolume=_voiceVolume;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsUserPreferredTransportType:(id)arg1;
- (id)userPreferredTransportTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasUserPreferredTransportType;
@property(nonatomic) int userPreferredTransportType; // @synthesize userPreferredTransportType=_userPreferredTransportType;
@property(nonatomic) _Bool hasShouldUseGuidanceEventManager;
@property(readonly, nonatomic) _Bool hasVoiceLanguage;
@property(nonatomic) _Bool hasBeepBeforeInstruction;
@property(nonatomic) _Bool hasMaxAlternateRouteCount;
@property(nonatomic) _Bool hasSpeechEnabled;
@property(nonatomic) _Bool hasMuteSpeechOverride;
@property(nonatomic) _Bool hasPauseSpokenAudio;
@property(nonatomic) _Bool hasDistanceUnits;
@property(nonatomic) _Bool hasVoiceVolume;

@end

