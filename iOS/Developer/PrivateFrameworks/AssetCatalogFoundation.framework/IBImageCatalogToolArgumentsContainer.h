//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface IBImageCatalogToolArgumentsContainer
{
    NSMutableArray *_targetDeviceStrings;
    NSMutableArray *_alternateAppIconNames;
    _Bool _printVersion;
    _Bool _includeDebugOutput;
    _Bool _printContents;
    _Bool _printAssetTagCombinations;
    _Bool _printErrorMessages;
    _Bool _printWarningMessages;
    _Bool _printNoticeMessages;
    _Bool _printMessageCategoryInfo;
    _Bool _compressPNGs;
    _Bool _enableOnDemandResources;
    _Bool _includeStickerContent;
    _Bool _includeAllAppIcons;
    _Bool _skipAppStoreDeployment;
    _Bool _dumpAssets;
    _Bool _enableIncrementalDistill;
    _Bool _printSearchDescription;
    _Bool _includeLocalizationsInInfoPlist;
    long long _standaloneIconBehavior;
    NSString *_platformName;
    NSString *_userInterfaceFrameworkFamily;
    NSString *_compilationOutputPath;
    NSString *_partialInfoPlistOutputPath;
    NSString *_primaryAppIconName;
    NSString *_launchImageName;
    NSString *_accentColorName;
    NSString *_widgetBackgroundColorName;
    NSString *_minimumDeploymentTarget;
    NSString *_exportDependencyInfoPath;
    NSString *_bundleIdentifier;
    NSString *_generateSwiftAssetSymbols;
    NSString *_generateObjCAssetSymbols;
    NSString *_generateSwiftAssetSymbolExtensions;
    NSArray *_generateAssetSymbolFrameworkSupportStrings;
    NSString *_generateAssetSymbolWarnings;
    NSString *_generateAssetSymbolErrors;
    NSString *_generateAssetSymbolBackwardsDeploymentSupport;
    NSString *_commonAssetRepositoryFileName;
    NSString *_filterForDeviceModel;
    NSString *_filterForThinningDeviceConfiguration;
    NSString *_filterForDeviceOSVersion;
    NSString *_optimization;
    NSString *_targetName;
    NSString *_stickerPackIdentifierPrefix;
    long long _stickersIconRole;
    NSString *_developmentLanguage;
    NSMutableDictionary *_stringFilesByStickerPackAndLanguage;
    NSMutableDictionary *_additionalEnvironment;
    NSString *_waitDuration;
    NSString *_agentWaitDuration;
    NSString *_lightweightAssetRuntimeMode;
    NSString *_lightweightAssetRuntimeTraceFile;
    NSDictionary *_assetPackOutputSpecifications;
    NSString *_productType;
}

