//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CellularPlanManager/CTCellularPlanClientDelegate-Protocol.h>

@class NSData, NSMutableArray, NSString, NSXPCConnection;

@interface CTCellularPlanManager : NSObject <CTCellularPlanClientDelegate>
{
    NSMutableArray *_subscriptionCompletions;
    struct dispatch_queue_s *_queue;
    NSString *_lastSessionId;
    NSData *_cookieData;
    NSXPCConnection *_connection;
}

+ (long long)calculateInstallConsentTextTypeFor:(id)arg1;
+ (id)sharedManager;
- (void)dealloc;
- (void)subscriptionDetailsForCompletion:(id)arg1;
- (void)remoteProvisioningDidBecomeAvailable;
- (void)carrierInfoDidUpdate;
- (void)localPlanInfoDidUpdate:(id)arg1;
- (void)planInfoDidUpdate;
- (id)getShortLabelsForLabels:(id)arg1;
- (id)getSubscriptionContextUUIDforPlan:(id)arg1;
- (void)userDidProvideConsentResponse:(long long)arg1 forPlan:(id)arg2 isRemote:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)userDidProvideConsentResponse:(long long)arg1 forPlan:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getPredefinedLabels;
- (void)eraseAllRemotePlansWithCSN:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)eraseAllRemotePlansWithCompletion:(CDUnknownBlockType)arg1;
- (void)remotePlansSignupParamsForCsn:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remoteplansWithCsn:(id)arg1 parameters:(id)arg2 andRemoteCompletion:(CDUnknownBlockType)arg3;
- (void)remotePlanLaunchInfoForEid:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pendingReleaseRemotePlan;
- (void)didCancelRemotePlan;
- (void)didPurchaseRemotePlanForEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSmdpFqdn:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)getRemoteInfo:(CDUnknownBlockType)arg1;
- (void)deleteAllRemoteProfiles;
- (void)deleteRemoteProfile:(id)arg1;
- (void)selectRemoteProfile:(id)arg1;
- (void)setSkipEligibilityCheck:(_Bool)arg1;
- (void)setRoamingSignupOverride:(_Bool)arg1;
- (void)getRoamingSignupOverrideWithCompletion:(CDUnknownBlockType)arg1;
- (void)setAutoPlanSelection:(_Bool)arg1;
- (void)getAutoPlanSelectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchRemoteProfiles:(id)arg1;
- (void)didDeleteRemotePlanItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didSelectRemotePlanItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remotePlanItemsWithUpdateFetch:(_Bool)arg1 withCSN:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remotePlanItemsWithUpdateFetch:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remotePlanItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)addNewRemotePlanWithAddress:(id)arg1 matchingId:(id)arg2 oid:(id)arg3 confirmationCode:(id)arg4 isPairing:(_Bool)arg5 withCSN:(id)arg6 withContext:(id)arg7 userConsent:(long long)arg8 completion:(CDUnknownBlockType)arg9;
- (void)addNewRemotePlanWithCardData:(id)arg1 confirmationCode:(id)arg2 isPairing:(_Bool)arg3 withCSN:(id)arg4 withContext:(id)arg5 userConsent:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)addNewRemotePlanWithCardData:(id)arg1 isPairing:(_Bool)arg2 withCSN:(id)arg3 withContext:(id)arg4 userConsent:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)addNewRemotePlan:(_Bool)arg1 withCSN:(id)arg2 withContext:(id)arg3 userConsent:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addNewRemotePlanWithAddress:(id)arg1 matchingId:(id)arg2 oid:(id)arg3 confirmationCode:(id)arg4 isPairing:(_Bool)arg5 userConsent:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)addNewRemotePlanWithCardData:(id)arg1 confirmationCode:(id)arg2 isPairing:(_Bool)arg3 userConsent:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addNewRemotePlanWithCardData:(id)arg1 isPairing:(_Bool)arg2 userConsent:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addNewRemotePlan:(_Bool)arg1 userConsent:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)manageAccountForRemotePlan:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishRemoteProvisioningForCSN:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startRemoteProvisioningForCSN:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishRemoteProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)startRemoteProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)shouldShowAddNewRemotePlanWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shouldShowAddNewRemotePlanWithFlowTypeAndTrialPlanType:(CDUnknownBlockType)arg1;
- (void)isRemotePlanCapableWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)isRemotePlanCapable:(CDUnknownBlockType)arg1;
- (void)launchDataActivationNextWithUrl:(id)arg1;
- (void)expirePlan;
- (void)launchSequoia;
- (void)openInternalUrlId:(long long)arg1;
- (void)getDeviceInfo:(CDUnknownBlockType)arg1;
- (void)carrierHandoffToken:(CDUnknownBlockType)arg1;
- (void)setUserInPurchaseFlow:(_Bool)arg1;
- (void)didPurchasePlanForCsn:(id)arg1 iccid:(id)arg2 profileServer:(id)arg3;
- (void)planLaunchInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)eraseAllPlans:(CDUnknownBlockType)arg1;
- (void)didDeletePlanItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didPurchasePlanWithIccid:(id)arg1 downloadProfile:(_Bool)arg2;
- (void)setActivePlan:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)manageAccountForPlan:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)didSelectPlanForIMessage:(id)arg1;
- (void)didSelectPlanForIMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)didSelectPlanForDefaultVoice:(id)arg1;
- (void)didSelectPlanForDefaultVoice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)setLabelForPlan:(id)arg1 label:(id)arg2;
- (void)setLabelForPlan:(id)arg1 label:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)didSelectPlanForData:(id)arg1;
- (void)didSelectPlanForData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)didSelectPlanItem:(id)arg1 isEnable:(_Bool)arg2;
- (void)didSelectPlanItem:(id)arg1 isEnable:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didSelectPlanItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)willDisplayPlanItems;
- (void)carrierItemsShouldUpdate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)remapSimLabel:(id)arg1 to:(id)arg2;
- (void)remapSimLabel:(id)arg1 to:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)resolveSimLabel:(id)arg1;
- (void)resolveSimLabel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)danglingPlanItemsShouldUpdate:(_Bool)arg1;
- (void)danglingPlanItemsShouldUpdate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)planItemsShouldUpdate:(_Bool)arg1;
- (void)planItemsShouldUpdate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)planItemsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isAddButtonEnabled;
- (void)isAddButtonEnabled:(CDUnknownBlockType)arg1;
- (_Bool)shouldShowPlanList;
- (void)shouldShowPlanList:(CDUnknownBlockType)arg1;
- (void)subscriptionDetailsWithCompletion:(CDUnknownBlockType)arg1;
- (void)plansForRenewalWithProgress:(CDUnknownBlockType)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)plansWithProgress:(CDUnknownBlockType)arg1 andCompletion:(CDUnknownBlockType)arg2 additionalParameters:(id)arg3;
- (void)plansWithProgress:(CDUnknownBlockType)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)_plansForRenewal:(_Bool)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 additionalParameters:(id)arg4;
- (void)loadPlansWithUrl:(id)arg1 postData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setLatitude:(id)arg1 andLongitude:(id)arg2;
- (void)latitudeLongitudeOverride:(CDUnknownBlockType)arg1;
- (void)setMcc:(long long)arg1 andMnc:(long long)arg2;
- (void)mccMncOverride:(CDUnknownBlockType)arg1;
- (_Bool)getEnableVinylFlowTypeOverride;
- (void)enableVinylFlowTypeOverride:(_Bool)arg1;
- (void)showUiIgnoringActivationFlags:(_Bool)arg1;
- (void)setUseNewCellularPlanUI:(_Bool)arg1;
- (void)setSelectedProxy:(long long)arg1;
- (void)getSelectedProxy:(CDUnknownBlockType)arg1;
- (void)setSelectedEnv:(long long)arg1;
- (void)getSelectedEnv:(CDUnknownBlockType)arg1;
- (void)setESimServerURL:(id)arg1;
- (void)getESimServerURL:(CDUnknownBlockType)arg1;
- (void)setIMEIPrefix:(id)arg1;
- (void)getIMEIPrefix:(CDUnknownBlockType)arg1;
- (void)connectionSettings:(CDUnknownBlockType)arg1;
- (void)addNewPlanWithAddress:(id)arg1 matchingId:(id)arg2 oid:(id)arg3 confirmationCode:(id)arg4 duringBuddy:(_Bool)arg5 userConsent:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)addNewPlanWithCardData:(id)arg1 duringBuddy:(_Bool)arg2 userConsent:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addNewPlanWithCardData:(id)arg1 triggerType:(long long)arg2 userConsent:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addNewPlanWithCarrierItem:(id)arg1 duringBuddy:(_Bool)arg2 userConsent:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addNewPlanWithUserInWebsheetWithCompletion:(CDUnknownBlockType)arg1;
- (void)addNewPlanWithAddress:(id)arg1 matchingId:(id)arg2 oid:(id)arg3 confirmationCode:(id)arg4 triggerType:(long long)arg5 userConsent:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)addNewPlanWithFlowType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addNewPlanWithCardData:(id)arg1 confirmationCode:(id)arg2 triggerType:(long long)arg3 userConsent:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addNewPlanWithCarrierItem:(id)arg1 triggerType:(long long)arg2 userConsent:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)triggerAddNewDataPlan:(CDUnknownBlockType)arg1;
- (void)isRoamingPlanSupportAvailable:(CDUnknownBlockType)arg1;
- (void)isMultipleDataPlanSupportAvailable:(CDUnknownBlockType)arg1;
- (void)exitSimSetupWithCompletion:(CDUnknownBlockType)arg1;
- (void)enterSimSetupWithCompletion:(CDUnknownBlockType)arg1;
- (void)finishProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)startProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)getSupportedFlowTypes;
- (void)getSupportedFlowTypes:(CDUnknownBlockType)arg1;
- (void)isNewDataPlanCapable:(CDUnknownBlockType)arg1;
- (void)shouldShowPlanSetup:(CDUnknownBlockType)arg1;
- (void)ping;
- (id)synchronousProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)_connect_sync;
- (void)_ensureConnected_sync;
- (void)_reconnect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

