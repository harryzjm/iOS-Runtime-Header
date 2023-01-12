//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FLFollowUpController, NSNumber, NSURLSession, _ICQAccountManager;

@interface ICQDaemonOfferManager : NSObject
{
    NSURLSession *_sharedURLSession;
    FLFollowUpController *_followUpController;
    _ICQAccountManager *_accountManager;
}

+ (id)getCkBackupDeviceIDWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)ckBackupDeviceID;
+ (id)sharedDaemonOfferManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURLSession *sharedURLSession; // @synthesize sharedURLSession=_sharedURLSession;
@property(readonly, nonatomic) _ICQAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(nonatomic, getter=isLegacyDeviceStorageLevelNotificationEnabled) _Bool legacyDeviceStorageLevelNotificationEnabled;
@property(retain, nonatomic) NSNumber *simulatedPhotosLibrarySize;
@property(nonatomic, getter=isBuddyOfferEnabled) _Bool buddyOfferEnabled;
@property(nonatomic, getter=isSimulatedDeviceStorageAlmostFull) _Bool simulatedDeviceStorageAlmostFull;
@property(nonatomic) _Bool shouldDirectToStorageManagement;
- (void)teardownCachedOffers;
- (void)tearDownCachedPremiumOffer;
- (void)teardownCachedBuddyOffer;
- (void)teardownCachedOffer;
- (void)forcePostFollowup;
- (void)_postOfferType:(id)arg1 isForBuddy:(_Bool)arg2;
- (void)postBuddyOfferType:(id)arg1;
- (void)postOfferType:(id)arg1;
- (void)_postFollowupForDaemonOffer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_logErrorsForFetchOfferResultWithOffer:(id)arg1 error:(id)arg2 isForBuddy:(_Bool)arg3;
- (void)_handlerMultipleStubs:(id)arg1 forAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_getFetchOfferStubsFromStubs:(id)arg1;
- (id)_getStubsForRequestType:(long long)arg1 fromDaemonStubs:(id)arg2;
- (void)_reconsiderOffersForAccount:(id)arg1 isForBuddy:(_Bool)arg2 quotaReason:(id)arg3 options:(id)arg4 choiceHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_reconsiderOffersForAccount:(id)arg1 isForBuddy:(_Bool)arg2 quotaReason:(id)arg3 choiceHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_placeholderOfferForAccount:(id)arg1 isForPremium:(_Bool)arg2 isForBuddy:(_Bool)arg3 error:(id)arg4;
- (void)_teardownCachedOffersAndNotify:(_Bool)arg1;
- (void)_teardownCachedPremiumOfferAndNotify:(_Bool)arg1;
- (void)_teardownCachedBuddyOffer;
- (void)_teardownCachedDefaultOfferAndNotify:(_Bool)arg1;
- (void)_teardownCachedOfferAndNotify:(_Bool)arg1;
- (void)_updateOffer:(id)arg1 buttonId:(id)arg2 info:(id)arg3 account:(id)arg4 accountStore:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)updateOfferForAccount:(id)arg1 offerId:(id)arg2 buttonId:(id)arg3 info:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_postDaemonOfferChangedDueToPushDarwinNotificationRequestType:(long long)arg1;
- (void)_showDaemonAlertForOffer:(id)arg1 notificationDictionary:(id)arg2 store:(id)arg3 account:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_fetchDaemonOfferStubsForAccount:(id)arg1 isForBuddy:(_Bool)arg2 quotaReason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchDaemonOfferForAccount:(id)arg1 stub:(id)arg2 notificationID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateQuotaForAccount:(id)arg1 withServerDictionary:(id)arg2;
- (void)_mockFetchDictionaryForAccount:(id)arg1 quotaKey:(id)arg2 stub:(id)arg3 notificationID:(id)arg4 contextDictionary:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)addPremiumOffersHeaderIfNeededForRequest:(id)arg1;
- (void)_fetchDictionaryForAccount:(id)arg1 quotaKey:(id)arg2 quotaReason:(id)arg3 stub:(id)arg4 notificationID:(id)arg5 contextDictionary:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (_Bool)_isBackupEnabledForAccount:(id)arg1;
- (void)_addEntriesToPostDictionary:(id)arg1 forStub:(id)arg2;
- (_Bool)_attemptSetRequest:(id)arg1 toPostWithJSONDict:(id)arg2;
- (void)_addCommonHeadersToRequest:(id)arg1 account:(id)arg2;
- (id)URLForAccount:(id)arg1 quotaKey:(id)arg2;
- (void)_processPushNotificationDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processPushNotificationCheckHardwareIDWithDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isCacheValidForRequestType:(long long)arg1 offerStubs:(id)arg2;
- (void)_daemonOfferStubsDictionaryForAccount:(id)arg1 requestType:(long long)arg2 quotaReason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_useFetchOffersDataDirectly;
- (unsigned long long)daemonOfferSource;
- (void)clearFollowupsIsPremiumOffer:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearAllFollowupsWithCompletion:(CDUnknownBlockType)arg1;
- (void)reconsiderOffersWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reconsiderOffersWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopDirectingToStorageManagement;
- (void)startDirectingToStorageManagement;
- (void)_clearStorageManagementFollowup;
- (void)_postStorageManagementFollowup;
- (id)_storageManagementFollowupItem;
- (id)_storageManagementFollowupNotification;
- (id)_storageManagementFollowupActions;
- (void)renewCredentialsWithCompletion:(CDUnknownBlockType)arg1;
- (void)addCommonHeadersToRequest:(id)arg1;
- (id)soonestOfferOrStubExpirationDate;
- (void)teardownOffersForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processPushNotificationDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)daemonBuddyOfferDictionaryForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (Class)daemonOfferClassFromBundleId:(id)arg1 options:(id)arg2;
- (CDUnknownBlockType)_getHandlerForBundleId:(id)arg1 options:(id)arg2;
- (void)daemonOfferDictionaryForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAccountManager:(id)arg1;
- (id)init;

@end
