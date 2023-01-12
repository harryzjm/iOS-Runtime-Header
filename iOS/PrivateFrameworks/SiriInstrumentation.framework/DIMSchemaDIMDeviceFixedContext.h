//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DIMSchemaDIMWatchDeviceAttributes, NSData, NSString, SISchemaVoiceSettings;

@interface DIMSchemaDIMDeviceFixedContext
{
    int _systemLocale;
    int _siriInputLocale;
    SISchemaVoiceSettings *_siriVoiceSettings;
    int _dataSharingOptInState;
    NSString *_timezoneOffset;
    int _countryCode;
    NSString *_deviceType;
    NSString *_systemBuild;
    _Bool _isStoreDemoMode;
    double _timeIntervalSince1970;
    DIMSchemaDIMWatchDeviceAttributes *_watchDeviceAttributes;
    _Bool _isLowPowerModeEnabled;
    struct {
        unsigned int systemLocale:1;
        unsigned int siriInputLocale:1;
        unsigned int dataSharingOptInState:1;
        unsigned int countryCode:1;
        unsigned int isStoreDemoMode:1;
        unsigned int timeIntervalSince1970:1;
        unsigned int isLowPowerModeEnabled:1;
    } _has;
    _Bool _hasSiriVoiceSettings;
    _Bool _hasTimezoneOffset;
    _Bool _hasDeviceType;
    _Bool _hasSystemBuild;
    _Bool _hasWatchDeviceAttributes;
    unsigned long long _whichDeviceattributes;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasWatchDeviceAttributes; // @synthesize hasWatchDeviceAttributes=_hasWatchDeviceAttributes;
@property(nonatomic) _Bool hasSystemBuild; // @synthesize hasSystemBuild=_hasSystemBuild;
@property(nonatomic) _Bool hasDeviceType; // @synthesize hasDeviceType=_hasDeviceType;
@property(nonatomic) _Bool hasTimezoneOffset; // @synthesize hasTimezoneOffset=_hasTimezoneOffset;
@property(nonatomic) _Bool hasSiriVoiceSettings; // @synthesize hasSiriVoiceSettings=_hasSiriVoiceSettings;
@property(nonatomic) _Bool isLowPowerModeEnabled; // @synthesize isLowPowerModeEnabled=_isLowPowerModeEnabled;
@property(nonatomic) double timeIntervalSince1970; // @synthesize timeIntervalSince1970=_timeIntervalSince1970;
@property(nonatomic) _Bool isStoreDemoMode; // @synthesize isStoreDemoMode=_isStoreDemoMode;
@property(copy, nonatomic) NSString *systemBuild; // @synthesize systemBuild=_systemBuild;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) int countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *timezoneOffset; // @synthesize timezoneOffset=_timezoneOffset;
@property(nonatomic) int dataSharingOptInState; // @synthesize dataSharingOptInState=_dataSharingOptInState;
@property(retain, nonatomic) SISchemaVoiceSettings *siriVoiceSettings; // @synthesize siriVoiceSettings=_siriVoiceSettings;
@property(nonatomic) int siriInputLocale; // @synthesize siriInputLocale=_siriInputLocale;
@property(nonatomic) int systemLocale; // @synthesize systemLocale=_systemLocale;
@property(readonly, nonatomic) unsigned long long whichDeviceattributes; // @synthesize whichDeviceattributes=_whichDeviceattributes;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasIsLowPowerModeEnabled;
@property(retain, nonatomic) DIMSchemaDIMWatchDeviceAttributes *watchDeviceAttributes; // @synthesize watchDeviceAttributes=_watchDeviceAttributes;
@property(nonatomic) _Bool hasTimeIntervalSince1970;
@property(nonatomic) _Bool hasIsStoreDemoMode;
@property(nonatomic) _Bool hasCountryCode;
@property(nonatomic) _Bool hasDataSharingOptInState;
@property(nonatomic) _Bool hasSiriInputLocale;
@property(nonatomic) _Bool hasSystemLocale;

@end
