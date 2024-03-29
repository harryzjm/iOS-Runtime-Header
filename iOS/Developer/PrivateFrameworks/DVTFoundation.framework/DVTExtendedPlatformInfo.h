//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DVTPlatform, NSArray, NSDictionary, NSNumber, NSSet, NSString;

@interface DVTExtendedPlatformInfo : NSObject
{
    _Bool _requiresProxiedDevicesToBeRegistered;
    _Bool _requiresPortalAppGroups;
    _Bool _requiresIbtoolPlatformDefinition;
    _Bool _supportsUnrestrictedEntitlements;
    _Bool _supportsContentFilterProxyAndDNSNetworkExtensions;
    _Bool _allowsAdHocSigning;
    _Bool _usesParentAppsPlatformForDistributionProvisioning;
    _Bool _usesParentAppsPlatformForDistributionArchitectures;
    _Bool _alwaysUpgradeProfileSupportFromOptionalForDistribution;
    _Bool _supportsUploadingBitcode;
    _Bool _supportsBuildingThinnedResources;
    _Bool _devicesEligibleOnlyIfRunnableMatchesPlatform;
    _Bool _prefersModelSpecificSupportDirectories;
    _Bool _signForLocalExecutionUsingCertificate;
    _Bool _wantsIsMachOHeaderValuesUniqueCheck;
    _Bool _requiresSRPForNetworkDevelopment;
    _Bool _supportsOpenGLESFrameCapture;
    NSString *_platformIdentifier;
    NSArray *_provisioningProfileUTIs;
    NSString *_pushNotificationServiceEntitlement;
    NSNumber *_signingEditorSortOrder;
    NSString *_applicationIdentifierEntitlementKey;
    NSString *_correspondingDevicePlatformIdentifier;
    NSString *_correspondingSimulatorPlatformIdentifier;
    NSString *_correspondingUserspacePlatformIdentifier;
    NSString *_minimumOSForDeviceSupport;
    NSString *_additionalBuiltProductsDirName;
    NSString *_additionalBuiltProductsDirExpression;
    NSSet *_devicesEligibleForAdditionalPlatforms;
    NSString *_minimumOSForDownloadableSymbols;
    NSString *_minimumOSForDownloadingSymbolsByOSVersion;
    NSString *_minimumOSForDTXcodeBuildDistributionKey;
    NSString *_minimumOSForDeveloperMode;
    NSString *_minimumOSForASANWithoutDyldInsertLibrary;
    NSString *_minimumOSForTSanWithoutDyldInsertLibrary;
    NSString *_minimumOSForXPCServiceDebugging;
    NSString *_minimumOSForUnhostedXPCServiceDebugging;
    NSString *_minimumOSForTestManagerDaemon;
    NSString *_minimumOSForRecordedFrames;
    NSString *_minimumOSForMainThreadChecker;
    NSString *_minimumOSForAntipatternChecker;
    NSString *_minimumOSForBackgroundFetchEvents;
    unsigned long long _backgroundFetchSupportStyle;
    NSNumber *_machOMinOSLoadCommand;
    NSString *_minimumOSForNetworkedDevelopment;
    NSString *_minimumOSForDebugOverrides;
    NSString *_minimumOSForLaunchActivateSuspended;
    NSString *_minimumOSForCoreDevice;
    NSString *_minimumOSForSensorReplay;
    NSString *_minimumOSForDaemonDebugging;
    NSString *_minimumOSForDebugDylibsInTheOS;
    NSString *_minimumOSForSimulateVehicularCrash;
    NSString *_minimumOSForDTServiceHubLogging;
    NSString *_minimumOSForViewDebuggingDylibsInTheOS;
    NSString *_minimumOSForOnlyCoreDeviceDDI;
    NSSet *_destinationSpecifierAliases;
    NSDictionary *_sdkVariantDisplayNames;
    NSDictionary *_sdkVariantSupportedSettings;
    NSDictionary *_destinationSpecifierVariantAlias;
    NSDictionary *_architectureDisplayNamesByCanonicalName;
}

