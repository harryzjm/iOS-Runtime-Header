//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACDDatabaseConnection, NSArray;

__attribute__((visibility("hidden")))
@interface ACDDatabaseInitializer : NSObject
{
    ACDDatabaseConnection *_databaseConnection;
    NSArray *_dataclasses;
    NSArray *_accountTypes;
    NSArray *_accounts;
    NSArray *_accessKeys;
}

+ (id)new;
- (void).cxx_destruct;
- (void)_addWarmingUpAttributeToAccounts;
- (_Bool)_ensureAllDataclassesExist;
- (_Bool)_ensureAllInternalAccountTypesExist:(_Bool)arg1;
- (id)_managedDataclassesSetForNames:(id)arg1;
- (void)_addPublishedCalendarAccountType;
- (void)_addRemoteManagementAccountType;
- (void)_removeRedundantDataclasses;
- (void)_aolSupportsAuthentication;
- (void)_switchAolAccountsToOAuth;
- (void)_removeBTMMType;
- (void)_changeSocialAccountTypeObsoleteAttributes;
- (void)_changeFacebookAndLinkedInAccountsToLegacyAccountTypes;
- (void)_addLinkedInLegacyAccountType;
- (void)_addiTunesStoreSandboxAccountType;
- (void)_removeMessagesFromAOLSupportedDataclasses;
- (void)_addObsoleteAttributeToAccountTypes;
- (void)_changeFacebookAccountToLegacyAccountType;
- (void)_addFacebookAndDAVLegacyAccountTypes;
- (void)_removeAIMAccounts;
- (void)_removeMessagesFromGoogleSupportedDataclasses;
- (void)_setCloudKitAllowsMultipleAccounts;
- (void)_setYahooAccountsProvisionedDataclassesToSupportedOnes;
- (void)_removeMessengerFromYahooSupportedDataclasses;
- (void)_addNotesDataclassToAASupportedDataclasses;
- (void)_setSupportedDataclassesForAOLAccountType;
- (void)_supportiCloudKeychainSyncDataclass;
- (void)_ensurePresenceOfNewsDataclass;
- (void)_supportiCloudNewsDataclass;
- (void)_makeTudouYoukuSingletons;
- (void)_allowMultipleAppleIDAuthenticationAccounts;
- (void)_configureSMTPAccountType;
- (void)_switchYahooToOAuthAuthentication;
- (void)_addOnMyDeviceAccountType;
- (id)_modernOnMyDeviceSupportedDataclasses;
- (void)_updateAOLAndAddNotificationsDataclass;
- (void)_addSingleSignOnAccountType;
- (void)_addMSOAccountType;
- (void)_addIDMSAccountType;
- (void)_addDocumentsAndVPNDataclass;
- (void)_switchYahooToPasswordAuthentication;
- (void)_switchHotmailToOAuthAuthentication;
- (void)_switchGoogleToOAuthAuthentication;
- (void)_addAndConfigureAllOSXAccountTypes;
- (void)_addOSXServerAccountType;
- (void)_addAIMAccountType;
- (void)_addYahooIMAccountType;
- (void)_addJabberAccountType;
- (void)_addQQAccountType;
- (void)_addAOLAccountType;
- (void)_add163AccountType;
- (void)_add126AccountType;
- (void)_setCloudKitCredentialType;
- (void)_addCloudKitDataclasses;
- (void)_removeLiverpoolTypes;
- (void)_addAccessKeysAttributeToCloudKitAccountType;
- (void)_addCloudKitAccountType;
- (void)_createLiverpoolDataclasses;
- (void)_setOwningBundleIDForNativeAccountTypes;
- (void)_addAppleIDAuthenticationAccountType;
- (void)_addFMFAccountType;
- (void)_addHolidayCalendarAccountType;
- (id)_modernHolidayCalendarSupportedAndSyncableDataclasses;
- (void)_makeTencentWeiboSingleton;
- (void)_updateMacOSServerAccountDescription;
- (void)_updateOSXServerAccountDescription;
- (void)_updateIdentityServicesAccountDescription;
- (void)_updateIdentityServicesAccountTypeToSupportAuthenticationAndMultipleAccounts;
- (void)_addAccessKeysAttributeToTencentWeiboAccountType;
- (void)_addTencentWeiboAccessKeys;
- (void)_addFindMyiPhoneAccountType;
- (id)_modernDeviceLocatiorSupportedDataclasses;
- (void)_updateTencentWeiboCredentialTypeToOAuth2;
- (void)_limitLinkedInToOneAccount;
- (void)_addIdentityServicesAccountType;
- (void)_addIMAPMailAccountType;
- (id)_modernIMAPMailSupportedAndSyncableDataclasses;
- (void)_addPOPAccountType;
- (id)_modernPOPSupportedAndSyncableDataclasses;
- (void)_addIMAPAccountType;
- (id)_modernIMAPSyncableDataclasses;
- (id)_modernIMAPSupportedDataclasses;
- (void)_addTokenCredentialTypeToYahooAccountType;
- (void)_addPasswordCredentialTypeToGmailAccountType;
- (void)_addPasswordCredentialTypeToSMTPAccountType;
- (void)_ensureProperAccountTypeDataclasses;
- (void)_ensureMajorDataclassesExist;
- (void)_ensureAccountTypeWithIdentifier:(id)arg1 supportsDataclasses:(id)arg2 syncsDataclasses:(id)arg3;
- (void)_addHotmailAccountType;
- (void)_addLDAPAccountType;
- (void)_addIMAPNotesAccountType;
- (void)_addExchangeAccountType;
- (void)_addBookmarkDAVAccountType;
- (void)_addSubscribedCalendarAccountType;
- (void)_updateVimeoCredentialTypeToOAuth;
- (void)_updateFlickrCredentialTypeToOAuth;
- (void)_limitVimeoToOneAccount;
- (void)_limitFlickrToOneAccount;
- (void)_addAccessKeysAttributeToLinkedInAccountType;
- (void)_addLinkedInAccessKeys;
- (void)_addRemindersDataclassToCalDAVAccountType;
- (void)_addYahooAccountType;
- (void)_addGmailAccountType;
- (void)_addSMTPAccountType;
- (void)_addFacebookAudienceAccessKeyToFacebookAccountType;
- (void)_addFacebookAudienceAccessKey;
- (void)_removeFacebookAppVersionAccessKey;
- (void)_removeFacebookPermissionGroupAccessKey;
- (void)_addAccessKeysAttributeToLiverpoolAccountType;
- (void)_addAccessKeysAttributeToFacebookAccountType;
- (void)_addLiverpoolAccessKeys;
- (void)_addFacebookAccessKeys;
- (void)_addSupportsMultipleAccountsAttributeToAccountTypes;
- (void)_addSyncableDataclassesToCardAndCalDAV;
- (void)_addMissingAccountTypes;
- (void)_addSupportsAuthenticationAttributeToAccounts;
- (void)_addSupportsAuthenticationAttributeToAccountTypes;
- (void)_addContactsCalendarsDataclassesToFB;
- (void)_upgradeLinkedInAccountType;
- (void)_addTencentWeiboAccountType;
- (void)_addLiverpoolAccountType;
- (void)_addAppleAccountType;
- (void)_addYelpAccountType;
- (void)_addYoukuAccountType;
- (void)_addTudouAccountType;
- (void)_addLinkedInAccountType;
- (void)_addVimeoAccountType;
- (void)_addFlickrAccountType;
- (void)_addCardDAVAccountType;
- (void)_addCalDAVAccountType;
- (void)_updateWeiboAccountTypeIfNecessary;
- (void)_addWeiboAccountType;
- (void)_addFacebookAccountType;
- (void)_addiTunesStoreAccountType;
- (void)_addGameCenterAccountType;
- (void)_addMadridAccountType;
- (void)_addFaceTimeAccountType;
- (void)_addAppleIDAccountType;
- (void)_addTwitterAccountType;
- (void)_addAccessKeyWithName:(id)arg1;
- (void)_addDataclassWithName:(id)arg1;
- (void)_addCredentialType:(id)arg1 toAccountType:(id)arg2 supportsAuthentication:(_Bool)arg3;
- (id)_addAccountTypeWithIdentifier:(id)arg1 displayName:(id)arg2 visibility:(int)arg3 supportedDataclasses:(id)arg4 syncableDataclasses:(id)arg5 credentialType:(id)arg6 supportsAuthentication:(_Bool)arg7 supportsMultipleAccounts:(_Bool)arg8 credentialProtectionPolicy:(id)arg9;
- (id)_addAccountTypeWithIdentifier:(id)arg1 displayName:(id)arg2 visibility:(int)arg3 supportedDataclasses:(id)arg4 syncableDataclasses:(id)arg5 credentialType:(id)arg6 supportsAuthentication:(_Bool)arg7 supportsMultipleAccounts:(_Bool)arg8;
- (id)_addAccountTypeWithIdentifier:(id)arg1 displayName:(id)arg2 visibility:(int)arg3 supportedDataclasses:(id)arg4 credentialType:(id)arg5 supportsAuthentication:(_Bool)arg6 supportsMultipleAccounts:(_Bool)arg7;
- (id)_accessKeyWithName:(id)arg1;
- (id)_accountTypeWithIdentifier:(id)arg1;
- (id)_dataclassWithName:(id)arg1;
- (id)_accessKeys;
- (id)_dataclasses;
- (id)_accountTypes;
- (id)_accounts;
- (id)_resultsForEntityNamed:(id)arg1;
- (_Bool)updateDefaultContentIfNecessary:(id *)arg1;
- (id)initWithDatabaseConnection:(id)arg1;
- (id)init;

@end

