//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSRegistrationInfo, NSArray, NSData, NSDictionary, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LSBundleRecordBuilder
{
    unsigned int _bundleClass;
    LSRegistrationInfo *_registrationInfo;
    unsigned char _retries;
    unsigned int _previousInstallType;
    unsigned long long _sequenceNumber;
    _Bool _registerChildItemsTrusted;
    NSData *_bundleAlias;
    unsigned long long _bundleFlags;
    unsigned int _plistContentFlags;
    unsigned char _iconFlags;
    unsigned int _itemFlags;
    struct LSBundleMoreFlags _moreFlags;
    struct LSBundleBaseFlags _baseFlags;
    unsigned int _platform;
    unsigned int _minSystemVersionPlatform;
    unsigned int _hfsType;
    unsigned int _hfsCreator;
    unsigned long long _inode;
    _Bool _canDefineSystemExtensionPoint;
    NSMutableDictionary *_plistRarities;
    NSMutableDictionary *_commonInfoPlistEntries;
    NSArray *_supportedGameControllers;
    struct LSVersionNumber _sdkVersionNumber;
    _Bool _containerized;
    _Bool _webNotificationPlaceholder;
    unsigned char _profileValidationState;
    NSNumber *_compatibilityState;
    NSNumber *_installFailureReason;
    NSString *_version;
    NSString *_minSystemVersion;
    NSString *_maxSystemVersion;
    NSString *_sdkVersion;
    NSString *_appStoreToolsBuildVersion;
    NSString *_shortVersionString;
    NSString *_execPath;
    NSArray *_machOUUIDs;
    NSNumber *_itemID;
    NSString *_teamID;
    NSArray *_activityTypes;
    NSArray *_deviceFamily;
    NSNumber *_installType;
    NSString *_identifier;
    NSString *_displayName;
    NSString *_shortDisplayName;
    NSString *_bundleName;
    NSArray *_alternateNames;
    NSURL *_dataContainerURL;
    NSURL *_bundleContainerURL;
    NSString *_categoryType;
    NSString *_secondCategoryType;
    NSString *_vendorName;
    NSString *_appType;
    NSString *_signerIdentity;
    NSString *_codeInfoIdentifier;
    NSString *_signerOrganization;
    NSString *_itemName;
    NSNumber *_storefront;
    NSNumber *_versionID;
    NSString *_sourceAppBundleID;
    NSString *_appVariant;
    NSMutableSet *_counterpartAppBundleIDs;
    NSMutableSet *_equivalentBundleIDs;
    NSArray *_parentApplicationIdentifiers;
    NSString *_watchKitVersion;
    NSString *_complicationPrincipalClass;
    NSArray *_supportedComplicationFamilies;
    NSString *_ratingLabel;
    NSNumber *_ratingRank;
    NSString *_genre;
    NSNumber *_genreID;
    NSString *_primaryIconName;
    NSString *_alternatePrimaryIconName;
    NSDictionary *_iconsDict;
    NSArray *_iconFileNames;
    NSNumber *_purchaserDSID;
    NSNumber *_downloaderDSID;
    NSNumber *_familyID;
    NSNumber *_staticDiskUsage;
    NSString *_libraryPath;
    NSArray *_libraryItems;
    NSArray *_documentClaims;
    NSArray *_URLClaims;
    NSArray *_importedTypes;
    NSArray *_exportedTypes;
    NSArray *_queriableSchemes;
    NSDictionary *_pluginPlists;
    NSDictionary *_pluginMIDicts;
    NSArray *_driverExtensionPaths;
    NSDictionary *_groupContainers;
    NSDictionary *_entitlements;
    NSDictionary *_sandboxEnvironmentVariables;
    NSDictionary *_extensionSDK;
    NSDictionary *_intentDefinitionURLs;
    NSArray *_bgPermittedIdentifiers;
    NSArray *_carPlayInstrumentClusterURLSchemes;
    NSDictionary *_localizedNames;
    NSDictionary *_localizedShortNames;
    NSString *_microphoneUsageDescription;
    NSDictionary *_localizedMicrophoneUsageDescription;
    NSString *_identityUsageDescription;
    NSDictionary *_localizedIdentityUsageDescription;
    NSDictionary *_localizedStrings;
    NSDictionary *_unlocalizedNamesWithContext;
    NSNumber *_directoryClass;
    NSDictionary *_mobileInstallIDs;
    NSArray *_slices;
    NSNumber *_signatureVersion;
    NSDictionary *_stashedAppInfo;
    NSString *_applicationManagementDomain;
    NSString *_linkedParentBundleID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *linkedParentBundleID; // @synthesize linkedParentBundleID=_linkedParentBundleID;
@property(readonly, nonatomic) NSString *applicationManagementDomain; // @synthesize applicationManagementDomain=_applicationManagementDomain;
@property(readonly, nonatomic) NSDictionary *stashedAppInfo; // @synthesize stashedAppInfo=_stashedAppInfo;
@property(readonly) NSNumber *signatureVersion; // @synthesize signatureVersion=_signatureVersion;
@property(readonly, nonatomic) NSArray *slices; // @synthesize slices=_slices;
@property(readonly) NSDictionary *mobileInstallIDs; // @synthesize mobileInstallIDs=_mobileInstallIDs;
@property(readonly, nonatomic) NSNumber *directoryClass; // @synthesize directoryClass=_directoryClass;
@property(readonly, nonatomic) NSDictionary *unlocalizedNamesWithContext; // @synthesize unlocalizedNamesWithContext=_unlocalizedNamesWithContext;
@property(readonly, nonatomic) NSDictionary *localizedStrings; // @synthesize localizedStrings=_localizedStrings;
@property(readonly, nonatomic) NSDictionary *localizedIdentityUsageDescription; // @synthesize localizedIdentityUsageDescription=_localizedIdentityUsageDescription;
@property(readonly, nonatomic) NSString *identityUsageDescription; // @synthesize identityUsageDescription=_identityUsageDescription;
@property(readonly, nonatomic) NSDictionary *localizedMicrophoneUsageDescription; // @synthesize localizedMicrophoneUsageDescription=_localizedMicrophoneUsageDescription;
@property(readonly, nonatomic) NSString *microphoneUsageDescription; // @synthesize microphoneUsageDescription=_microphoneUsageDescription;
@property(readonly, nonatomic) NSDictionary *localizedShortNames; // @synthesize localizedShortNames=_localizedShortNames;
@property(readonly, nonatomic) NSDictionary *localizedNames; // @synthesize localizedNames=_localizedNames;
@property(nonatomic) unsigned char profileValidationState; // @synthesize profileValidationState=_profileValidationState;
@property(readonly, nonatomic) NSArray *carPlayInstrumentClusterURLSchemes; // @synthesize carPlayInstrumentClusterURLSchemes=_carPlayInstrumentClusterURLSchemes;
@property(readonly, nonatomic) NSArray *bgPermittedIdentifiers; // @synthesize bgPermittedIdentifiers=_bgPermittedIdentifiers;
@property(readonly, nonatomic) NSDictionary *intentDefinitionURLs; // @synthesize intentDefinitionURLs=_intentDefinitionURLs;
@property(readonly, nonatomic) NSDictionary *extensionSDK; // @synthesize extensionSDK=_extensionSDK;
@property(readonly, nonatomic) NSDictionary *sandboxEnvironmentVariables; // @synthesize sandboxEnvironmentVariables=_sandboxEnvironmentVariables;
@property(readonly, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) NSDictionary *groupContainers; // @synthesize groupContainers=_groupContainers;
@property(readonly, nonatomic) NSArray *driverExtensionPaths; // @synthesize driverExtensionPaths=_driverExtensionPaths;
@property(readonly, nonatomic) NSDictionary *pluginMIDicts; // @synthesize pluginMIDicts=_pluginMIDicts;
@property(readonly, nonatomic) NSDictionary *pluginPlists; // @synthesize pluginPlists=_pluginPlists;
@property(readonly, nonatomic) NSArray *queriableSchemes; // @synthesize queriableSchemes=_queriableSchemes;
@property(readonly, nonatomic) NSArray *exportedTypes; // @synthesize exportedTypes=_exportedTypes;
@property(readonly, nonatomic) NSArray *importedTypes; // @synthesize importedTypes=_importedTypes;
@property(readonly, nonatomic) NSArray *URLClaims; // @synthesize URLClaims=_URLClaims;
@property(readonly, nonatomic) NSArray *documentClaims; // @synthesize documentClaims=_documentClaims;
@property(readonly, nonatomic) NSArray *libraryItems; // @synthesize libraryItems=_libraryItems;
@property(readonly, nonatomic) NSString *libraryPath; // @synthesize libraryPath=_libraryPath;
@property(readonly, nonatomic) NSNumber *staticDiskUsage; // @synthesize staticDiskUsage=_staticDiskUsage;
@property(readonly, nonatomic) NSNumber *familyID; // @synthesize familyID=_familyID;
@property(readonly, nonatomic) NSNumber *downloaderDSID; // @synthesize downloaderDSID=_downloaderDSID;
@property(readonly, nonatomic) NSNumber *purchaserDSID; // @synthesize purchaserDSID=_purchaserDSID;
@property(readonly, nonatomic) NSArray *iconFileNames; // @synthesize iconFileNames=_iconFileNames;
@property(readonly, nonatomic) NSDictionary *iconsDict; // @synthesize iconsDict=_iconsDict;
@property(readonly, nonatomic) NSString *alternatePrimaryIconName; // @synthesize alternatePrimaryIconName=_alternatePrimaryIconName;
@property(readonly, nonatomic) NSString *primaryIconName; // @synthesize primaryIconName=_primaryIconName;
@property(readonly, nonatomic) NSNumber *genreID; // @synthesize genreID=_genreID;
@property(readonly, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(readonly, nonatomic) NSNumber *ratingRank; // @synthesize ratingRank=_ratingRank;
@property(readonly, nonatomic) NSString *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(readonly, nonatomic) NSArray *supportedComplicationFamilies; // @synthesize supportedComplicationFamilies=_supportedComplicationFamilies;
@property(readonly, nonatomic) NSString *complicationPrincipalClass; // @synthesize complicationPrincipalClass=_complicationPrincipalClass;
@property(readonly, nonatomic) NSString *watchKitVersion; // @synthesize watchKitVersion=_watchKitVersion;
@property(readonly, nonatomic) NSArray *parentApplicationIdentifiers; // @synthesize parentApplicationIdentifiers=_parentApplicationIdentifiers;
@property(readonly, nonatomic) NSMutableSet *equivalentBundleIDs; // @synthesize equivalentBundleIDs=_equivalentBundleIDs;
@property(readonly, nonatomic) NSMutableSet *counterpartAppBundleIDs; // @synthesize counterpartAppBundleIDs=_counterpartAppBundleIDs;
@property(readonly, nonatomic) NSString *appVariant; // @synthesize appVariant=_appVariant;
@property(readonly, nonatomic) NSString *sourceAppBundleID; // @synthesize sourceAppBundleID=_sourceAppBundleID;
@property(readonly, nonatomic) NSNumber *versionID; // @synthesize versionID=_versionID;
@property(readonly, nonatomic) NSNumber *storefront; // @synthesize storefront=_storefront;
@property(readonly, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(readonly, nonatomic) NSString *signerOrganization; // @synthesize signerOrganization=_signerOrganization;
@property(readonly, nonatomic) NSString *codeInfoIdentifier; // @synthesize codeInfoIdentifier=_codeInfoIdentifier;
@property(readonly, nonatomic) NSString *signerIdentity; // @synthesize signerIdentity=_signerIdentity;
@property(readonly, nonatomic) NSString *appType; // @synthesize appType=_appType;
@property(readonly, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(readonly, nonatomic) NSString *secondCategoryType; // @synthesize secondCategoryType=_secondCategoryType;
@property(readonly, nonatomic) NSString *categoryType; // @synthesize categoryType=_categoryType;
@property(readonly, nonatomic) NSURL *bundleContainerURL; // @synthesize bundleContainerURL=_bundleContainerURL;
@property(readonly, nonatomic) NSURL *dataContainerURL; // @synthesize dataContainerURL=_dataContainerURL;
@property(readonly, nonatomic) NSArray *alternateNames; // @synthesize alternateNames=_alternateNames;
@property(readonly, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(readonly, nonatomic) NSString *shortDisplayName; // @synthesize shortDisplayName=_shortDisplayName;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSNumber *installType; // @synthesize installType=_installType;
@property(readonly, nonatomic) NSArray *deviceFamily; // @synthesize deviceFamily=_deviceFamily;
@property(readonly, nonatomic) NSArray *activityTypes; // @synthesize activityTypes=_activityTypes;
@property(readonly, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(readonly, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) NSArray *machOUUIDs; // @synthesize machOUUIDs=_machOUUIDs;
@property(readonly, nonatomic) NSString *execPath; // @synthesize execPath=_execPath;
@property(readonly, nonatomic) NSString *shortVersionString; // @synthesize shortVersionString=_shortVersionString;
@property(readonly, nonatomic) NSString *appStoreToolsBuildVersion; // @synthesize appStoreToolsBuildVersion=_appStoreToolsBuildVersion;
@property(readonly, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(readonly, nonatomic) NSString *maxSystemVersion; // @synthesize maxSystemVersion=_maxSystemVersion;
@property(readonly, nonatomic) NSString *minSystemVersion; // @synthesize minSystemVersion=_minSystemVersion;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSNumber *installFailureReason; // @synthesize installFailureReason=_installFailureReason;
@property(readonly, nonatomic) NSNumber *compatibilityState; // @synthesize compatibilityState=_compatibilityState;
@property(readonly, nonatomic) _Bool webNotificationPlaceholder; // @synthesize webNotificationPlaceholder=_webNotificationPlaceholder;
@property(readonly, nonatomic) _Bool containerized; // @synthesize containerized=_containerized;
@property(readonly, nonatomic) _Bool registerChildItemsTrusted; // @synthesize registerChildItemsTrusted=_registerChildItemsTrusted;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) unsigned int previousInstallType; // @synthesize previousInstallType=_previousInstallType;
@property(nonatomic) unsigned char retries; // @synthesize retries=_retries;
- (unsigned int)registerBundleRecord:(id)arg1 error:(id *)arg2;
- (int)activateBindings:(id)arg1 unitID:(unsigned int)arg2 bundleData:(const struct LSBundleData *)arg3;
- (struct LSBundleData)buildBundleData:(id)arg1 error:(id *)arg2;
- (void)parseNSExtensionSDKDefinitionsFromDictionary:(id)arg1;
- (void)parseActivityTypesFromDictionary:(id)arg1;
- (_Bool)parseInstallationInfo:(id)arg1;
- (_Bool)parseInfoPlist:(id)arg1;
- (void)parseURLClaimsFromDict:(id)arg1;
- (void)parseDocumentClaimsFromDict:(id)arg1;
- (void)parseDeviceFamilyFromDict:(id)arg1;
- (void)parseIconFilenamesFromDict:(id)arg1;
- (id)iconsDictionaryFromDict:(id)arg1;
- (void)parseArchitecturesFromDict:(id)arg1;
- (void)setCommonInfoPlistKeysFromDictionary:(id)arg1;
- (void)setRaritiesFromDictionary:(id)arg1;
- (void)setFlagsFromDictionary:(id)arg1;
- (id)_LSKeyTypeMap;
- (id)_LSPlistRaritiesMap;
- (id)_LSBundleFlagMap;
- (id)truncate:(_Bool *)arg1 queriableSchemesIfNeeded:(id)arg2;
- (int)registerQueriableSchemes:(id)arg1 bundleData:(struct LSBundleData *)arg2;
- (void)addItemInfoFlag:(unsigned int)arg1;
- (void)addIconFlag:(unsigned char)arg1;
- (void)addPlistFlag:(unsigned int)arg1;
- (void)addBundleFlag:(unsigned long long)arg1;
- (void)setRegistrationInfo:(id)arg1 alias:(id)arg2;

@end