- (void).cxx_destruct;
@property(copy) NSString *productType; // @synthesize productType=_productType;
@property(copy) NSDictionary *assetPackOutputSpecifications; // @synthesize assetPackOutputSpecifications=_assetPackOutputSpecifications;
@property(copy) NSString *lightweightAssetRuntimeTraceFile; // @synthesize lightweightAssetRuntimeTraceFile=_lightweightAssetRuntimeTraceFile;
@property(copy) NSString *lightweightAssetRuntimeMode; // @synthesize lightweightAssetRuntimeMode=_lightweightAssetRuntimeMode;
@property(copy) NSString *agentWaitDuration; // @synthesize agentWaitDuration=_agentWaitDuration;
@property(copy) NSString *waitDuration; // @synthesize waitDuration=_waitDuration;
@property(retain, nonatomic) NSMutableDictionary *additionalEnvironment; // @synthesize additionalEnvironment=_additionalEnvironment;
@property(retain, nonatomic) NSMutableDictionary *stringFilesByStickerPackAndLanguage; // @synthesize stringFilesByStickerPackAndLanguage=_stringFilesByStickerPackAndLanguage;
@property _Bool includeLocalizationsInInfoPlist; // @synthesize includeLocalizationsInInfoPlist=_includeLocalizationsInInfoPlist;
@property(copy) NSString *developmentLanguage; // @synthesize developmentLanguage=_developmentLanguage;
@property long long stickersIconRole; // @synthesize stickersIconRole=_stickersIconRole;
@property(copy) NSString *stickerPackIdentifierPrefix; // @synthesize stickerPackIdentifierPrefix=_stickerPackIdentifierPrefix;
@property(copy) NSArray *targetDeviceStrings; // @synthesize targetDeviceStrings=_targetDeviceStrings;
@property(copy) NSString *targetName; // @synthesize targetName=_targetName;
@property(copy) NSString *optimization; // @synthesize optimization=_optimization;
@property(copy) NSString *filterForDeviceOSVersion; // @synthesize filterForDeviceOSVersion=_filterForDeviceOSVersion;
@property(copy) NSString *filterForThinningDeviceConfiguration; // @synthesize filterForThinningDeviceConfiguration=_filterForThinningDeviceConfiguration;
@property(copy) NSString *filterForDeviceModel; // @synthesize filterForDeviceModel=_filterForDeviceModel;
@property(copy) NSString *commonAssetRepositoryFileName; // @synthesize commonAssetRepositoryFileName=_commonAssetRepositoryFileName;
@property(copy) NSString *generateAssetSymbolBackwardsDeploymentSupport; // @synthesize generateAssetSymbolBackwardsDeploymentSupport=_generateAssetSymbolBackwardsDeploymentSupport;
@property(copy) NSString *generateAssetSymbolErrors; // @synthesize generateAssetSymbolErrors=_generateAssetSymbolErrors;
@property(copy) NSString *generateAssetSymbolWarnings; // @synthesize generateAssetSymbolWarnings=_generateAssetSymbolWarnings;
@property(copy) NSArray *generateAssetSymbolFrameworkSupportStrings; // @synthesize generateAssetSymbolFrameworkSupportStrings=_generateAssetSymbolFrameworkSupportStrings;
@property(copy) NSString *generateSwiftAssetSymbolExtensions; // @synthesize generateSwiftAssetSymbolExtensions=_generateSwiftAssetSymbolExtensions;
@property(copy) NSString *generateObjCAssetSymbols; // @synthesize generateObjCAssetSymbols=_generateObjCAssetSymbols;
@property(copy) NSString *generateSwiftAssetSymbols; // @synthesize generateSwiftAssetSymbols=_generateSwiftAssetSymbols;
@property(copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy) NSString *exportDependencyInfoPath; // @synthesize exportDependencyInfoPath=_exportDependencyInfoPath;
@property(copy) NSString *minimumDeploymentTarget; // @synthesize minimumDeploymentTarget=_minimumDeploymentTarget;
@property(copy) NSString *widgetBackgroundColorName; // @synthesize widgetBackgroundColorName=_widgetBackgroundColorName;
@property(copy) NSString *accentColorName; // @synthesize accentColorName=_accentColorName;
@property(copy) NSString *launchImageName; // @synthesize launchImageName=_launchImageName;
@property(copy) NSArray *alternateAppIconNames; // @synthesize alternateAppIconNames=_alternateAppIconNames;
@property(copy) NSString *primaryAppIconName; // @synthesize primaryAppIconName=_primaryAppIconName;
@property(copy) NSString *partialInfoPlistOutputPath; // @synthesize partialInfoPlistOutputPath=_partialInfoPlistOutputPath;
@property(copy) NSString *compilationOutputPath; // @synthesize compilationOutputPath=_compilationOutputPath;
@property(copy) NSString *userInterfaceFrameworkFamily; // @synthesize userInterfaceFrameworkFamily=_userInterfaceFrameworkFamily;
@property(copy) NSString *platformName; // @synthesize platformName=_platformName;
@property _Bool printSearchDescription; // @synthesize printSearchDescription=_printSearchDescription;
@property _Bool enableIncrementalDistill; // @synthesize enableIncrementalDistill=_enableIncrementalDistill;
@property _Bool dumpAssets; // @synthesize dumpAssets=_dumpAssets;
@property _Bool skipAppStoreDeployment; // @synthesize skipAppStoreDeployment=_skipAppStoreDeployment;
@property _Bool includeAllAppIcons; // @synthesize includeAllAppIcons=_includeAllAppIcons;
@property _Bool includeStickerContent; // @synthesize includeStickerContent=_includeStickerContent;
@property long long standaloneIconBehavior; // @synthesize standaloneIconBehavior=_standaloneIconBehavior;
@property _Bool enableOnDemandResources; // @synthesize enableOnDemandResources=_enableOnDemandResources;
@property _Bool compressPNGs; // @synthesize compressPNGs=_compressPNGs;
@property _Bool printMessageCategoryInfo; // @synthesize printMessageCategoryInfo=_printMessageCategoryInfo;
@property _Bool printNoticeMessages; // @synthesize printNoticeMessages=_printNoticeMessages;
@property _Bool printWarningMessages; // @synthesize printWarningMessages=_printWarningMessages;
@property _Bool printErrorMessages; // @synthesize printErrorMessages=_printErrorMessages;
@property _Bool printAssetTagCombinations; // @synthesize printAssetTagCombinations=_printAssetTagCombinations;
@property _Bool printContents; // @synthesize printContents=_printContents;
@property _Bool includeDebugOutput; // @synthesize includeDebugOutput=_includeDebugOutput;
@property _Bool printVersion; // @synthesize printVersion=_printVersion;
- (_Bool)supportsMultipleInputDocuments;
- (id)objectOptionsThatRequireInputDocuments;
- (id)booleanOptionsThatRequireInputDocuments;
- (id)optionIndex;
- (void)mergeStringFilesByStickerPackAndLanguage:(id)arg1;
- (_Bool)deprecatedProductTypeMatchesExactly:(id)arg1;
- (id)enumValueMappingForOptionDescription:(id)arg1;
- (void)interpretOption:(id)arg1 optionalParameter:(id)arg2 collectingErrors:(id)arg3;
- (id)init;

@end