+ (id)extendedPlatformInfoForPlatformIdentifier:(id)arg1 error:(id *)arg2;
+ (id)extendedPlatformInfoForPlatformIdentifier:(id)arg1;
+ (_Bool)checkMachOHeaderValuesUnique:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly) NSDictionary *architectureDisplayNamesByCanonicalName; // @synthesize architectureDisplayNamesByCanonicalName=_architectureDisplayNamesByCanonicalName;
@property(readonly) NSDictionary *destinationSpecifierVariantAlias; // @synthesize destinationSpecifierVariantAlias=_destinationSpecifierVariantAlias;
@property(readonly) NSDictionary *sdkVariantSupportedSettings; // @synthesize sdkVariantSupportedSettings=_sdkVariantSupportedSettings;
@property(readonly) NSDictionary *sdkVariantDisplayNames; // @synthesize sdkVariantDisplayNames=_sdkVariantDisplayNames;
@property(readonly) _Bool supportsOpenGLESFrameCapture; // @synthesize supportsOpenGLESFrameCapture=_supportsOpenGLESFrameCapture;
@property(readonly) _Bool requiresSRPForNetworkDevelopment; // @synthesize requiresSRPForNetworkDevelopment=_requiresSRPForNetworkDevelopment;
@property(readonly) NSSet *destinationSpecifierAliases; // @synthesize destinationSpecifierAliases=_destinationSpecifierAliases;
@property(readonly) NSString *minimumOSForOnlyCoreDeviceDDI; // @synthesize minimumOSForOnlyCoreDeviceDDI=_minimumOSForOnlyCoreDeviceDDI;
@property(readonly) NSString *minimumOSForViewDebuggingDylibsInTheOS; // @synthesize minimumOSForViewDebuggingDylibsInTheOS=_minimumOSForViewDebuggingDylibsInTheOS;
@property(readonly) NSString *minimumOSForDTServiceHubLogging; // @synthesize minimumOSForDTServiceHubLogging=_minimumOSForDTServiceHubLogging;
@property(readonly) NSString *minimumOSForSimulateVehicularCrash; // @synthesize minimumOSForSimulateVehicularCrash=_minimumOSForSimulateVehicularCrash;
@property(readonly) NSString *minimumOSForDebugDylibsInTheOS; // @synthesize minimumOSForDebugDylibsInTheOS=_minimumOSForDebugDylibsInTheOS;
@property(readonly) NSString *minimumOSForDaemonDebugging; // @synthesize minimumOSForDaemonDebugging=_minimumOSForDaemonDebugging;
@property(readonly) NSString *minimumOSForSensorReplay; // @synthesize minimumOSForSensorReplay=_minimumOSForSensorReplay;
@property(readonly) NSString *minimumOSForCoreDevice; // @synthesize minimumOSForCoreDevice=_minimumOSForCoreDevice;
@property(readonly) NSString *minimumOSForLaunchActivateSuspended; // @synthesize minimumOSForLaunchActivateSuspended=_minimumOSForLaunchActivateSuspended;
@property(readonly) NSString *minimumOSForDebugOverrides; // @synthesize minimumOSForDebugOverrides=_minimumOSForDebugOverrides;
@property(readonly) NSString *minimumOSForNetworkedDevelopment; // @synthesize minimumOSForNetworkedDevelopment=_minimumOSForNetworkedDevelopment;
@property(readonly) _Bool wantsIsMachOHeaderValuesUniqueCheck; // @synthesize wantsIsMachOHeaderValuesUniqueCheck=_wantsIsMachOHeaderValuesUniqueCheck;
@property(readonly) NSNumber *machOMinOSLoadCommand; // @synthesize machOMinOSLoadCommand=_machOMinOSLoadCommand;
@property(readonly) unsigned long long backgroundFetchSupportStyle; // @synthesize backgroundFetchSupportStyle=_backgroundFetchSupportStyle;
@property(readonly) NSString *minimumOSForBackgroundFetchEvents; // @synthesize minimumOSForBackgroundFetchEvents=_minimumOSForBackgroundFetchEvents;
@property(readonly) NSString *minimumOSForAntipatternChecker; // @synthesize minimumOSForAntipatternChecker=_minimumOSForAntipatternChecker;
@property(readonly) NSString *minimumOSForMainThreadChecker; // @synthesize minimumOSForMainThreadChecker=_minimumOSForMainThreadChecker;
@property(readonly) NSString *minimumOSForRecordedFrames; // @synthesize minimumOSForRecordedFrames=_minimumOSForRecordedFrames;
@property(readonly) NSString *minimumOSForTestManagerDaemon; // @synthesize minimumOSForTestManagerDaemon=_minimumOSForTestManagerDaemon;
@property(readonly) NSString *minimumOSForUnhostedXPCServiceDebugging; // @synthesize minimumOSForUnhostedXPCServiceDebugging=_minimumOSForUnhostedXPCServiceDebugging;
@property(readonly) NSString *minimumOSForXPCServiceDebugging; // @synthesize minimumOSForXPCServiceDebugging=_minimumOSForXPCServiceDebugging;
@property(readonly) NSString *minimumOSForTSanWithoutDyldInsertLibrary; // @synthesize minimumOSForTSanWithoutDyldInsertLibrary=_minimumOSForTSanWithoutDyldInsertLibrary;
@property(readonly) NSString *minimumOSForASANWithoutDyldInsertLibrary; // @synthesize minimumOSForASANWithoutDyldInsertLibrary=_minimumOSForASANWithoutDyldInsertLibrary;
@property(readonly) NSString *minimumOSForDeveloperMode; // @synthesize minimumOSForDeveloperMode=_minimumOSForDeveloperMode;
@property(readonly) _Bool signForLocalExecutionUsingCertificate; // @synthesize signForLocalExecutionUsingCertificate=_signForLocalExecutionUsingCertificate;
@property(readonly) NSString *minimumOSForDTXcodeBuildDistributionKey; // @synthesize minimumOSForDTXcodeBuildDistributionKey=_minimumOSForDTXcodeBuildDistributionKey;
@property(readonly) NSString *minimumOSForDownloadingSymbolsByOSVersion; // @synthesize minimumOSForDownloadingSymbolsByOSVersion=_minimumOSForDownloadingSymbolsByOSVersion;
@property(readonly) NSString *minimumOSForDownloadableSymbols; // @synthesize minimumOSForDownloadableSymbols=_minimumOSForDownloadableSymbols;
@property(readonly) _Bool prefersModelSpecificSupportDirectories; // @synthesize prefersModelSpecificSupportDirectories=_prefersModelSpecificSupportDirectories;
@property(readonly) NSSet *devicesEligibleForAdditionalPlatforms; // @synthesize devicesEligibleForAdditionalPlatforms=_devicesEligibleForAdditionalPlatforms;
@property(readonly) _Bool devicesEligibleOnlyIfRunnableMatchesPlatform; // @synthesize devicesEligibleOnlyIfRunnableMatchesPlatform=_devicesEligibleOnlyIfRunnableMatchesPlatform;
@property(readonly) NSString *additionalBuiltProductsDirExpression; // @synthesize additionalBuiltProductsDirExpression=_additionalBuiltProductsDirExpression;
@property(readonly) NSString *additionalBuiltProductsDirName; // @synthesize additionalBuiltProductsDirName=_additionalBuiltProductsDirName;
@property(readonly) NSString *minimumOSForDeviceSupport; // @synthesize minimumOSForDeviceSupport=_minimumOSForDeviceSupport;
@property(readonly) NSString *correspondingUserspacePlatformIdentifier; // @synthesize correspondingUserspacePlatformIdentifier=_correspondingUserspacePlatformIdentifier;
@property(readonly) NSString *correspondingSimulatorPlatformIdentifier; // @synthesize correspondingSimulatorPlatformIdentifier=_correspondingSimulatorPlatformIdentifier;
@property(readonly) NSString *correspondingDevicePlatformIdentifier; // @synthesize correspondingDevicePlatformIdentifier=_correspondingDevicePlatformIdentifier;
@property(readonly) _Bool supportsBuildingThinnedResources; // @synthesize supportsBuildingThinnedResources=_supportsBuildingThinnedResources;
@property(readonly) _Bool supportsUploadingBitcode; // @synthesize supportsUploadingBitcode=_supportsUploadingBitcode;
@property(readonly) _Bool alwaysUpgradeProfileSupportFromOptionalForDistribution; // @synthesize alwaysUpgradeProfileSupportFromOptionalForDistribution=_alwaysUpgradeProfileSupportFromOptionalForDistribution;
@property(readonly) NSString *applicationIdentifierEntitlementKey; // @synthesize applicationIdentifierEntitlementKey=_applicationIdentifierEntitlementKey;
@property(readonly) _Bool usesParentAppsPlatformForDistributionArchitectures; // @synthesize usesParentAppsPlatformForDistributionArchitectures=_usesParentAppsPlatformForDistributionArchitectures;
@property(readonly) _Bool usesParentAppsPlatformForDistributionProvisioning; // @synthesize usesParentAppsPlatformForDistributionProvisioning=_usesParentAppsPlatformForDistributionProvisioning;
@property(readonly) _Bool allowsAdHocSigning; // @synthesize allowsAdHocSigning=_allowsAdHocSigning;
@property(readonly) NSNumber *signingEditorSortOrder; // @synthesize signingEditorSortOrder=_signingEditorSortOrder;
@property(readonly) _Bool supportsContentFilterProxyAndDNSNetworkExtensions; // @synthesize supportsContentFilterProxyAndDNSNetworkExtensions=_supportsContentFilterProxyAndDNSNetworkExtensions;
@property(readonly) _Bool supportsUnrestrictedEntitlements; // @synthesize supportsUnrestrictedEntitlements=_supportsUnrestrictedEntitlements;
@property(readonly) _Bool requiresIbtoolPlatformDefinition; // @synthesize requiresIbtoolPlatformDefinition=_requiresIbtoolPlatformDefinition;
@property(readonly) NSString *pushNotificationServiceEntitlement; // @synthesize pushNotificationServiceEntitlement=_pushNotificationServiceEntitlement;
@property(readonly) _Bool requiresPortalAppGroups; // @synthesize requiresPortalAppGroups=_requiresPortalAppGroups;
@property(readonly) NSArray *provisioningProfileUTIs; // @synthesize provisioningProfileUTIs=_provisioningProfileUTIs;
@property(readonly) _Bool requiresProxiedDevicesToBeRegistered; // @synthesize requiresProxiedDevicesToBeRegistered=_requiresProxiedDevicesToBeRegistered;
@property(readonly) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
- (id)_defaultSDKVariant;
@property(readonly) unsigned char macCatalystPlatformMachOHeaderValue;
@property(readonly) unsigned char platformMachOHeaderValue;
@property(readonly) DVTPlatform *primaryPlatform;
@property(readonly) _Bool isSimulatorPlatform;
@property(readonly) DVTPlatform *correspondingUserspacePlatform;
@property(readonly) DVTPlatform *correspondingSimulatorPlatform;
@property(readonly) DVTPlatform *correspondingDevicePlatform;
- (id)initWithExtension:(id)arg1;

@end

