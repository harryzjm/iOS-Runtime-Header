//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, NSTimeZone;

@interface _HKBehavior : NSObject
{
    NSNumber *_overriddenSupportsCloudSync;
    NSNumber *_overriddenSupportsSwimmingWorkoutSessions;
    NSNumber *_overriddenEnableManateeForHSA2Accounts;
    NSNumber *_overriddenSupportsWorkoutSmoothing;
    struct _HKLazyLoader<bool> _futureMigrationsEnabled;
    _Bool _isDeviceSupported;
    _Bool _isAppleInternalInstall;
    _Bool _isAppleWatch;
    _Bool _isCompanionCapable;
    _Bool _hasTelephonyCapability;
    _Bool _isRunningStoreDemoMode;
    _Bool _collectsCalorimetry;
    _Bool _collectsData;
    _Bool _performsWorkoutCondensation;
    _Bool _supportsAWDMetricSubmission;
    _Bool _supportsActivitySharing;
    _Bool _supportsAppSubscriptions;
    _Bool _supportsComputedUserCharacteristicCaching;
    _Bool _supportsFeatureAvailabilityAssets;
    _Bool _supportsHeartRateDataCollection;
    _Bool _supportsNanoSync;
    _Bool _supportsSampleExpiration;
    _Bool _supportsWorkouts;
    _Bool _supportsOntology;
    _Bool _showSensitiveLogItems;
    _Bool _unitTest_useEmbeddedOntology;
    _Bool _unitTest_useEmbeddedOntologyAsset;
    _Bool _ontologyAvailabilityRequiresAccounts;
    _Bool _ignoreOntologyAssetAvailabilityChanges;
    _Bool _ignoreOntologyVersionCheckDuringReferenceOntologyImport;
    _Bool _hasOntologyFeaturesEnabled;
    _Bool _isTestingDevice;
    _Bool _supportsWorkoutRouteSmoothing;
    _Bool _tinkerModeEnabled;
    _Bool _healthAppHidden;
    _Bool _runningInStoreDemoModeF201;
    _Bool _journalDatabaseFeatureEnabled;
    NSString *_unitTest_deviceRegionCode;
    NSString *_currentDeviceClass;
}

