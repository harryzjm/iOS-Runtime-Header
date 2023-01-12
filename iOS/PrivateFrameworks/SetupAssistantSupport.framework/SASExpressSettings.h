//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SetupAssistantSupport/NSCopying-Protocol.h>

@class NSData, NSString, SASExpressSettingsPrivacyBundle;

@interface SASExpressSettings : PBCodable <NSCopying>
{
    SASExpressSettingsPrivacyBundle *_appAnalyticsPrivacyBundle;
    int _appearanceMode;
    SASExpressSettingsPrivacyBundle *_deviceAnalyticsPrivacyBundle;
    NSString *_deviceClass;
    int _displayZoomOption;
    SASExpressSettingsPrivacyBundle *_findMyPrivacyBundle;
    SASExpressSettingsPrivacyBundle *_locationServicesPrivacyBundle;
    NSString *_productType;
    SASExpressSettingsPrivacyBundle *_siriPrivacyBundle;
    unsigned int _version;
    NSData *_walletData;
    NSData *_watchMigrationData;
    _Bool _appAnalyticsOptIn;
    _Bool _deviceAnalyticsOptIn;
    _Bool _fileVaultEnabled;
    _Bool _findMyOptIn;
    _Bool _locationServicesOptIn;
    _Bool _screenTimeEnabled;
    _Bool _siriDataSharingOptIn;
    _Bool _siriOptIn;
    _Bool _softwareUpdateAutoDownloadEnabled;
    _Bool _softwareUpdateAutoUpdateEnabled;
    _Bool _unlockWithWatchEnabled;
    struct {
        unsigned int appearanceMode:1;
        unsigned int displayZoomOption:1;
        unsigned int appAnalyticsOptIn:1;
        unsigned int deviceAnalyticsOptIn:1;
        unsigned int fileVaultEnabled:1;
        unsigned int findMyOptIn:1;
        unsigned int locationServicesOptIn:1;
        unsigned int screenTimeEnabled:1;
        unsigned int siriDataSharingOptIn:1;
        unsigned int siriOptIn:1;
        unsigned int softwareUpdateAutoDownloadEnabled:1;
        unsigned int softwareUpdateAutoUpdateEnabled:1;
        unsigned int unlockWithWatchEnabled:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool fileVaultEnabled; // @synthesize fileVaultEnabled=_fileVaultEnabled;
@property(nonatomic) _Bool unlockWithWatchEnabled; // @synthesize unlockWithWatchEnabled=_unlockWithWatchEnabled;
@property(retain, nonatomic) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(retain, nonatomic) SASExpressSettingsPrivacyBundle *siriPrivacyBundle; // @synthesize siriPrivacyBundle=_siriPrivacyBundle;
@property(retain, nonatomic) SASExpressSettingsPrivacyBundle *findMyPrivacyBundle; // @synthesize findMyPrivacyBundle=_findMyPrivacyBundle;
@property(retain, nonatomic) SASExpressSettingsPrivacyBundle *locationServicesPrivacyBundle; // @synthesize locationServicesPrivacyBundle=_locationServicesPrivacyBundle;
@property(retain, nonatomic) SASExpressSettingsPrivacyBundle *appAnalyticsPrivacyBundle; // @synthesize appAnalyticsPrivacyBundle=_appAnalyticsPrivacyBundle;
@property(retain, nonatomic) SASExpressSettingsPrivacyBundle *deviceAnalyticsPrivacyBundle; // @synthesize deviceAnalyticsPrivacyBundle=_deviceAnalyticsPrivacyBundle;
@property(nonatomic) _Bool siriDataSharingOptIn; // @synthesize siriDataSharingOptIn=_siriDataSharingOptIn;
@property(nonatomic) _Bool softwareUpdateAutoDownloadEnabled; // @synthesize softwareUpdateAutoDownloadEnabled=_softwareUpdateAutoDownloadEnabled;
@property(nonatomic) _Bool softwareUpdateAutoUpdateEnabled; // @synthesize softwareUpdateAutoUpdateEnabled=_softwareUpdateAutoUpdateEnabled;
@property(nonatomic) _Bool screenTimeEnabled; // @synthesize screenTimeEnabled=_screenTimeEnabled;
@property(nonatomic) _Bool siriOptIn; // @synthesize siriOptIn=_siriOptIn;
@property(nonatomic) _Bool findMyOptIn; // @synthesize findMyOptIn=_findMyOptIn;
@property(nonatomic) _Bool locationServicesOptIn; // @synthesize locationServicesOptIn=_locationServicesOptIn;
@property(nonatomic) _Bool appAnalyticsOptIn; // @synthesize appAnalyticsOptIn=_appAnalyticsOptIn;
@property(nonatomic) _Bool deviceAnalyticsOptIn; // @synthesize deviceAnalyticsOptIn=_deviceAnalyticsOptIn;
@property(retain, nonatomic) NSData *walletData; // @synthesize walletData=_walletData;
@property(retain, nonatomic) NSData *watchMigrationData; // @synthesize watchMigrationData=_watchMigrationData;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasFileVaultEnabled;
@property(nonatomic) _Bool hasUnlockWithWatchEnabled;
- (int)StringAsDisplayZoomOption:(id)arg1;
- (id)displayZoomOptionAsString:(int)arg1;
@property(nonatomic) _Bool hasDisplayZoomOption;
@property(nonatomic) int displayZoomOption; // @synthesize displayZoomOption=_displayZoomOption;
@property(readonly, nonatomic) _Bool hasSiriPrivacyBundle;
@property(readonly, nonatomic) _Bool hasFindMyPrivacyBundle;
@property(readonly, nonatomic) _Bool hasLocationServicesPrivacyBundle;
@property(readonly, nonatomic) _Bool hasAppAnalyticsPrivacyBundle;
@property(readonly, nonatomic) _Bool hasDeviceAnalyticsPrivacyBundle;
- (int)StringAsAppearanceMode:(id)arg1;
- (id)appearanceModeAsString:(int)arg1;
@property(nonatomic) _Bool hasAppearanceMode;
@property(nonatomic) int appearanceMode; // @synthesize appearanceMode=_appearanceMode;
@property(nonatomic) _Bool hasSiriDataSharingOptIn;
@property(nonatomic) _Bool hasSoftwareUpdateAutoDownloadEnabled;
@property(nonatomic) _Bool hasSoftwareUpdateAutoUpdateEnabled;
@property(nonatomic) _Bool hasScreenTimeEnabled;
@property(nonatomic) _Bool hasSiriOptIn;
@property(nonatomic) _Bool hasFindMyOptIn;
@property(nonatomic) _Bool hasLocationServicesOptIn;
@property(nonatomic) _Bool hasAppAnalyticsOptIn;
@property(nonatomic) _Bool hasDeviceAnalyticsOptIn;
@property(readonly, nonatomic) _Bool hasWalletData;
@property(readonly, nonatomic) _Bool hasWatchMigrationData;

@end
