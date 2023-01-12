//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthRecordServices/NSObject-Protocol.h>

@class HKClinicalAccountEvent, HKClinicalEphemeralAccount, HKFHIRVersion, HKSource, NSArray, NSDate, NSNumber, NSString, NSUUID;

@protocol HKClinicalAccountStoreServerInterface <NSObject>
- (void)remote_simulateUnmergeEventForAccountWithIdentifier:(NSUUID *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)remote_updateAccountCredentialStateWithIdentifier:(NSUUID *)arg1 state:(long long)arg2 event:(HKClinicalAccountEvent *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)remote_invalidateCredentialForAccountWithIdentifier:(NSUUID *)arg1 event:(HKClinicalAccountEvent *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_createStaticAccountWithTitle:(NSString *)arg1 subtitle:(NSString *)arg2 description:(NSString *)arg3 countryCode:(NSString *)arg4 fhirVersion:(HKFHIRVersion *)arg5 onlyIfNeededForSimulatedGatewayID:(NSString *)arg6 completion:(void (^)(HKClinicalAccount *, NSError *))arg7;
- (void)remote_fetchAllEventsForAccountIdentifier:(NSUUID *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)remote_updateClinicalSharingStatusForAccountWithIdentifier:(NSUUID *)arg1 firstSharedDate:(NSDate *)arg2 lastSharedDate:(NSDate *)arg3 userStatus:(NSNumber *)arg4 multiDeviceStatus:(NSNumber *)arg5 primaryDeviceName:(NSString *)arg6 completion:(void (^)(_Bool, NSError *))arg7;
- (void)remote_pingWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_refreshAccountConnectionInformationForAccountsWithIdentifiers:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)remote_supportsClinicalSharingWithCompletion:(void (^)(long long, NSError *))arg1;
- (void)remote_shouldShowHealthRecordsSectionWithCompletion:(void (^)(long long, _Bool, NSError *))arg1;
- (void)remote_hasGatewayBackedHealthRecordsAccountWithCompletion:(void (^)(long long, NSError *))arg1;
- (void)remote_hasAnyHealthRecordsAccountWithCompletion:(void (^)(long long, NSError *))arg1;
- (void)remote_deleteAccountWithIdentifier:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_fetchAccountWithIdentifier:(NSUUID *)arg1 completion:(void (^)(HKClinicalAccount *, NSError *))arg2;
- (void)remote_fetchAccountForSource:(HKSource *)arg1 completion:(void (^)(HKClinicalAccount *, NSError *))arg2;
- (void)remote_fetchAccountsForGatewaysWithExternalIDs:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)remote_fetchAllAccountsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_pruneAuthenticationDataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_replaceAccountWithNewAccountForAccountWithIdentifier:(NSUUID *)arg1 usingCredentialWithPersistentID:(NSNumber *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_persistEphemeralAccount:(HKClinicalEphemeralAccount *)arg1 triggerIngestion:(_Bool)arg2 completion:(void (^)(HKClinicalAccount *, NSError *))arg3;
- (void)remote_endLoginSessionWithState:(NSUUID *)arg1 code:(NSString *)arg2 completion:(void (^)(_Bool, HKClinicalAccountLoginCompletionState *, NSError *))arg3;
- (void)remote_beginReloginSessionForAccountWithIdentifier:(NSUUID *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
- (void)remote_beginInitialLoginSessionForGatewayWithExternalID:(NSString *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
@end

