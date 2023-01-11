//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FTServices/CoreTelephonyClientCarrierBundleDelegate-Protocol.h>
#import <FTServices/CoreTelephonyClientPNRDelegate-Protocol.h>
#import <FTServices/CoreTelephonyClientSubscriberDelegate-Protocol.h>

@class CoreTelephonyClient, FTSelectedPNRSubscription, NSDictionary, NSString;

@interface FTDeviceSupport : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientPNRDelegate>
{
    NSString *_number;
    _Bool _blockPost;
    _Bool _supportsFrontCamera;
    _Bool _supportsBackCamera;
    _Bool _supportsiMessage;
    _Bool _supportsSMS;
    _Bool _supportsMMS;
    _Bool _mmsConfigured;
    long long _supportsApplePayState;
    _Bool _supportsHandoff;
    _Bool _supportsTethering;
    _Bool _supportsFT;
    _Bool _supportsFTA;
    _Bool _supportsFTMW;
    _Bool _supportsWiFi;
    _Bool _supportsWLAN;
    _Bool _supportsNonWiFiFaceTime;
    _Bool _supportsCellularData;
    _Bool _simBecameNotReady;
    long long _simInserted;
    _Bool _wantsForcedCellularQueries;
    long long _isPNRSupportedCachedValue;
    _Bool _faceTimeBlocked;
    _Bool _iMessageBlocked;
    _Bool _accountModificationRestricted;
    _Bool _isGreenTea;
    long long _performanceClass;
    CoreTelephonyClient *_coreTelephonyClient;
    FTSelectedPNRSubscription *_selectedPNRSubscription;
    _Bool _commCenterDead;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool commCenterDead; // @synthesize commCenterDead=_commCenterDead;
@property(readonly, nonatomic) _Bool wantsForcedCellularQueries; // @synthesize wantsForcedCellularQueries=_wantsForcedCellularQueries;
@property(readonly, nonatomic) _Bool mmsConfigured; // @synthesize mmsConfigured=_mmsConfigured;
@property(readonly, nonatomic) _Bool supportsMMS; // @synthesize supportsMMS=_supportsMMS;
@property(readonly, nonatomic) _Bool supportsSMS; // @synthesize supportsSMS=_supportsSMS;
@property(readonly, nonatomic) _Bool supportsCellularData; // @synthesize supportsCellularData=_supportsCellularData;
@property(readonly, nonatomic) _Bool supportsWiFi; // @synthesize supportsWiFi=_supportsWiFi;
@property(readonly, nonatomic) _Bool supportsWLAN; // @synthesize supportsWLAN=_supportsWLAN;
@property(readonly, nonatomic) _Bool supportsBackFacingCamera; // @synthesize supportsBackFacingCamera=_supportsBackCamera;
@property(readonly, nonatomic) _Bool supportsFrontFacingCamera; // @synthesize supportsFrontFacingCamera=_supportsFrontCamera;
@property(readonly, nonatomic) _Bool supportsTethering; // @synthesize supportsTethering=_supportsTethering;
@property(readonly, nonatomic) _Bool supportsHandoff; // @synthesize supportsHandoff=_supportsHandoff;
@property(readonly, nonatomic) _Bool isGreenTea; // @synthesize isGreenTea=_isGreenTea;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool supportsFunCam;
- (_Bool)_enoughPowerToSupportEffects;
- (long long)memorySize;
@property(readonly, nonatomic) _Bool lowRAMDevice;
@property(readonly, nonatomic) _Bool supportsApplePay;
@property(readonly, nonatomic) _Bool isInMultiUserMode;
@property(readonly, nonatomic) _Bool nonWifiCallingAvailable;
- (_Bool)nonBluetoothAvailableForBundleId:(id)arg1;
- (_Bool)wifiAllowedForBundleId:(id)arg1;
- (_Bool)nonWifiAvailableForBundleId:(id)arg1;
@property(readonly, nonatomic) _Bool nonWifiFaceTimeAvailable;
@property(readonly, nonatomic) long long deviceType;
@property(readonly, nonatomic) long long performanceClass;
- (void)_registerForLockdownNotifications;
- (void)_lockdownStateChanged:(id)arg1;
@property(readonly, nonatomic) NSString *deviceInformationString;
@property(readonly, nonatomic) NSString *productOSVersion;
@property(readonly, nonatomic) NSString *productBuildVersion;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *userAgentString;
@property(readonly, nonatomic) NSString *telephoneNumber;
@property(readonly, nonatomic) _Bool isTelephonyDevice;
@property(readonly, nonatomic) _Bool supportsAppleIDIdentification;
- (_Bool)_legacy_supportsSMSIdentification;
@property(readonly, nonatomic) _Bool supportsSMSIdentification;
- (void)_updateCTNetworkDictionary:(id)arg1 key:(id)arg2 withTelephonyNetworkValue:(id)arg3 telephonyError:(id)arg4;
@property(readonly, nonatomic) NSDictionary *CTNetworkInformation;
- (void)_handlePotentialPhoneNumberRegistrationStateChanged;
- (void)_invalidateValuesCachedForSelectedPhoneNumberRegistration;
- (void)noteSelectedPhoneNumberRegistrationSubscriptionDidChange;
- (void)_handleCarrierSettingsChanged;
- (void)_handleSIMStatusChangedToStatus:(id)arg1;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (void)operatorBundleChange:(id)arg1;
- (void)carrierBundleChange:(id)arg1;
- (void)phoneNumberChanged:(id)arg1;
- (void)pnrReadyStateNotification:(id)arg1 regState:(_Bool)arg2;
- (id)registrationState;
- (_Bool)isInDualPhoneIdentityMode;
@property(readonly, nonatomic) NSString *enclosureColor;
@property(readonly, nonatomic) NSString *deviceColor;
@property(readonly, nonatomic) NSString *deviceName;
@property(readonly, nonatomic) NSString *deviceRegionInfo;
@property(readonly, nonatomic) _Bool wantsBreakBeforeMake;
- (void)_initializeSIMInsertedCachedValue;
@property(readonly, nonatomic) _Bool SIMInserted;
@property(readonly, nonatomic) _Bool supportsSimultaneousVoiceAndDataRightNow;
@property(readonly, nonatomic) _Bool isC2KEquipment;
@property(readonly, nonatomic) NSDictionary *telephonyCapabilities;
@property(readonly, nonatomic) NSString *deviceTypeIDPrefix;
@property(readonly, nonatomic) NSString *deviceIDPrefix;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) _Bool accountModificationRestricted;
@property(readonly, nonatomic) _Bool registrationSupported;
@property(readonly, nonatomic) _Bool conferencingAllowed;
@property(readonly, nonatomic) _Bool conferencingEnabled;
@property(readonly, nonatomic) _Bool conferencingBlocked;
@property(readonly, nonatomic) _Bool supportsNonWiFiCalling;
@property(readonly, nonatomic) _Bool supportsNonWiFiFaceTime; // @synthesize supportsNonWiFiFaceTime=_supportsNonWiFiFaceTime;
@property(readonly, nonatomic) _Bool identityServicesSupported;
@property(readonly, nonatomic) _Bool faceTimeSupported;
@property(readonly, nonatomic) _Bool faceTimeBlocked;
@property(readonly, nonatomic) _Bool faceTimeAvailable;
@property(readonly, nonatomic) _Bool iMessageSupported;
@property(readonly, nonatomic) _Bool iMessageBlocked;
@property(readonly, nonatomic) _Bool iMessageAvailable;
@property(readonly, nonatomic) _Bool callingSupported;
@property(readonly, nonatomic) _Bool callingBlocked;
@property(readonly, nonatomic) _Bool multiwaySupported;
@property(readonly, nonatomic) _Bool multiwayBlocked;
@property(readonly, nonatomic) _Bool multiwayAvailable;
@property(readonly, nonatomic) _Bool callingAvailable;
@property(readonly, nonatomic) _Bool madridSupported;
@property(readonly, nonatomic) _Bool madridBlocked;
@property(readonly, nonatomic) _Bool madridAvailable;
- (void)_registerForInternalCoreTelephonyNotifications;
- (void)_registerForCarrierNotifications;
- (void)_unregisterForCommCenterReadyNotifications;
- (void)_registerForCommCenterReadyNotifications;
- (void)_updateCapabilities;
- (_Bool)_wantsForcedCellularQueries;
- (id)_forceWWANQueriesCarrierBundleValue;
- (void)_registerForCapabilityNotifications;
- (void)_unregisterForServiceStatusNotifications;
- (void)_registerForServiceStatusNotifications;
- (id)_serviceStatus;
- (void)_updateManagedConfigurationSettings;
- (void)_unregisterForManagedConfigurationNotifications;
- (void)_registerForManagedConfigurationNotifications;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

