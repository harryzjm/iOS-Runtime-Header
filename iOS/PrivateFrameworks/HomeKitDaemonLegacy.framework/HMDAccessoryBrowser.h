//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HAPAccessoryServerBrowser, HAPAccessoryServerBrowserBTLE, HAPAccessoryServerBrowserIP, HMDAccessoryServerBrowserDemo, HMDAuthServer, HMDHAP2Storage, HMDHomeManager, HMDMediaBrowser, HMDUnassociatedWACAccessory, HMDWACBrowser, HMFMessageDispatcher, HMFTimer, HMMTRAccessoryServerBrowser, NSArray, NSData, NSHashTable, NSMutableArray, NSMutableSet, NSObject, NSString, NSUUID;
@protocol HMDAccessoryBrowserManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface HMDAccessoryBrowser : HMFObject
{
    struct os_unfair_lock_s _lock;
    NSMutableSet *_unpairedHAPAccessories;
    NSMutableSet *_unassociatedMediaAccessories;
    NSMutableSet *_deviceSetupMediaAccessories;
    NSMutableSet *_unassociatedWACAccessories;
    NSMutableSet *_browsingConnections;
    NSHashTable *_activeAssertions;
    NSMutableSet *_discoveredAccessoryServerIdentifiers;
    _Bool _btlePowerState;
    _Bool _internalDiscoveryRequest;
    _Bool _active;
    HMMTRAccessoryServerBrowser *_chipAccessoryServerBrowser;
    HMDUnassociatedWACAccessory *_accessoryPerformingWAC;
    id <HMDAccessoryBrowserManagerDelegate> _managerDelegate;
    unsigned long long _unitTestBTLEReachabilityInterval;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_uuid;
    HMFMessageDispatcher *_messageDispatcher;
    unsigned long long _generationCounter;
    HMDHomeManager *_homeManager;
    NSMutableArray *_accessoryServerBrowsers;
    NSHashTable *_discoveringAccessoryServerBrowsers;
    HAPAccessoryServerBrowserIP *_ipAccessoryServerBrowser;
    HAPAccessoryServerBrowserBTLE *_btleAccessoryServerBrowser;
    HAPAccessoryServerBrowser *_hap2AccessoryServerBrowser;
    HMDHAP2Storage *_hap2Storage;
    HMDMediaBrowser *_mediaBrowser;
    HMDWACBrowser *_wacBrowser;
    HMDAuthServer *_authServer;
    HMDAccessoryServerBrowserDemo *_demoAccessoryServerBrowser;
    HMFTimer *_stopReprovisioningTimer;
    HMFTimer *_stopBrowsingAccessoriesNeedingReprovisioningTimer;
    NSString *_identifierOfAccessoryBeingReprovisioned;
    NSData *_wiFiPSKForAccessoryReprovisioning;
    NSString *_countrycodeForAccessoryReprovisioning;
    NSMutableArray *_pairedAccessories;
    NSObject<OS_dispatch_source> *_reachabilityTimerForBTLE;
    NSMutableArray *_currentlyPairingAccessories;
    NSMutableArray *_currentlyPairingProgressHandlers;
    NSHashTable *_tombstonedHAPAccessoryServers;
    NSHashTable *_discoveringBLEAccessoryServerIdentifiers;
    NSArray *_browseableLinkTypes;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *browseableLinkTypes; // @synthesize browseableLinkTypes=_browseableLinkTypes;
@property(retain, nonatomic) NSMutableSet *discoveredAccessoryServerIdentifiers; // @synthesize discoveredAccessoryServerIdentifiers=_discoveredAccessoryServerIdentifiers;
@property(readonly, nonatomic) NSHashTable *discoveringBLEAccessoryServerIdentifiers; // @synthesize discoveringBLEAccessoryServerIdentifiers=_discoveringBLEAccessoryServerIdentifiers;
@property(readonly, nonatomic) NSHashTable *tombstonedHAPAccessoryServers; // @synthesize tombstonedHAPAccessoryServers=_tombstonedHAPAccessoryServers;
@property(retain, nonatomic) NSMutableArray *currentlyPairingProgressHandlers; // @synthesize currentlyPairingProgressHandlers=_currentlyPairingProgressHandlers;
@property(retain, nonatomic) NSMutableArray *currentlyPairingAccessories; // @synthesize currentlyPairingAccessories=_currentlyPairingAccessories;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *reachabilityTimerForBTLE; // @synthesize reachabilityTimerForBTLE=_reachabilityTimerForBTLE;
@property(retain, nonatomic) NSMutableArray *pairedAccessories; // @synthesize pairedAccessories=_pairedAccessories;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSString *countrycodeForAccessoryReprovisioning; // @synthesize countrycodeForAccessoryReprovisioning=_countrycodeForAccessoryReprovisioning;
@property(retain, nonatomic) NSData *wiFiPSKForAccessoryReprovisioning; // @synthesize wiFiPSKForAccessoryReprovisioning=_wiFiPSKForAccessoryReprovisioning;
@property(retain, nonatomic) NSString *identifierOfAccessoryBeingReprovisioned; // @synthesize identifierOfAccessoryBeingReprovisioned=_identifierOfAccessoryBeingReprovisioned;
@property(readonly, nonatomic) HMFTimer *stopBrowsingAccessoriesNeedingReprovisioningTimer; // @synthesize stopBrowsingAccessoriesNeedingReprovisioningTimer=_stopBrowsingAccessoriesNeedingReprovisioningTimer;
@property(readonly, nonatomic) HMFTimer *stopReprovisioningTimer; // @synthesize stopReprovisioningTimer=_stopReprovisioningTimer;
@property(retain, nonatomic) HMDAccessoryServerBrowserDemo *demoAccessoryServerBrowser; // @synthesize demoAccessoryServerBrowser=_demoAccessoryServerBrowser;
@property(retain, nonatomic) HMDAuthServer *authServer; // @synthesize authServer=_authServer;
@property(retain, nonatomic) HMDWACBrowser *wacBrowser; // @synthesize wacBrowser=_wacBrowser;
@property(retain, nonatomic) HMDMediaBrowser *mediaBrowser; // @synthesize mediaBrowser=_mediaBrowser;
@property(retain, nonatomic) HMDHAP2Storage *hap2Storage; // @synthesize hap2Storage=_hap2Storage;
@property(retain, nonatomic) HAPAccessoryServerBrowser *hap2AccessoryServerBrowser; // @synthesize hap2AccessoryServerBrowser=_hap2AccessoryServerBrowser;
@property(retain, nonatomic) HAPAccessoryServerBrowserBTLE *btleAccessoryServerBrowser; // @synthesize btleAccessoryServerBrowser=_btleAccessoryServerBrowser;
@property(retain, nonatomic) HAPAccessoryServerBrowserIP *ipAccessoryServerBrowser; // @synthesize ipAccessoryServerBrowser=_ipAccessoryServerBrowser;
@property(retain, nonatomic) NSHashTable *discoveringAccessoryServerBrowsers; // @synthesize discoveringAccessoryServerBrowsers=_discoveringAccessoryServerBrowsers;
@property(retain, nonatomic) NSMutableArray *accessoryServerBrowsers; // @synthesize accessoryServerBrowsers=_accessoryServerBrowsers;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(nonatomic) unsigned long long generationCounter; // @synthesize generationCounter=_generationCounter;
@property(retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) unsigned long long unitTestBTLEReachabilityInterval; // @synthesize unitTestBTLEReachabilityInterval=_unitTestBTLEReachabilityInterval;
@property(nonatomic) __weak id <HMDAccessoryBrowserManagerDelegate> managerDelegate; // @synthesize managerDelegate=_managerDelegate;
@property(nonatomic) _Bool btlePowerState; // @synthesize btlePowerState=_btlePowerState;
@property(readonly) HMMTRAccessoryServerBrowser *chipAccessoryServerBrowser; // @synthesize chipAccessoryServerBrowser=_chipAccessoryServerBrowser;
- (id)dumpRegisteredPairedAccessories;
- (id)dumpUnassociatedAccessories;
- (void)vendorModel:(id *)arg1 vendorManufacturer:(id *)arg2 accessoryInfo:(id)arg3;
- (void)handlePPIDInfoResponse:(id)arg1 context:(id)arg2 error:(id)arg3;
- (void)handleActivationResponse:(id)arg1 context:(id)arg2;
- (void)didFinishActivation:(id)arg1 context:(id)arg2;
- (void)browser:(id)arg1 didUpdateEndpoints:(id)arg2;
- (void)browser:(id)arg1 didRemoveSessions:(id)arg2;
- (void)browser:(id)arg1 didRemoveAdvertisements:(id)arg2;
- (void)browser:(id)arg1 didAddAdvertisements:(id)arg2;
- (void)accessoryServer:(id)arg1 didUpdateConnectionState:(_Bool)arg2 sessionInfo:(id)arg3 linkLayerType:(long long)arg4 withError:(id)arg5;
- (void)accessoryServer:(id)arg1 didUpdateConnectionState:(_Bool)arg2 linkLayerType:(long long)arg3 withError:(id)arg4;
- (void)accessoryServer:(id)arg1 confirmUUID:(id)arg2 token:(id)arg3;
- (void)accessoryServer:(id)arg1 authenticateUUID:(id)arg2 token:(id)arg3;
- (void)accessoryServer:(id)arg1 validateCert:(id)arg2 model:(id)arg3;
- (void)accessoryServer:(id)arg1 validateUUID:(id)arg2 token:(id)arg3 model:(id)arg4;
- (void)accessoryServerNeedsOwnershipToken:(id)arg1;
- (void)accessoryServer:(id)arg1 didFinishAuth:(id)arg2;
- (void)accessoryServer:(id)arg1 didUpdateName:(id)arg2;
- (void)accessoryServer:(id)arg1 didUpdateCategory:(id)arg2;
- (void)_notifyDelegateOfAccessoryServer:(id)arg1 didUpdateCategory:(id)arg2;
- (void)accessoryServerDidUpdateStateNumber:(id)arg1;
- (void)accessoryServer:(id)arg1 didUpdateHasPairings:(_Bool)arg2;
- (void)_notifyDelegateOfAccessoryServer:(id)arg1 didUpdateHasPairings:(_Bool)arg2;
- (void)accessoryServer:(id)arg1 didUpdateWakeNumber:(id)arg2;
- (void)accessoryServer:(id)arg1 didDisconnectWithError:(id)arg2;
- (void)accessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2 stateNumber:(id)arg3 broadcast:(_Bool)arg4;
- (void)_notifyDelegateOfAccessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2 stateNumber:(id)arg3 broadcast:(_Bool)arg4;
- (void)continueAddingAccessoryToHomeAfterUserConfirmation:(id)arg1 withError:(id)arg2;
- (void)accessoryServer:(id)arg1 didDiscoverAccessories:(id)arg2 transaction:(id)arg3 error:(id)arg4;
- (void)updateProgressForMappedErrors:(id)arg1 accessoryServer:(id)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (void)updatePairingProgress:(long long)arg1 serverIdentifier:(id)arg2 preogressHandler:(CDUnknownBlockType)arg3;
- (void)updateAlreadyPairingProgressForAccessoryServerIdentifier:(id)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (void)updatePairingWithProgress:(long long)arg1 accessoryServer:(id)arg2;
- (void)accessoryServer:(id)arg1 updatePairingProgress:(long long)arg2;
- (void)_notifyDelegateOfAccessoryServer:(id)arg1 didDiscoverAccessories:(id)arg2 transaction:(id)arg3 error:(id)arg4;
- (void)accessoryServer:(id)arg1 didStopPairingWithError:(id)arg2;
- (void)_notifyDelegateOfAccessoryServer:(id)arg1 didStopPairingWithError:(id)arg2;
- (void)accessoryServer:(id)arg1 didReceiveBadPasswordThrottleAttemptsWithDelay:(long long)arg2;
- (void)accessoryServer:(id)arg1 promptUserForPasswordWithType:(unsigned long long)arg2;
- (void)accessoryServer:(id)arg1 requestUserPermission:(long long)arg2 accessoryInfo:(id)arg3 error:(id)arg4;
- (void)accessoryServer:(id)arg1 promtDialog:(id)arg2 forNotCertifiedAccessory:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_callProgressOrErrorOut:(id)arg1 pairingInfo:(id)arg2 accessoryInfo:(id)arg3 unpairedAccessory:(id)arg4 progress:(long long)arg5 certStatus:(unsigned long long)arg6;
- (void)_continueAfterPPIDValidation:(_Bool)arg1 server:(id)arg2;
- (id)_getHAPMetadataFromHMMetadata:(id)arg1;
- (void)accessoryServerBrowser:(id)arg1 getThreadNetworkCredentialsForAccessoryWithIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)accessoryServerBrowser:(id)arg1 didFinishPairingForAccessoryServer:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 getCommissioningCertificatesForNodeID:(id)arg2 fabricID:(id)arg3 publicKey:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)removeAccessoryCacheForIdentifier:(id)arg1;
- (void)fetchAccessoryCacheForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveAccessoryCache:(id)arg1 forIdentifier:(id)arg2;
- (_Bool)isServerLinkTypeBrowseable:(long long)arg1;
- (void)accessoryServerBrowser:(id)arg1 removeCacheForAccessoryWithIdentifier:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 getCacheForAccessoryWithIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)accessoryServerBrowser:(id)arg1 saveCache:(id)arg2 serverIdentifier:(id)arg3;
- (void)_notifyDelegateOfReachabilityChangeChange:(_Bool)arg1 forBTLEAccessories:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didChangeReachability:(_Bool)arg2 forAccessoryServerWithIdentifier:(id)arg3;
- (void)accessoryServerBrowser:(id)arg1 didFailToDiscoverAccessoryServerWithIdentifier:(id)arg2;
- (void)_notifyDelegateOfDiscoveryFailure:(id)arg1 accessoryServer:(id)arg2 linkType:(long long)arg3;
- (void)accessoryServerBrowser:(id)arg1 didStopDiscoveringWithError:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didStartDiscoveringWithError:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didRemoveAccessoryServer:(id)arg2 error:(id)arg3;
- (void)_addReconfirmTimer:(id)arg1 accessoryServer:(id)arg2;
- (void)_startPairingInterruptionTimer:(id)arg1;
- (void)_stopReconfirmTimer:(id)arg1;
- (void)_handlePairingInterruptedTimeout:(id)arg1 error:(id)arg2;
- (void)_notifyDelegateOfRemovedAccessoryServer:(id)arg1 error:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didFinishWACForAccessoryWithIdentifier:(id)arg2 error:(id)arg3;
- (void)_notifyDelegateOfAccessoryServerNeedingReprovisioning:(id)arg1 error:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didFindAccessoryServerNeedingReprovisioning:(id)arg2 error:(id)arg3;
- (void)_notifyDelegateOfWACCompletionForAccessoryServerWithIdentifier:(id)arg1 error:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didFindAccessoryServerForReprovisioning:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didFindAccessoryServer:(id)arg2 stateChanged:(_Bool)arg3 stateNumber:(id)arg4;
- (void)_checkIfPairingWithPairedAccessoryServer:(id)arg1 errorCode:(long long)arg2;
- (void)_removePairingInformation:(id)arg1 error:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateValuesForCharacteristics:(id)arg3 stateNumber:(id)arg4 broadcast:(_Bool)arg5;
- (void)_notifyDelegateOfNewPairedAccessoryServer:(id)arg1 stateChanged:(_Bool)arg2 stateNumber:(id)arg3;
- (void)_resurrectAccessoryServer:(id)arg1;
- (void)_discoverAccessories:(id)arg1;
- (id)_requiredCharacteristicsTypesToReadFromBTLEServer:(id)arg1;
- (void)_tombstoneAccessoryServer:(id)arg1 forceNotify:(_Bool)arg2;
- (void)_notifyDelegateOfTombstonedAccessoryServer:(id)arg1;
- (_Bool)_shouldAccessoryServerBeTombstoned:(id)arg1;
- (id)_tombstonedAccessoryServerWithServerIdentifier:(id)arg1;
- (_Bool)_isAccessoryServerTombstoned:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)messageDestination;
- (void)_sendPairingCompletionStatusForServer:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updatePairingRetryTimerForAccessory:(id)arg1 delay:(long long)arg2;
- (void)_promptForPairingPasswordForServer:(id)arg1 reason:(id)arg2;
- (void)_pairAccessory:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_isHomeHubMatterSharedAdminPairingCapableWithConfiguration:(id)arg1;
- (_Bool)_isOwnerPairingAccessoryWithConfiguration:(id)arg1;
- (void)_pairAccessoryWithDescription:(id)arg1 configuration:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_cancelPairingWithAccessoryDescription:(id)arg1 error:(id)arg2;
- (void)cancelPairingWithAccessoryDescription:(id)arg1 error:(id)arg2;
- (id)currentControllerPairingIdentity;
- (id)findAccessoryServerForAccessoryDescription:(id)arg1;
- (void)_cancelPairingWithAccessory:(id)arg1 error:(id)arg2;
- (void)_handleSetupCodeAvailable:(id)arg1;
- (void)_notifyManagerOfNewAccessory;
- (id)unpairedAccessoryForServer:(id)arg1;
- (id)unpairedAccessoryWithServerIdentifier:(id)arg1;
- (void)_setBTLEPowerChangeCompletionHandler;
- (void)handleXPCConnectionInvalidated:(id)arg1;
- (void)_handleRequestSearchForNewAccessories:(id)arg1;
- (void)_handleRequestFetchNewAccessories:(id)arg1;
- (void)_handleCurrentWiFiNetworkChangedNotification:(id)arg1;
- (void)__handleProcessStateChange:(id)arg1;
- (void)_cancelCurrentlyPairingAccessories:(long long)arg1 linkType:(id)arg2;
- (void)_registerForNotifications;
- (void)_registerForMessages;
- (void)resurrectAccessoryServer:(id)arg1;
- (void)tombstoneAccessoryServer:(id)arg1;
- (void)discoverAccessories:(id)arg1;
- (void)restartBrowsers;
- (void)_restartBrowsers;
- (void)_startDiscoveringAccessoriesNeedingReprovisioning;
- (void)startDiscoveringAccessoriesNeedingReprovisioning;
- (void)_stopDiscoveryForAccessoryServerBrowser:(id)arg1;
- (void)_stopDiscoveringAccessoriesWithError:(id)arg1;
- (void)_stopDiscoveringAccessoriesWithLinkType:(id)arg1 force:(_Bool)arg2 error:(id)arg3;
- (void)_stopDiscoveringMediaAccessories;
- (void)_startDiscoveringMediaAccessories;
- (void)_startDiscoveryForAccessoryServerBrowser:(id)arg1;
- (void)_startDiscoveringAccessoriesWithLinkType:(id)arg1;
- (void)_startDiscoveringPairedAccessories:(id)arg1;
- (void)currentlyFoundHAPAccessoryServerWithIdentifier:(id)arg1 linkType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_discoverAccessoryServer:(id)arg1 linkType:(long long)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)timerDidFire:(id)arg1;
- (void)_stopReprovisioningTimerHandler;
- (void)_startOrStopAccessoryDiscovery;
- (void)evaluateAccessoryDiscoveryState;
- (void)_stopBtleAccessoryReachabilityProbeTimer;
- (void)_btleAccessoryReachabilityProbeTimer:(_Bool)arg1;
- (void)cancelPairingWithAccessory:(id)arg1 error:(id)arg2;
- (void)handleSetupCodeAvailable:(id)arg1;
- (void)didReceiveUserConsentResponseForSetupAccessoryDetail:(id)arg1 consent:(_Bool)arg2;
- (void)removePairingInformationForAccessoryServer:(id)arg1;
- (id)unpairedHAPAccessoryWithAccessoryDescription:(id)arg1;
- (void)pairAccessoryWithDescription:(id)arg1 configuration:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)pairAccessory:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)registerProgressHandler:(CDUnknownBlockType)arg1 unpairedAccessoryUUID:(id)arg2;
- (void)_removeDiscoveredAccessoryServerIdentifier:(id)arg1;
- (void)_addDiscoveredAccessoryServerIdentifier:(id)arg1;
- (id)discoveredAccessoryServers;
- (void)addUnpairedAccessoryServer:(id)arg1 identifier:(id)arg2;
- (void)deregisterPairedAccessory:(id)arg1;
- (void)registerPairedAccessory:(id)arg1 transports:(unsigned long long)arg2 setupHash:(id)arg3 delegate:(id)arg4;
- (void)_addUnpairedAccessoryForServer:(id)arg1;
- (void)_handleWACAccessoryFound;
- (void)_removePairingInformationForUnpairedAccessory:(id)arg1;
- (void)_handleRemovedUnpairedHAPAccessory:(id)arg1;
- (void)removeUnpairedHAPAccessory:(id)arg1;
- (void)addUnpairedHAPAccessory:(id)arg1;
- (void)unassociatedWACAccessoryDidFinishAssociation:(id)arg1 withError:(id)arg2;
- (void)unassociatedWACAccessoryDidStartAssociation:(id)arg1;
- (void)requestPermissionToAssociateWACAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic, getter=getActiveWACSession, setter=setActiveWACSession:) HMDUnassociatedWACAccessory *accessoryPerformingWAC; // @synthesize accessoryPerformingWAC=_accessoryPerformingWAC;
- (void)updateUnassociatedWACAccessory:(id)arg1;
- (void)removeUnassociatedWACAccessory:(id)arg1;
- (void)addUnassociatedWACAccessory:(id)arg1;
- (void)removeUnassociatedMediaAccessory:(id)arg1;
- (void)_associateMediaAccessoryForServer:(id)arg1;
- (void)_associate:(_Bool)arg1 hapAccessoryWithAdvertisement:(id)arg2;
- (void)addUnassociatedMediaAccessory:(id)arg1 forDeviceSetup:(_Bool)arg2;
- (id)_progressHandlerForUnpairedAccessory:(id)arg1;
- (id)_pairingInformationForAccessoryIdentifier:(id)arg1;
- (id)_pairingInformationForUnpairedAccessory:(id)arg1;
- (id)_unpairedAccessoryMatchingPairingInfo:(id)arg1;
- (id)unpairedAccessoryWithUUID:(id)arg1;
@property(readonly, nonatomic) NSArray *unpairedHAPAccessories;
- (void)probeReachabilityForBTLEAccessoryServersWithIdentifiers:(id)arg1 forceScan:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)isBrowsingAllowed;
- (id)accessoryBrowserHapProtocol;
- (void)handleNewlyPairedAccessory:(id)arg1 linkType:(long long)arg2;
- (void)homeLocationChangeNotification:(id)arg1;
- (void)handleConnectionDeactivation:(id)arg1;
- (void)_reprovisionAccessoryWithIdentifier:(id)arg1 wiFiPSK:(id)arg2 countryCode:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)reprovisionAccessoryWithIdentifier:(id)arg1 wiFiPSK:(id)arg2 countryCode:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)activate:(_Bool)arg1;
- (void)discoverAccessoryServer:(id)arg1 linkType:(long long)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)stopTrackingBTLEAccessoriesWithIdentifiers:(id)arg1;
- (void)btleAccessoryReachabilityProbeTimer:(_Bool)arg1;
- (void)stopDiscoveringMediaAccessories;
- (void)stopDiscoveringForUnpairedAccessoriesWithLinkType:(long long)arg1;
- (void)stopDiscoveringAccessoriesWithLinkType:(long long)arg1;
- (void)stopDiscoveringAccessories;
- (void)startDiscoveringMediaAccessories;
- (void)startDiscoveringAccessoriesWithLinkType:(long long)arg1;
- (void)startDiscoveringAccessories;
- (void)startDiscoveringPairedAccessoriesWithLinkType:(long long)arg1;
- (void)startDiscoveringPairedAccessories;
- (_Bool)isDiscoveringAccessoriesWithLinkType:(long long)arg1;
- (void)resetConfiguration;
- (void)_handleRemovedAccessoryAdvertisements:(id)arg1;
- (void)_handleAddedAccessoryAdvertisements:(id)arg1;
- (void)_notifyDelegateOfReachabilityChange:(_Bool)arg1 forAccessoryWithIdentifier:(id)arg2;
- (void)__inactivate;
- (void)__activate;
- (void)endActiveAssertion:(id)arg1;
- (id)beginActiveAssertionWithReason:(id)arg1;
- (unsigned long long)numPairedIPAccessories;
- (_Bool)areThereAnyAssociatedAirPlayAccessories;
- (id)identifiersOfAssociatedMediaAccessories;
- (_Bool)areThereAnyPairedBTLEAccessories;
- (id)identifiersOfPairedBTLEAccessories;
- (_Bool)areThereAnyPairedAccessories;
- (id)__identifiersOfPairedAccessoriesWithTransports:(unsigned long long)arg1;
- (id)pairedHMDHAPAccessoryWithAccessoryServer:(id)arg1;
- (id)pairedAccessoryInformationWithSetupID:(id)arg1;
- (id)pairedAccessoryInformationWithIdentifier:(id)arg1;
- (void)removePairedAccessoryInfoWithIdentifier:(id)arg1;
- (void)resetPairedAccessories;
- (void)removePairedAccessory:(id)arg1;
- (void)addPairedAccessory:(id)arg1;
- (void)_removeBrowsingConnection:(id)arg1 error:(id)arg2;
- (void)__addBrowsingConnection:(id)arg1;
- (void)__removeBrowsingObserver:(id)arg1 error:(id)arg2;
- (_Bool)__isMediaAccessoryBrowsingRequested;
- (_Bool)__isAccessoryBrowsingRequested;
- (void)__resetBrowsingConnections;
- (id)browsingConnections;
@property _Bool internalDiscoveryRequest; // @synthesize internalDiscoveryRequest=_internalDiscoveryRequest;
- (id)dumpBrowsingConnections;
- (void)_sendNewAccessoryData:(id)arg1 messageName:(id)arg2;
- (void)_handleRemovedAccessory:(id)arg1;
- (void)handleRemovedAccessory:(id)arg1;
- (void)_handleAddedAccessory:(id)arg1;
- (void)handleAddedAccessory:(id)arg1;
@property(readonly, nonatomic) NSArray *deviceSetupMediaAccessories;
@property(readonly, nonatomic) NSArray *unassociatedMediaAccessories;
- (id)_unassociatedMediaAccessoryWithIdentifier:(id)arg1;
- (id)unassociatedAccessoriesForClientRequest:(id)arg1;
@property(readonly, copy) NSArray *unassociatedAccessories;
- (void)removeUnassociatedAccessory:(id)arg1;
- (void)removeUnassociatedAccessoryWithIdentifier:(id)arg1;
- (void)addUnassociatedAccessory:(id)arg1 forDeviceSetup:(_Bool)arg2;
- (void)_handleTestModeConfigRequest:(id)arg1;
- (void)configureDemoBrowserWithDemoAccessories:(id)arg1 finalized:(_Bool)arg2;
- (void)validateLinkTypes:(id)arg1;
- (void)dealloc;
- (void)updateBroadcastKeyForIdentifier:(id)arg1 key:(id)arg2 keyUpdatedStateNumber:(id)arg3 keyUpdatedTime:(double)arg4;
- (void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2;
- (void)retrieveCurrentStateForIdentifier:(id)arg1 stateNumber:(id *)arg2 isReachable:(_Bool *)arg3 linkQuality:(unsigned long long *)arg4 lastSeen:(id *)arg5;
- (void)setQOS:(long long)arg1;
- (void)configureAccessory:(id)arg1 trackState:(_Bool)arg2 connectionPriority:(_Bool)arg3;
- (void)configureWithHomeManager:(id)arg1;
- (id)initWithMessageDispatcher:(id)arg1 injectedSettings:(id)arg2;
- (id)initWithMessageDispatcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

