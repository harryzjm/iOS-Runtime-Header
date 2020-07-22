//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSNumber, NSString;

@interface MCWiFiPayload
{
    _Bool _isHidden;
    _Bool _captiveBypass;
    _Bool _isWEP;
    _Bool _isWPA;
    _Bool _passwordRequired;
    _Bool _usernameRequired;
    _Bool _autoJoin;
    _Bool _proxyPACFallbackAllowed;
    _Bool _isHotspot;
    _Bool _serviceProviderRoamingEnabled;
    int _proxyType;
    NSString *_ssid;
    NSString *_encryptionType;
    NSDictionary *_eapClientConfig;
    NSDictionary *_qosMarkingConfig;
    NSString *_password;
    NSString *_username;
    NSNumber *_isFirstAutoJoinRestricted;
    NSString *_certificateUUID;
    NSArray *_payloadCertificateAnchorUUID;
    NSString *_proxyServer;
    NSNumber *_proxyServerPort;
    NSString *_proxyUsername;
    NSString *_proxyPassword;
    NSString *_proxyPACURLString;
    NSString *_credentialUUID;
    NSNumber *_priority;
    NSString *_domainName;
    NSString *_HESSID;
    NSArray *_roamingConsortiumOIs;
    NSArray *_NAIRealmNames;
    NSArray *_MCCAndMNCs;
    NSString *_displayedOperatorName;
    NSNumber *_isHiddenNum;
    NSNumber *_autoJoinNum;
    NSNumber *_captiveBypassNum;
    NSNumber *_proxyPACFallbackAllowedNum;
    NSNumber *_isHotspotNum;
    NSNumber *_serviceProviderRoamingEnabledNum;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(retain, nonatomic) NSNumber *serviceProviderRoamingEnabledNum; // @synthesize serviceProviderRoamingEnabledNum=_serviceProviderRoamingEnabledNum;
@property(retain, nonatomic) NSNumber *isHotspotNum; // @synthesize isHotspotNum=_isHotspotNum;
@property(retain, nonatomic) NSNumber *proxyPACFallbackAllowedNum; // @synthesize proxyPACFallbackAllowedNum=_proxyPACFallbackAllowedNum;
@property(retain, nonatomic) NSNumber *captiveBypassNum; // @synthesize captiveBypassNum=_captiveBypassNum;
@property(retain, nonatomic) NSNumber *autoJoinNum; // @synthesize autoJoinNum=_autoJoinNum;
@property(retain, nonatomic) NSNumber *isHiddenNum; // @synthesize isHiddenNum=_isHiddenNum;
@property(retain, nonatomic) NSString *displayedOperatorName; // @synthesize displayedOperatorName=_displayedOperatorName;
@property(retain, nonatomic) NSArray *MCCAndMNCs; // @synthesize MCCAndMNCs=_MCCAndMNCs;
@property(retain, nonatomic) NSArray *NAIRealmNames; // @synthesize NAIRealmNames=_NAIRealmNames;
@property(retain, nonatomic) NSArray *roamingConsortiumOIs; // @synthesize roamingConsortiumOIs=_roamingConsortiumOIs;
@property(nonatomic, getter=isServiceProviderRoamingEnabled) _Bool serviceProviderRoamingEnabled; // @synthesize serviceProviderRoamingEnabled=_serviceProviderRoamingEnabled;
@property(retain, nonatomic) NSString *HESSID; // @synthesize HESSID=_HESSID;
@property(retain, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
@property(retain, nonatomic) NSNumber *priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool isHotspot; // @synthesize isHotspot=_isHotspot;
@property(retain, nonatomic) NSString *credentialUUID; // @synthesize credentialUUID=_credentialUUID;
@property(nonatomic) _Bool proxyPACFallbackAllowed; // @synthesize proxyPACFallbackAllowed=_proxyPACFallbackAllowed;
@property(retain, nonatomic) NSString *proxyPACURLString; // @synthesize proxyPACURLString=_proxyPACURLString;
@property(retain, nonatomic) NSString *proxyPassword; // @synthesize proxyPassword=_proxyPassword;
@property(retain, nonatomic) NSString *proxyUsername; // @synthesize proxyUsername=_proxyUsername;
@property(retain, nonatomic) NSNumber *proxyServerPort; // @synthesize proxyServerPort=_proxyServerPort;
@property(retain, nonatomic) NSString *proxyServer; // @synthesize proxyServer=_proxyServer;
@property(nonatomic) int proxyType; // @synthesize proxyType=_proxyType;
@property(retain, nonatomic) NSArray *payloadCertificateAnchorUUID; // @synthesize payloadCertificateAnchorUUID=_payloadCertificateAnchorUUID;
@property(retain, nonatomic) NSString *certificateUUID; // @synthesize certificateUUID=_certificateUUID;
@property(nonatomic) NSNumber *isFirstAutoJoinRestricted; // @synthesize isFirstAutoJoinRestricted=_isFirstAutoJoinRestricted;
@property(nonatomic) _Bool autoJoin; // @synthesize autoJoin=_autoJoin;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) _Bool usernameRequired; // @synthesize usernameRequired=_usernameRequired;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) _Bool passwordRequired; // @synthesize passwordRequired=_passwordRequired;
@property(retain, nonatomic) NSDictionary *qosMarkingConfig; // @synthesize qosMarkingConfig=_qosMarkingConfig;
@property(retain, nonatomic) NSDictionary *eapClientConfig; // @synthesize eapClientConfig=_eapClientConfig;
@property(nonatomic) _Bool isWPA; // @synthesize isWPA=_isWPA;
@property(nonatomic) _Bool isWEP; // @synthesize isWEP=_isWEP;
@property(retain, nonatomic) NSString *encryptionType; // @synthesize encryptionType=_encryptionType;
@property(nonatomic) _Bool captiveBypass; // @synthesize captiveBypass=_captiveBypass;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(retain, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
- (void).cxx_destruct;
- (id)userInputFields;
- (id)installationWarnings;
- (id)description;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle2Description;
- (id)_localizedEncryptionTypeString;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (_Bool)_isEAPSIMConfig:(id)arg1;
- (id)_eapPasswordFromConfig:(id)arg1 isRequired:(_Bool *)arg2;
- (id)_eapUsernameFromConfig:(id)arg1 isRequired:(_Bool *)arg2;
- (_Bool)_qosMarkingConfigIsValid:(id)arg1 error:(id *)arg2;
- (_Bool)_eapConfigIsValid:(id)arg1 error:(id *)arg2;

@end

