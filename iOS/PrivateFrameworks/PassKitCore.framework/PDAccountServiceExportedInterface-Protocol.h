//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class CNContact, NSArray, NSData, NSDate, NSSet, NSString, NSTimeZone, PKAccount, PKAccountAction, PKAccountEnhancedMerchant, PKAccountPromotion, PKAccountUserNotificationSettings, PKAccountUserPreferences, PKAccountWebServicePhysicalCardActionRequest, PKAccountWebServiceRequestPhysicalCardRequest, PKApplePayTrustSignature, PKPaymentDeviceMetadata, PKPhysicalCardAction, PKPhysicalCardOrder, PKVirtualCard;

@protocol PDAccountServiceExportedInterface <PDXPCServiceExportedInterface>
- (void)updateWalletBadgeCountWithCompletion:(void (^)(_Bool))arg1;
- (void)accountEntityOrderingsForAccountWithIdentifier:(NSString *)arg1 entityType:(unsigned long long)arg2 completion:(void (^)(NSArray *))arg3;
- (void)accountEnhancedMerchantBehaviorForAccountWithIdentifier:(NSString *)arg1 completion:(void (^)(PKAccountEnhancedMerchantBehavior *))arg2;
- (void)updateAccountEnhancedMerchantsForAccountWithIdentifier:(NSString *)arg1 forceUpdate:(_Bool)arg2 observeCooldownPeriod:(_Bool)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)deleteAccountEnhancedMerchant:(PKAccountEnhancedMerchant *)arg1 forAccountWithIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)accountEnhancedMerchantsForAccountWithIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)insertOrUpdateAccountEnhancedMerchants:(NSArray *)arg1 accountIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)updateAccountEnhancedMerchantsForAccountWithIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)updateAccountEnhancedMerchantsForAccountWithIdentifier:(NSString *)arg1 observeCooldownPeriod:(_Bool)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)accountPromotionBehaviorForAccountWithIdentifier:(NSString *)arg1 completion:(void (^)(PKAccountPromotionBehavior *))arg2;
- (void)updateAccountPromotionsForAccountWithIdentifier:(NSString *)arg1 forceUpdate:(_Bool)arg2 observeCooldownPeriod:(_Bool)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)updateImpressionCount:(long long)arg1 promotionProgramIdentifier:(NSString *)arg2 accountIdentifier:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)updateImpressionCountsForPromotions:(NSArray *)arg1 accountIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)deleteAccountPromotion:(PKAccountPromotion *)arg1 forAccountWithIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)accountPromotionsForAccountWithIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)insertOrUpdateAccountPromotions:(NSArray *)arg1 accountIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)updateAccountPromotionsForAccountWithIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)updateAccountPromotionsForAccountWithIdentifier:(NSString *)arg1 observeCooldownPeriod:(_Bool)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)rewardsTierSummaryForTransactionSourceIdentifiers:(NSSet *)arg1 currencyCode:(NSString *)arg2 startDate:(NSDate *)arg3 endDate:(NSDate *)arg4 completion:(void (^)(PKAccountRewardsTierSummary *))arg5;
- (void)backgroundProvisionInProgressForFeature:(unsigned long long)arg1 withCompletion:(void (^)(_Bool))arg2;
- (void)triggerCloudStoreZoneCreationForAccount:(PKAccount *)arg1 withCompletion:(void (^)(_Bool))arg2;
- (void)validateAppleBalanceSecurityRequirementsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)attemptAppleBalanceSetupWithCompletion:(void (^)(NSError *))arg1;
- (void)payLaterCardMagnitudesForAccountIdentifier:(NSString *)arg1 completion:(void (^)(PKPayLaterCardMagnitudes *))arg2;
- (void)deleteFinancingPlanWithIdentifier:(NSString *)arg1 accountIdentifier:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)deleteFinancingPlansForAccountIdentifier:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)deleteFinancingPlansForAllAccountsWithCompletion:(void (^)(void))arg1;
- (void)financingPlanForPlanIdentifier:(NSString *)arg1 completion:(void (^)(PKPayLaterFinancingPlan *))arg2;
- (void)countOfFinancingPlansForAccountIdentifier:(NSString *)arg1 financingPlanStates:(NSArray *)arg2 completion:(void (^)(long long))arg3;
- (void)financingPlansForAccountIdentifier:(NSString *)arg1 withInstallmentsDueDateStart:(NSDate *)arg2 endDueDate:(NSDate *)arg3 financingPlanStates:(NSArray *)arg4 completion:(void (^)(NSArray *))arg5;
- (void)financingPlanInstallmentsDueDateRangeForAccountIdentifier:(NSString *)arg1 financingPlanStates:(NSArray *)arg2 completion:(void (^)(NSDate *, NSDate *))arg3;
- (void)financingPlansForAccountIdentifier:(NSString *)arg1 states:(NSArray *)arg2 transactionStartDate:(NSDate *)arg3 transactionEndDate:(NSDate *)arg4 limit:(long long)arg5 completion:(void (^)(NSArray *))arg6;
- (void)financingPlansForAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)financingPlansForAllAccountsWithCompletion:(void (^)(NSArray *))arg1;
- (void)updateFinancingPlansForAccountWithIdentifier:(NSString *)arg1 pageOffset:(unsigned long long)arg2 limit:(unsigned long long)arg3 ignoreLastUpdatedDate:(_Bool)arg4 forceFetch:(_Bool)arg5 completion:(void (^)(NSArray *, NSError *))arg6;
- (void)resetAccountBalancesForAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateAccountBalancesForAccountIdentifier:(NSString *)arg1 startDate:(NSDate *)arg2 endDate:(NSDate *)arg3 type:(unsigned long long)arg4 completion:(void (^)(NSArray *, NSError *))arg5;
- (void)accountBalancesForAccountIdentifier:(NSString *)arg1 startDate:(NSDate *)arg2 endDate:(NSDate *)arg3 type:(unsigned long long)arg4 completion:(void (^)(NSArray *, NSError *))arg5;
- (void)accountPendingFamilyMembersForAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)didAddAccountPendingFamilyMembers:(NSArray *)arg1;
- (void)updateSharedAccountCloudStoreWithAccountIdentifier:(NSString *)arg1 completion:(void (^)(PKSharedAccountCloudStore *, NSError *))arg2;
- (void)sharedAccountCloudStoreWithAccountIdentifier:(NSString *)arg1 completion:(void (^)(PKSharedAccountCloudStore *))arg2;
- (void)exportTransactionDataForAccountIdentifier:(NSString *)arg1 withFileFormat:(NSString *)arg2 beginDate:(NSDate *)arg3 endDate:(NSDate *)arg4 productTimeZone:(NSTimeZone *)arg5 completion:(void (^)(PKAccountWebServiceExportTransactionDataResponse *, NSError *))arg6;
- (void)markUserViewedIntroduction:(_Bool)arg1 forInstallmentIdentifiers:(NSSet *)arg2 accountIdentifier:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)scheduledPaymentsWithAccountIdentifier:(NSString *)arg1 includeFailedRecurringPayments:(_Bool)arg2 allowFetchFromServer:(_Bool)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)updateScheduledPaymentsWithAccount:(PKAccount *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(NSString *)arg1 withStartDate:(NSDate *)arg2 endDate:(NSDate *)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(NSString *)arg1 withStatementIdentifier:(NSString *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)noteSecurityCodeActivityWithAction:(long long)arg1 forSecurityCodeIdentifier:(NSString *)arg2 forVirtualCardIdentifier:(NSString *)arg3 forAccountIdentifier:(NSString *)arg4 completion:(void (^)(PKVirtualCard *, NSError *))arg5;
- (void)writeVirtualCardToKeychain:(PKVirtualCard *)arg1 completion:(void (^)(void))arg2;
- (void)virtualCardsInKeychainWithCompletion:(void (^)(NSSet *))arg1;
- (void)fetchKeychainCredentialForVirtualCardIdentifier:(NSString *)arg1 forAccountIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)noteVirtualCardAutoFilledBySafari:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)cardCredentialsForVirtualCard:(PKVirtualCard *)arg1 authorization:(NSData *)arg2 action:(long long)arg3 completion:(void (^)(PKVirtualCardCredentials *, NSError *))arg4;
- (void)updateVirtualCardsWithAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *, PKAccount *, NSError *))arg2;
- (void)performVirtualCardAction:(long long)arg1 forVirtualCardIdentifier:(NSString *)arg2 forAccountIdentifier:(NSString *)arg3 completion:(void (^)(PKVirtualCard *, PKAccount *, NSError *))arg4;
- (void)createVirtualCard:(long long)arg1 forAccountIdentifier:(NSString *)arg2 completion:(void (^)(PKVirtualCard *, PKAccount *, NSError *))arg3;
- (void)creditStatementsForAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)lastRedemptionEventToPeerPaymentForAccountIdentifier:(NSString *)arg1 altDSID:(NSString *)arg2 completion:(void (^)(PKAccountEvent *, NSError *))arg3;
- (void)insertEvents:(NSSet *)arg1 withAccountidentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)deleteEventsWithAccountIdentifier:(NSString *)arg1 excludingTypes:(NSSet *)arg2 completion:(void (^)(NSError *))arg3;
- (void)deleteEventWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)deleteEventsWithAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)eventsForAccountIdentifier:(NSString *)arg1 types:(NSArray *)arg2 startDate:(NSDate *)arg3 endDate:(NSDate *)arg4 orderedByDate:(long long)arg5 limit:(unsigned long long)arg6 completion:(void (^)(NSArray *, NSError *))arg7;
- (void)eventsForAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)insertDailyCashNotificationForAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)insertSummaryNotificationForAccountIdentifier:(NSString *)arg1 summaryType:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)scheduleSetupReminderForAccountWithIdentifier:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)activatePhysicalCardWithIdentifier:(NSString *)arg1 activationCode:(NSString *)arg2 completion:(void (^)(long long))arg3;
- (void)physicalCardForFeatureIdentifier:(unsigned long long)arg1 activationCode:(NSString *)arg2 completion:(void (^)(PKPhysicalCard *))arg3;
- (void)inactivatePhysicalCardForFeatureIdentifier:(unsigned long long)arg1 completion:(void (^)(PKPhysicalCard *))arg2;
- (void)activatePhysicalCardWithActivationCode:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)completePhysicalCardActionRequest:(PKAccountWebServicePhysicalCardActionRequest *)arg1 withSignature:(PKApplePayTrustSignature *)arg2 completion:(void (^)(NSSet *, PKAccount *, NSError *))arg3;
- (void)beginPhysicalCardAction:(PKPhysicalCardAction *)arg1 onPhysicalCardWithIdentifier:(NSString *)arg2 forAccountWithIdentifier:(NSString *)arg3 accountUserAltDSID:(NSString *)arg4 deviceMetadata:(PKPaymentDeviceMetadata *)arg5 completion:(void (^)(PKApplePayTrustSignatureRequest *, PKAccountWebServicePhysicalCardActionRequest *, NSSet *, PKAccount *, NSError *))arg6;
- (void)completePhysicalCardRequest:(PKAccountWebServiceRequestPhysicalCardRequest *)arg1 withSignature:(PKApplePayTrustSignature *)arg2 completion:(void (^)(PKPhysicalCard *, PKAccount *, NSError *))arg3;
- (void)beginPhysicalCardRequestWithOrder:(PKPhysicalCardOrder *)arg1 forAccountWithIdentifier:(NSString *)arg2 accountUserAltDSID:(NSString *)arg3 deviceMetadata:(PKPaymentDeviceMetadata *)arg4 completion:(void (^)(PKApplePayTrustSignatureRequest *, PKAccountWebServiceRequestPhysicalCardRequest *, PKPhysicalCard *, PKAccount *, NSError *))arg5;
- (void)physicalCardsForAccountWithIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *))arg2;
- (void)insertOrUpdateLocalFinancingPlans:(NSArray *)arg1 accountIdentifier:(NSString *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)insertOrUpdateLocalAccount:(PKAccount *)arg1 completion:(void (^)(PKAccount *))arg2;
- (void)updateLastUsedInAppFundingSource:(NSString *)arg1 accountIdentifier:(NSString *)arg2;
- (void)lastUsedInAppFundingSourceForAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)updatePaymentFundingSourcesForAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)paymentFundingSourceForIdentifier:(NSString *)arg1 accountIdentifier:(NSString *)arg2 completion:(void (^)(PKAccountPaymentFundingSource *))arg3;
- (void)paymentFundingSourcesForAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)updateUserInfoForAccountIdentifier:(NSString *)arg1 contact:(CNContact *)arg2 completion:(void (^)(CNContact *, NSError *))arg3;
- (void)userInfoForAccountIdentifier:(NSString *)arg1 forceFetch:(_Bool)arg2 completion:(void (^)(CNContact *, NSError *))arg3;
- (void)termsWithIdentifier:(NSString *)arg1 accepted:(_Bool)arg2 withAccountIdentifier:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)performAccountAction:(PKAccountAction *)arg1 withAccountIdentifier:(NSString *)arg2 accountUserAltDSID:(NSString *)arg3 completion:(void (^)(PKAccount *, NSError *))arg4;
- (void)defaultAccountForFeature:(unsigned long long)arg1 completion:(void (^)(PKAccount *, NSError *))arg2;
- (void)updateMockAccountWithAccount:(PKAccount *)arg1 completion:(void (^)(PKAccount *))arg2;
- (void)deleteLocalAccountWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)deleteAccountWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateAccountUserNotificationSettings:(PKAccountUserNotificationSettings *)arg1 forAccountUserWithAltDSID:(NSString *)arg2 forAccountWithIdentifier:(NSString *)arg3 completion:(void (^)(PKAccountUser *, NSError *))arg4;
- (void)updateAccountUserPreferences:(PKAccountUserPreferences *)arg1 forAccountUserWithAltDSID:(NSString *)arg2 forAccountWithIdentifier:(NSString *)arg3 completion:(void (^)(PKAccountUser *, NSError *))arg4;
- (void)deleteAccountUserWithAltDSID:(NSString *)arg1 forAccountWithIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)accountUsersForAccountWithIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *))arg2;
- (void)updateAccountUsersForAccountWithIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)updateAccountWithIdentifier:(NSString *)arg1 extended:(_Bool)arg2 completion:(void (^)(PKAccount *, NSError *))arg3;
- (void)accountForPassWithUniqueID:(NSString *)arg1 completion:(void (^)(PKAccount *))arg2;
- (void)accountWithVirtualCardIdentifier:(NSString *)arg1 completion:(void (^)(PKAccount *, NSError *))arg2;
- (void)accountWithIdentifier:(NSString *)arg1 completion:(void (^)(PKAccount *, NSError *))arg2;
- (void)updateAccountsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)accountsWithPassLocallyProvisionedWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)accountsForProvisioningWithCompletion:(void (^)(NSArray *, NSArray *, NSError *))arg1;
- (void)accountsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end

