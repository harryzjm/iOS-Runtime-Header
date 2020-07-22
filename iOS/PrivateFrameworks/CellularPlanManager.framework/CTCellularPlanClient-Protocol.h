//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CellularPlanManager/NSObject-Protocol.h>

@class CTCellularPlanItem, NSData, NSDictionary, NSNumber, NSString;

@protocol CTCellularPlanClient <NSObject>
- (void)setActivePlan:(NSData *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)shouldShowAddNewRemotePlan:(void (^)(_Bool))arg1;
- (void)getRemoteInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)setAutoPlanSelection:(_Bool)arg1;
- (void)getAutoPlanSelectionWithCompletion:(void (^)(_Bool))arg1;
- (void)deleteAllRemoteProfiles;
- (void)deleteRemoteProfile:(NSString *)arg1;
- (void)selectRemoteProfile:(NSString *)arg1;
- (void)fetchRemoteProfiles:(NSString *)arg1;
- (void)userDidProvideConsentResponse:(_Bool)arg1 iccid:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)eraseAllRemotePlansWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remotePlansSignupParamsForCsn:(NSData *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (void)remotePlanLaunchInfoForCsn:(NSData *)arg1 completion:(void (^)(NSString *, NSDictionary *, NSError *))arg2;
- (void)didCancelRemotePlan;
- (void)didPurchaseRemotePlanForEid:(NSString *)arg1 imei:(NSString *)arg2 meid:(NSString *)arg3 iccid:(NSString *)arg4 alternateSmdpFqdn:(NSString *)arg5 completion:(void (^)(_Bool))arg6;
- (void)didDeleteRemotePlanItem:(CTCellularPlanItem *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)didSelectRemotePlanItem:(CTCellularPlanItem *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remotePlanItemsWithUpdateFetch:(_Bool)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)manageAccountForRemotePlan:(CTCellularPlanItem *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)addNewRemotePlanWithAddress:(NSString *)arg1 matchingId:(NSString *)arg2 oid:(NSString *)arg3 confirmationCode:(NSString *)arg4 isPairing:(_Bool)arg5 userConsent:(long long)arg6 completion:(void (^)(NSError *))arg7;
- (void)addNewRemotePlanWithCardData:(NSString *)arg1 confirmationCode:(NSString *)arg2 isPairing:(_Bool)arg3 userConsent:(long long)arg4 completion:(void (^)(NSError *))arg5;
- (void)addNewRemotePlan:(_Bool)arg1 userConsent:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)finishRemoteProvisioningWithCompletion:(void (^)(_Bool))arg1;
- (void)startRemoteProvisioningWithCompletion:(void (^)(_Bool))arg1;
- (void)shouldShowAddNewRemotePlanWithFlowType:(void (^)(_Bool, unsigned long long, NSError *))arg1;
- (void)isRemotePlanCapable:(void (^)(_Bool))arg1;
- (void)launchDataActivationNextWithUrl:(NSString *)arg1;
- (void)updatePlansDatabase;
- (void)expirePlan;
- (void)launchSequoia;
- (void)setLatitude:(NSNumber *)arg1 andLongitude:(NSNumber *)arg2;
- (void)latitudeLongitudeOverride:(void (^)(double, double))arg1;
- (void)setMcc:(long long)arg1 andMnc:(long long)arg2;
- (void)mccMncOverride:(void (^)(long long, long long))arg1;
- (void)setSelectedProxy:(long long)arg1;
- (void)getSelectedProxy:(void (^)(long long))arg1;
- (void)setSelectedEnv:(long long)arg1;
- (void)getSelectedEnv:(void (^)(long long))arg1;
- (void)setESimServerURL:(NSString *)arg1;
- (void)getESimServerURL:(void (^)(NSString *))arg1;
- (void)setIMEIPrefix:(NSString *)arg1;
- (void)getIMEIPrefix:(void (^)(NSString *))arg1;
- (void)getCurrentPlanType:(void (^)(long long))arg1;
- (void)openInternalUrlId:(long long)arg1;
- (void)getDeviceInfo:(void (^)(NSDictionary *))arg1;
- (void)retrieveRequestSettings:(void (^)(NSDictionary *, NSDictionary *, NSDictionary *))arg1;
- (void)fetchNewProfilesWithCompletion:(void (^)(_Bool, NSError *))arg1 additionalParameters:(NSDictionary *)arg2;
- (void)registerHasNewProfileCompletion:(void (^)(_Bool, _Bool))arg1;
- (void)setUserInPurchaseFlow:(_Bool)arg1;
- (void)didProvisionEsimWithIccid:(NSString *)arg1;
- (void)didPurchasePlanWithIccid:(NSString *)arg1 downloadProfile:(_Bool)arg2;
- (void)remoteSignIdMapForSessionId:(NSString *)arg1 locationRequired:(_Bool)arg2 withCompletion:(void (^)(NSString *, NSError *))arg3;
- (void)signIdMapForSessionId:(NSString *)arg1 locationRequired:(_Bool)arg2 withCompletion:(void (^)(NSString *, NSError *))arg3 latitude:(NSNumber *)arg4 longitude:(NSNumber *)arg5;
- (void)manageAccountForPlan:(CTCellularPlanItem *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)didSelectPlanItem:(CTCellularPlanItem *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)willDisplayPlanItems;
- (void)planItemsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)shouldShowPlanList:(void (^)(_Bool))arg1;
- (void)isAddButtonEnabled:(void (^)(_Bool))arg1;
- (void)triggerAddNewDataPlan:(void (^)(NSError *))arg1;
- (void)isRoamingPlanSupportAvailable:(void (^)(_Bool))arg1;
- (void)isMultipleDataPlanSupportAvailable:(void (^)(_Bool))arg1;
- (void)isNewDataPlanCapable:(void (^)(_Bool))arg1;
- (void)ping;
@end