+ (_Bool)_condensesHeartRateSamples;
+ (_Bool)_futureMigrationsEnabled;
+ (_Bool)_showSensitiveLogItems;
+ (id)_simulatorDefaultName;
+ (id)_simulatorSettings;
+ (_Bool)_shouldShowBuddy;
+ (void)_setHasCompletedBuddyWithVersion:(long long)arg1;
+ (_Bool)_hasCompletedBuddyWithVersion:(long long)arg1;
+ (_Bool)_isForceBuddyEnabled;
+ (_Bool)_runningInStoreDemoModeF201;
+ (long long)_runningInStoreDemoModeFProgramNumber;
+ (_Bool)_isRunningStoreDemoMode;
+ (_Bool)_hasTelephonyCapability;
+ (_Bool)_isAppleInternalInstall;
+ (_Bool)_isDeviceSupported;
+ (_Bool)_isProductTypeSeries3OrOlder:(id)arg1;
+ (_Bool)_healthAppHidden;
+ (_Bool)_tinkerModeEnabled;
+ (CDStruct_f6aba300)currentOSVersionStruct;
+ (id)currentOSVersion;
+ (id)currentOSBuild;
+ (id)currentDeviceProductType;
+ (id)currentDeviceReleaseType;
+ (id)currentDeviceClass;
+ (id)currentDeviceRegionCode;
+ (id)currentDeviceManufacturer;
+ (id)currentDeviceName;
+ (id)currentDeviceDisplayName;
+ (_Bool)shouldShowBuddy;
+ (void)setHasCompletedBuddyWithVersion:(long long)arg1;
+ (_Bool)hasCompletedBuddyWithVersion:(long long)arg1;
+ (void)setForceBuddy:(_Bool)arg1;
+ (_Bool)isTestingDevice;
+ (_Bool)runningInStoreDemoModeF201;
+ (_Bool)isiPod;
+ (_Bool)isRunningStoreDemoMode;
+ (_Bool)isDeviceSupported;
+ (_Bool)isAppleInternalInstall;
+ (_Bool)hasTelephonyCapability;
+ (_Bool)isManateeEnabledByDefault;
+ (_Bool)allPairedWatchesSupportBradycardiaDetection;
+ (_Bool)activePairedWatchSupportsBradycardiaDetection;
+ (_Bool)allPairedWatchesSupportHeartRateMotionContexts;
+ (_Bool)activePairedWatchSupportsHeartRateMotionContexts;
+ (_Bool)activePairedWatchHasSmartFitnessCoaching;
+ (_Bool)anyPairedWatchHasFlightsClimbedCapability;
+ (_Bool)hasPairedWatch;
+ (int)nanoSyncProtocolVersionForCompanionSystemBuildVersion:(id)arg1;
+ (int)nanoSyncProtocolVersionForWatchSystemBuildVersion:(id)arg1;
+ (void)resetSharedBehavior;
+ (void)setSharedBehavior:(id)arg1;
+ (id)sharedBehavior;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool journalDatabaseFeatureEnabled; // @synthesize journalDatabaseFeatureEnabled=_journalDatabaseFeatureEnabled;
@property(nonatomic) _Bool runningInStoreDemoModeF201; // @synthesize runningInStoreDemoModeF201=_runningInStoreDemoModeF201;
@property(nonatomic) _Bool healthAppHidden; // @synthesize healthAppHidden=_healthAppHidden;
@property(nonatomic) _Bool tinkerModeEnabled; // @synthesize tinkerModeEnabled=_tinkerModeEnabled;
@property(nonatomic) _Bool supportsWorkoutRouteSmoothing; // @synthesize supportsWorkoutRouteSmoothing=_supportsWorkoutRouteSmoothing;
@property(copy, nonatomic) NSString *currentDeviceClass; // @synthesize currentDeviceClass=_currentDeviceClass;
@property(copy, nonatomic) NSString *unitTest_deviceRegionCode; // @synthesize unitTest_deviceRegionCode=_unitTest_deviceRegionCode;
@property(nonatomic) _Bool isTestingDevice; // @synthesize isTestingDevice=_isTestingDevice;
@property(nonatomic) _Bool hasOntologyFeaturesEnabled; // @synthesize hasOntologyFeaturesEnabled=_hasOntologyFeaturesEnabled;
@property(nonatomic) _Bool ignoreOntologyVersionCheckDuringReferenceOntologyImport; // @synthesize ignoreOntologyVersionCheckDuringReferenceOntologyImport=_ignoreOntologyVersionCheckDuringReferenceOntologyImport;
@property(nonatomic) _Bool ignoreOntologyAssetAvailabilityChanges; // @synthesize ignoreOntologyAssetAvailabilityChanges=_ignoreOntologyAssetAvailabilityChanges;
@property(nonatomic) _Bool ontologyAvailabilityRequiresAccounts; // @synthesize ontologyAvailabilityRequiresAccounts=_ontologyAvailabilityRequiresAccounts;
@property(nonatomic) _Bool unitTest_useEmbeddedOntologyAsset; // @synthesize unitTest_useEmbeddedOntologyAsset=_unitTest_useEmbeddedOntologyAsset;
@property(nonatomic) _Bool unitTest_useEmbeddedOntology; // @synthesize unitTest_useEmbeddedOntology=_unitTest_useEmbeddedOntology;
@property(nonatomic) _Bool showSensitiveLogItems; // @synthesize showSensitiveLogItems=_showSensitiveLogItems;
@property(readonly, nonatomic) _Bool supportsOntology; // @synthesize supportsOntology=_supportsOntology;
@property(nonatomic) _Bool supportsWorkouts; // @synthesize supportsWorkouts=_supportsWorkouts;
@property(nonatomic) _Bool supportsSampleExpiration; // @synthesize supportsSampleExpiration=_supportsSampleExpiration;
@property(nonatomic) _Bool supportsNanoSync; // @synthesize supportsNanoSync=_supportsNanoSync;
@property(nonatomic) _Bool supportsHeartRateDataCollection; // @synthesize supportsHeartRateDataCollection=_supportsHeartRateDataCollection;
@property(readonly, nonatomic) _Bool supportsFeatureAvailabilityAssets; // @synthesize supportsFeatureAvailabilityAssets=_supportsFeatureAvailabilityAssets;
@property(nonatomic) _Bool supportsComputedUserCharacteristicCaching; // @synthesize supportsComputedUserCharacteristicCaching=_supportsComputedUserCharacteristicCaching;
@property(nonatomic) _Bool supportsAppSubscriptions; // @synthesize supportsAppSubscriptions=_supportsAppSubscriptions;
@property(nonatomic) _Bool supportsActivitySharing; // @synthesize supportsActivitySharing=_supportsActivitySharing;
@property(nonatomic) _Bool supportsAWDMetricSubmission; // @synthesize supportsAWDMetricSubmission=_supportsAWDMetricSubmission;
@property(nonatomic) _Bool performsWorkoutCondensation; // @synthesize performsWorkoutCondensation=_performsWorkoutCondensation;
@property(nonatomic) _Bool collectsData; // @synthesize collectsData=_collectsData;
@property(nonatomic) _Bool collectsCalorimetry; // @synthesize collectsCalorimetry=_collectsCalorimetry;
@property(readonly, nonatomic) _Bool isRunningStoreDemoMode; // @synthesize isRunningStoreDemoMode=_isRunningStoreDemoMode;
@property(nonatomic) _Bool hasTelephonyCapability; // @synthesize hasTelephonyCapability=_hasTelephonyCapability;
@property(nonatomic) _Bool isCompanionCapable; // @synthesize isCompanionCapable=_isCompanionCapable;
@property(nonatomic) _Bool isAppleWatch; // @synthesize isAppleWatch=_isAppleWatch;
@property(nonatomic) _Bool isAppleInternalInstall; // @synthesize isAppleInternalInstall=_isAppleInternalInstall;
@property(nonatomic) _Bool isDeviceSupported; // @synthesize isDeviceSupported=_isDeviceSupported;
@property(nonatomic) _Bool supportsCloudSync;
@property(nonatomic) _Bool futureMigrationsEnabled;
- (void)setManateeEnabledForHSA2AccountsOverride:(_Bool)arg1;
@property(readonly, nonatomic, getter=isManateeEnabledForHSA2Accounts) _Bool manateeEnabledForHSA2Accounts;
@property(readonly, nonatomic) _Bool supportsEED;
@property(nonatomic) _Bool supportsSwimmingWorkoutSessions;
@property(readonly, nonatomic) unsigned long long currentDiskSpaceAvailable;
@property(readonly, nonatomic) unsigned long long totalDiskCapacity;
@property(readonly, nonatomic) NSDictionary *currentDiskUsage;
@property(readonly, copy, nonatomic) NSTimeZone *localTimeZone;
@property(readonly, nonatomic) CDStruct_f6aba300 currentOSVersionStruct;
@property(readonly, copy, nonatomic) NSString *currentOSVersion;
@property(readonly, copy, nonatomic) NSString *currentOSName;
@property(readonly, copy, nonatomic) NSString *currentOSBuild;
@property(readonly, nonatomic) _Bool isCurrentDeviceSeries3OrOlder;
@property(readonly, nonatomic) _Bool isCurrentDeviceN2XA;
- (_Bool)_hasProductTypePrefix:(id)arg1;
@property(readonly, copy, nonatomic) NSString *currentDeviceProductType;
- (id)currentDeviceReleaseType;
@property(readonly, copy, nonatomic) NSString *currentInternalDeviceModel;
@property(readonly, copy, nonatomic) NSString *currentDeviceManufacturer;
@property(readonly, copy, nonatomic) NSString *currentDeviceRegionCode;
@property(readonly, copy, nonatomic) NSString *currentDeviceName;
@property(readonly, copy, nonatomic) NSString *currentDeviceDisplayName;
- (void)setSupportsWorkoutRouteSmoothingOverride:(_Bool)arg1;
- (id)init;

@end
