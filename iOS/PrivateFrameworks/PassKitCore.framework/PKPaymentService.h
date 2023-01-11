//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentServiceExportedInterface-Protocol.h>
#import <PassKitCore/PKTapToRadarDelegate-Protocol.h>
#import <PassKitCore/PKXPCServiceDelegate-Protocol.h>

@class NSMutableArray, NSString, PKExpressTransactionState, PKFieldProperties, PKPaymentWebServiceContext, PKXPCService;
@protocol PKPaymentServiceDelegate;

@interface PKPaymentService : NSObject <PKXPCServiceDelegate, PKPaymentServiceExportedInterface, PKTapToRadarDelegate>
{
    PKXPCService *_remoteService;
    unsigned long long _interfaceType;
    _Atomic _Bool _cachedFieldPropertiesValid;
    _Bool _hasPaymentDeviceFieldProperties;
    _Bool _forceConnectionOnResume;
    struct os_unfair_lock_s _pendingInvitationRequestsLock;
    NSMutableArray *_pendingInvitationRequests;
    id <PKPaymentServiceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PKPaymentServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_accessDelegate:(CDUnknownBlockType)arg1;
- (_Bool)_hasInterfaceOfType:(unsigned long long)arg1;
- (void)ambiguousTransactionWithServiceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendAllPassTransactions;
- (_Bool)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1;
- (void)deleteTransactionReceiptWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storeTransactionReceiptData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transactionReceiptForTransactionWithIdentifier:(id)arg1 updateIfNecessary:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)transactionReceiptWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)redeemProvisioningSharingIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)redeemEncryptedProvisioningTarget:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareProvisioningTarget:(id)arg1 checkFamilyCircle:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)provideEncryptedPushProvisioningTarget:(id)arg1 sharingInstanceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)statusForShareableCredentials:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushProvisioningSharingIdentifiers:(CDUnknownBlockType)arg1;
- (void)didUpdateSharingInvitationWithIdentifier:(id)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didReceiveSharingInvitationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didReceiveSharingInvitationWithIdentifier:(id)arg1 fromOriginatorIDSHandle:(id)arg2 sharingSessionIdentifier:(id)arg3 metadata:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)finishedKeyExchangeForCredential:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sharingInvitationWasInvalidated:(id)arg1 withCredentialIdentifier:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)credentialWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)canAcceptInvitation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)matchingInvitationOnDevice:(id)arg1 withTimeout:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestBackgroundRegistrationForCredentialWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeSharingInvitation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)declineRelatedSharingInvitationsIfNecessary:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addSubcredential:(id)arg1 fromSharingInvitation:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)removeSharingInvitationReceiptWithIdentifiers:(id)arg1 onCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addSharingInvitationReceipts:(id)arg1 onCredentialWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)revokeCredentialsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerCredentialsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMetadataOnPassWithIdentifier:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)subcredentialInvitationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)addPlaceholderPassWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAccountAttestationAnonymizationSalt:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)accountAttestationAnonymizationSaltWithCompletion:(CDUnknownBlockType)arg1;
- (void)passOwnershipTokenWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2;
- (void)performProductActionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)productsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDeviceCheckInContextBuildVersion:(id)arg1 outstandingAction:(long long)arg2 forRegion:(id)arg3;
- (void)performDeviceCheckInWithCompletion:(CDUnknownBlockType)arg1;
- (void)noteAccountDeleted;
- (void)recomputeCategoryVisualizationMangitudesForPassUniqueID:(id)arg1 style:(long long)arg2;
- (void)categoryVisualizationMagnitudesForPassUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)categoryVisualizationMagnitudesForPassUniqueID:(id)arg1;
- (void)transactionsRequiringReviewForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitTransactionAnswerForTransaction:(id)arg1 questionType:(unsigned long long)arg2 answer:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)submitDeleteRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitTermsRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitDocumentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitApplyRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)featureApplicationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)featureApplicationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)featureApplicationsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)defaultPaymentPassIngestionSpecificIdentifier:(CDUnknownBlockType)arg1;
- (void)photosForFamilyMembersWithDSIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)familyMembersIgnoringCache:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)familyMembersWithCompletion:(CDUnknownBlockType)arg1;
- (void)submitBarcodePaymentEvent:(id)arg1 forPassUniqueIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)submitEncryptedPIN:(id)arg1 forTransactionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)submitUserConfirmation:(_Bool)arg1 forTransactionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)markAuthenticationCompleteForTransactionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processedAuthenticationMechanism:(unsigned long long)arg1 forTransactionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)retrievePINEncryptionCertificateForPassUniqueIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)retrieveDecryptedBarcodeCredentialForPassUniqueIdentifier:(id)arg1 authorization:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)fetchBarcodesForPassUniqueIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)registerAuxiliaryCapabilityForPassUniqueIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requiresUpgradedPasscodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)enforceUpgradedPasscodePolicyWithCompletion:(CDUnknownBlockType)arg1;
- (void)disbursementVoucherWithDisbursementSource:(unsigned long long)arg1 disbursementTarget:(unsigned long long)arg2 bundleIdentifier:(id)arg3 teamIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_sharedPaymentWebServiceContextUsingSynchronousProxy:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sharedPaymentWebServiceContextWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) PKPaymentWebServiceContext *sharedPaymentWebServiceContext;
@property(retain, nonatomic) NSString *defaultPaymentPassUniqueIdentifier;
@property(readonly, nonatomic) PKExpressTransactionState *outstandingExpressTransactionState;
@property(readonly, nonatomic) __weak PKFieldProperties *paymentDeviceFieldProperties;
@property(readonly, nonatomic) _Bool hasPaymentDeviceFieldProperties;
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;
- (void)passbookUIServiceDidLaunch;
- (void)scheduleAutomaticPresentationAvailableNotificationForPassWithUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeProductsCache;
- (void)setDeviceUpgradeTasksContextBuildVersion:(id)arg1 upgradeTaskVersion:(long long)arg2 retryCount:(long long)arg3;
- (void)scheduleDeviceUpgradeTasksIfNecessaryWithRandomizeStartDate:(_Bool)arg1;
- (void)unscheduleDeviceUpgradeTaskActivity;
- (void)unscheduleDeviceCheckIn;
- (void)scheduleDeviceCheckInWithStartTimeOffset:(double)arg1;
- (void)scheduleSetupReminders;
- (void)consistencyCheck;
- (void)downloadAllPaymentPasses;
- (void)simulatePaymentPushTopic:(id)arg1;
- (void)simulatePaymentPush;
- (void)transitStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)simulateDefaultExpressTransitPassIdentifier:(id)arg1 forExpressMode:(id)arg2;
- (void)processTransitTransactionEventWithHistory:(id)arg1 transactionDate:(id)arg2 forPaymentApplication:(id)arg3 withPassUniqueIdentifier:(id)arg4 expressTransactionState:(id)arg5;
- (void)isPassExpressWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withReferenceExpressState:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)expressPassInformationForMode:(id)arg1;
- (id)expressPassesInformation;
- (id)expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)arg1;
- (id)expressPassesInformationWithCardType:(long long)arg1;
- (id)expressPassInformationWithPassUniqueIdentifier:(id)arg1;
- (void)setDefaultExpressTransitPassIdentifier:(id)arg1 withCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)defaultExpressTransitPassIdentifier;
- (void)setDefaultExpressFelicaTransitPassIdentifier:(id)arg1 withCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)defaultExpressFelicaTransitPassIdentifier;
- (void)sanitizeExpressPasses;
- (void)initializeSecureElement:(CDUnknownBlockType)arg1;
- (void)initializeSecureElementIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1;
- (void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)valueAddedServiceTransactionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)valueAddedServiceTransactionsForPaymentTransaction:(id)arg1 limit:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)valueAddedServiceTransactionsForPassWithUniqueIdentifier:(id)arg1 limit:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertOrUpdateValueAddedServiceTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentTransaction:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)archiveMessageWithIdentifier:(id)arg1;
- (void)deleteMessagesForPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)deleteAllTransactionsForTransactionSourceIdentifiers:(id)arg1;
- (void)deletePaymentTransactionWithIdentifier:(id)arg1;
- (void)setCommutePlanReminder:(id)arg1 forCommutePlan:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)commutePlanReminderForCommputePlan:(id)arg1 pass:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setBalanceReminder:(id)arg1 forBalance:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)balanceReminderThresholdForBalance:(id)arg1 pass:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)balancesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)messagesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mapsMerchantsWithCompletion:(CDUnknownBlockType)arg1;
- (void)ambiguousPassUniqueIdentifierForTransactionWithServiceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)passUniqueIdentifierForTransactionWithServiceIdentifier:(id)arg1 transactionSourceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)passUniqueIdentifierForTransactionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)logoImageDataForTransactionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transactionsForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installmentPlanTransactionsForTransactionSourceIdentifiers:(id)arg1 accountIdentifier:(id)arg2 withRedemptionType:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)installmentPlansWithTransactionReferennceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installmentTransactionsForInstallmentPlanIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transactionWithReferenceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transactionWithServiceIdentifier:(id)arg1 transactionSourceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)transactionSourceTypeForTransactionSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transactionWithTransactionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transactionsWithTransactionSource:(unsigned long long)arg1 withBackingData:(unsigned long long)arg2 limit:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pendingTransactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (id)approvedTransactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6;
- (void)approvedTransactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionType:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(CDUnknownBlockType)arg8;
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withMerchantCategory:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(CDUnknownBlockType)arg8;
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 matchingMerchant:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withPeerPaymentCounterpartHandles:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)cashbackByPeriodForTransactionSourceIdentifiers:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 calendar:(id)arg4 calendarUnit:(unsigned long long)arg5 type:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)transactionCountByPeriodForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 calendar:(id)arg4 unit:(unsigned long long)arg5 includePurchaseTotal:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 orderedByDate:(long long)arg6 limit:(long long)arg7 completion:(CDUnknownBlockType)arg8;
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)removeMapsDataForTransactionWithIdentifier:(id)arg1 forTransactionSourceIdentifier:(id)arg2 issueReportIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)insertOrUpdatePaymentTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertOrUpdatePaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)hasTransactionsForTransactionSourceIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3 usingSynchronousProxy:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3;
- (id)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (void)displayTapToRadarAlertForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transactionWithIdentifier:(id)arg1 didDownloadTransactionReceipt:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCredential:(id)arg2;
- (void)didRecieveCredentialInvitation:(id)arg1;
- (void)transactionBatch:(id)arg1 moreComing:(_Bool)arg2 readyForNextBatch:(CDUnknownBlockType)arg3;
- (void)featureApplicationChanged:(id)arg1;
- (void)featureApplicationRemoved:(id)arg1;
- (void)featureApplicationAdded:(id)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCategoryVisualizationWithStyle:(long long)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)passWithUniqueIdentifier:(id)arg1 didReceiveValueAddedServiceTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(_Bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(_Bool)arg2;
- (void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateBalanceReminder:(id)arg2 forBalanceWithIdentifier:(id)arg3;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)paymentDeviceDidExitField;
- (void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
- (id)_extendedSynchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_extendedRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_extendedRemoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_extendedRemoteObjectProxy;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_existingRemoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (void)remoteServiceDidSuspend:(id)arg1;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
