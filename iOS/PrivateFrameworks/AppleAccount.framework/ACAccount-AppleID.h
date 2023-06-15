//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccount.h>

@class AARegionInfo, AASuspensionInfo, NSArray, NSDictionary, NSNumber, NSString;

@interface ACAccount (AppleID)
- (_Bool)canRemoveAccount;
- (id)_registeredBundles;
- (id)normalizedDSID;
- (id)dsid;
- (void)setDSID:(id)arg1;
- (id)appleID;
- (id)initWithAppleID:(id)arg1 password:(id)arg2;
- (void)storeOriginalUsername;
- (_Bool)aa_isDuplicateAccount:(id)arg1;
- (_Bool)_aa_isExistingAccount:(id)arg1;
- (_Bool)aa_hasDuplicateAccount;
- (void)_aa_setDataclassProperties:(id)arg1;
- (_Bool)aa_updateTokensWithProvisioningResponse:(id)arg1;
- (void)aa_updateWithProvisioningResponse:(id)arg1;
- (void)aa_setUseCellular:(_Bool)arg1 forDataclass:(id)arg2;
- (_Bool)aa_useCellularForDataclass:(id)arg1;
- (id)aa_hsaTokenWithError:(id *)arg1;
- (id)aa_authTokenWithError:(id *)arg1;
- (void)aa_setMDMServerToken:(id)arg1;
@property(readonly, nonatomic) NSString *aa_mdmServerToken;
- (void)aa_setMapsToken:(id)arg1;
@property(readonly, nonatomic) NSString *aa_mapsToken;
@property(readonly, nonatomic) NSString *aa_fmipToken;
@property(copy, nonatomic, setter=aa_setAuthToken:) NSString *aa_authToken;
@property(copy, nonatomic, setter=aa_setPassword:) NSString *aa_password;
- (void)_aa_setPrimaryAccountUpdaterVersion:(id)arg1;
- (id)_aa_primaryAccountUpdaterVersion;
@property(readonly, nonatomic) ACAccount *aa_childMailAccount;
@property(readonly, nonatomic) ACAccount *aa_cloudKitAccount;
@property(readonly, nonatomic) ACAccount *aa_fmipAccount;
@property(readonly, nonatomic) ACAccount *aa_fmfAccount;
@property(nonatomic, setter=_aa_setBenefactorAccount:) _Bool _aa_benefactorAccount;
- (void)_aa_setAppProvidedContext:(id)arg1;
- (id)_aa_appProvidedContext;
- (void)_aa_setLastAgreedTermsInfo:(id)arg1;
@property(readonly, nonatomic) NSDictionary *aa_lastAgreedTermsInfo;
@property(readonly, nonatomic) _Bool aa_isFamilyEligible;
- (_Bool)_hasMailDataclassProperties;
- (_Bool)_dataclassIsDisabledForProperties:(id)arg1;
- (_Bool)aa_serverDisabledDataclass:(id)arg1;
@property(readonly, nonatomic) _Bool aa_needsEmailConfiguration;
@property(nonatomic, setter=aa_setRepairState:) NSNumber *aa_repairState;
@property(copy, nonatomic, setter=aa_setLastKnownQuota:) NSNumber *aa_lastKnownQuota;
@property(readonly, nonatomic) _Bool aa_hasOptionalTerms;
@property(readonly, nonatomic) _Bool aa_isAuthKitAccount;
@property(readonly, nonatomic) _Bool aa_isSandboxAccount;
@property(readonly, nonatomic) _Bool aa_isRemindersAutoMigratableToCK;
@property(readonly, nonatomic) _Bool aa_isRemindersMigrated;
@property(readonly, nonatomic) _Bool aa_isNotesMigrated;
@property(readonly, nonatomic) _Bool aa_isManagedAppleID;
@property(readonly, nonatomic) _Bool aa_isUnremovableRemotelyManagedAccount;
@property(readonly, nonatomic) _Bool aa_isRemotelyManaged;
@property(readonly, nonatomic) _Bool aa_isUsingiCloud;
@property(nonatomic, setter=aa_setCloudDocsMigrationComplete:) _Bool aa_isCloudDocsMigrationComplete;
@property(nonatomic, setter=aa_setIsCloudSubscriber:) _Bool aa_isCloudSubscriber;
@property(nonatomic, setter=aa_setUsesCloudDocs:) _Bool aa_isUsingCloudDocs;
@property(readonly, copy, nonatomic) AASuspensionInfo *aa_suspensionInfo;
@property(readonly, nonatomic) _Bool aa_isSuspended;
@property(nonatomic, setter=aa_setNeedsToVerifyTerms:) _Bool aa_needsToVerifyTerms;
@property(nonatomic, setter=aa_setPrimaryEmailVerified:) _Bool aa_isPrimaryEmailVerified;
- (_Bool)aa_updateAccountClassIfNecessary;
@property(copy, nonatomic, setter=aa_setAccountClass:) NSString *aa_accountClass;
- (_Bool)aa_isAccountClass:(id)arg1;
@property(nonatomic, setter=aa_setPrimaryAccount:) _Bool aa_isPrimaryAccount;
@property(readonly, nonatomic) NSString *aa_normalizedPersonID;
@property(readonly, copy, nonatomic) AARegionInfo *aa_regionInfo;
@property(readonly, copy, nonatomic) NSString *aa_fullName;
@property(copy, nonatomic, setter=aa_setLastName:) NSString *aa_lastName;
@property(copy, nonatomic, setter=aa_setMiddleName:) NSString *aa_middleName;
@property(copy, nonatomic, setter=aa_setFirstName:) NSString *aa_firstName;
@property(readonly, nonatomic) NSString *aa_altDSID;
@property(readonly, nonatomic) NSString *aa_personID;
@property(readonly, nonatomic) NSArray *aa_appleIDAliases;
@property(readonly, nonatomic) NSString *aa_appleId;
@property(readonly, nonatomic) NSString *aa_primaryEmail;
@property(readonly, nonatomic) NSString *aa_formattedUsername;
@property(readonly, nonatomic) NSDictionary *aa_accountFirstDisplayAlert;
@property(readonly, nonatomic) NSDictionary *aa_accountFooterButton;
@property(readonly, nonatomic) NSString *aa_accountFooterText;
@property(readonly, nonatomic) NSString *aa_accountTypeString;
@property(readonly, nonatomic) NSString *aa_syncStoreIdentifier;
@property(readonly, nonatomic) NSString *aa_displayName;
@property(readonly, nonatomic) NSString *aa_protocolVersion;
@property(readonly, nonatomic) NSDictionary *aa_serviceUnavailableInfo;
@property(readonly, nonatomic) _Bool aa_serviceUnavailable;
@property(readonly, nonatomic) _Bool aa_needsRegistration;
@property(nonatomic, setter=aa_setSyncedAccount:) _Bool aa_isSyncedAccount;
- (void)_aa_clearRawPassword;
- (void)_aa_setRawPassword:(id)arg1;
- (id)_aa_rawPassword;
- (void)_aa_setPrimaryEmail:(id)arg1;
- (void)_aa_setAltDSID:(id)arg1;
- (void)_aa_setPersonID:(id)arg1;
- (void)_aa_setAppleID:(id)arg1;
@end

