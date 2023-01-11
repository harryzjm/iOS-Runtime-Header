//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PDCloudStoreNotificationCoordinatorObserver-Protocol.h>
#import <PassKitCore/PDPushNotificationConsumer-Protocol.h>
#import <PassKitCore/PDScheduledActivityClient-Protocol.h>

@class NSMutableArray, NSString, PDAssertionManager, PDCloudStoreNotificationCoordinator, PDPeerPaymentWebServiceArchiver, PDPushNotificationManager, PDUserNotificationManager, PKPaymentWebService, PKPeerPaymentAccount, PKPeerPaymentWebService;
@protocol OS_dispatch_queue, PDPeerPaymentWebServiceCoordinatorDataSource, PDWebServiceCoordinatorPassStore;

@interface PDPeerPaymentWebServiceCoordinator : NSObject <PDPushNotificationConsumer, PDScheduledActivityClient, PDCloudStoreNotificationCoordinatorObserver>
{
    PDPushNotificationManager *_pushNotificationManager;
    NSObject<OS_dispatch_queue> *_sharedPeerPaymentWebServiceQueue;
    NSObject<OS_dispatch_queue> *_updateAccountQueue;
    PDPeerPaymentWebServiceArchiver *_archiver;
    PKPeerPaymentWebService *_sharedPeerPaymentWebService;
    PKPeerPaymentAccount *_account;
    PKPeerPaymentAccount *_mockAccount;
    PDAssertionManager *_assertionManager;
    PDUserNotificationManager *_userNotificationManager;
    id <PDPeerPaymentWebServiceCoordinatorDataSource> _dataSource;
    id <PDWebServiceCoordinatorPassStore> _passStore;
    NSMutableArray *_pendingAccountFetches;
    NSMutableArray *_queuedPendingAccountFetches;
    _Bool _isFetchingAccount;
    PDCloudStoreNotificationCoordinator *_cloudStoreNotificationCoordinator;
    PKPaymentWebService *_paymentWebService;
}

@property(retain, nonatomic) PKPaymentWebService *paymentWebService; // @synthesize paymentWebService=_paymentWebService;
@property(retain, nonatomic) PDCloudStoreNotificationCoordinator *cloudStoreNotificationCoordinator; // @synthesize cloudStoreNotificationCoordinator=_cloudStoreNotificationCoordinator;
- (void).cxx_destruct;
- (id)_mockAccountInitialState;
- (unsigned long long)_peerPaymentErrorStateForRegistrationResponse:(id)arg1 error:(id)arg2;
- (void)_updateSharedCacheWithAccount:(id)arg1;
- (void)_updateSharedCacheWithWebService:(id)arg1;
- (void)_initalizeCloudStore;
- (void)_initalizeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_initalizeCloudStoreIfNecessary;
- (void)_archiveSharedPeerPaymentWebServiceContext;
- (void)_handleUpdatedAccount:(id)arg1 withOldAccount:(id)arg2;
- (void)_completeUpdatingAccount;
- (void)_updateAccountWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_shouldAttemptBackgroundPeerPaymentPassDownload;
- (void)applyPushNotificationToken:(id)arg1;
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;
- (id)pushNotificationTopics;
- (void)cloudStoreNotificationCoordinator:(id)arg1 createdZoneWithName:(id)arg2;
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;
- (void)_performPeerPaymentReregisterActivityForReason:(id)arg1;
- (void)_schedulePeerPaymentReregisterActivityForReason:(id)arg1;
- (void)_performPeerPaymentPassDownloadActivity;
- (void)_schedulePeerPaymentCoordinatorActivities;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)submitDeviceScoreIdentifiersForTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_downloadAssociatedPeerPaymentPassWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_hasAssociatedPeerPaymentPass;
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_peerPaymentPassExists;
- (void)handleMigratedAccount:(id)arg1;
- (void)deleteAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)_registerWithPeerPaymentWebService:(id)arg1 registerURL:(id)arg2 pushToken:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleCompanionSerialNumberChanged;
- (void)registrationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)receivedPeerPaymentMessage:(id)arg1;
- (void)handlePassLibraryChangedWithPassUniqueIdentifier:(id)arg1;
- (void)accountWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSharedWebServiceContext:(id)arg1;
- (void)deleteSharedWebServiceWithDiagnosticReason:(id)arg1;
@property(readonly, nonatomic) PKPeerPaymentWebService *sharedPeerPaymentWebService;
- (void)dealloc;
- (id)initWithPushNotificationManager:(id)arg1 paymentWebService:(id)arg2 assertionManager:(id)arg3 userNotificationManager:(id)arg4 dataSource:(id)arg5 passStore:(id)arg6;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)sharedWebService;
- (id)initWithPushNotificationManager:(id)arg1 paymentWebService:(id)arg2 assertionManager:(id)arg3 dataSource:(id)arg4 passStore:(id)arg5;
- (id)initWithPushNotificationManager:(id)arg1 paymentWebService:(id)arg2 assertionManager:(id)arg3 dataSource:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

