//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface AccountsManager : NSObject
{
    NSMutableDictionary *_topLevelAccountsByID;
    NSMutableArray *_orderedTopLevelAccounts;
    NSMutableDictionary *_childAccountsByID;
    NSMutableDictionary *_childAccountIDToParentAccountID;
    NSMutableDictionary *_originalAccountsByID;
    unsigned long long _dataVersion;
    NSArray *_runtimeFixers;
}

+ (id)_notifierClassNamesForAccountType:(id)arg1 dataclass:(id)arg2;
+ (id)displayNameForGroupOfAccountType:(id)arg1 forBeginningOfSentence:(_Bool)arg2;
+ (void)accountDidChange:(id)arg1 forDataclass:(id)arg2;
+ (void)accountWillChange:(id)arg1 forDataclass:(id)arg2;
+ (void)_setShouldSkipNotifications:(_Bool)arg1;
+ (id)fullPathToAccountSettingsPlist;
+ (unsigned long long)currentVersion;
+ (_Bool)_oldMailAccountsInformationFound;
+ (_Bool)_oldDAAccountsInformationFound;
+ (_Bool)accountSettingsNeedsToBeMigrated;
+ (void)shouldMigrateOldMailAccounts:(_Bool *)arg1 oldDAAccounts:(_Bool *)arg2 newAccountSettings:(_Bool *)arg3;
+ (void)removeNewAccountSettingsToMigrateOldAccountInformation;
+ (void)waitForMigrationToFinish;
+ (void)releaseMigrationLock:(id)arg1;
+ (id)createAndLockMigrationLock;
- (void)_sendNotificationsForChangedAccounts;
- (void)_addNotificationToDictionary:(id)arg1 forChangeType:(int)arg2 originalProperties:(id)arg3 currentProperties:(id)arg4;
- (void)_setOriginalAccountDictionaries;
- (unsigned long long)countOfBasicAccountsWithTypes:(id)arg1;
- (id)_createRuntimeFixers;
- (id)_initWithAccountsInfo:(id)arg1;
- (void)_loadChildrenFromAccount:(id)arg1;
- (void)_removeChildrenForAccountWithIdentifier:(id)arg1;
- (void)saveAllAccounts;
- (id)mergeInMemoryProperties:(id)arg1 originalProperties:(id)arg2 onDiskProperties:(id)arg3;
- (void)addChild:(id)arg1 toAccount:(id)arg2;
- (void)removeChildWithIdentifier:(id)arg1 fromAccount:(id)arg2;
- (void)replaceAccountsWithTypes:(id)arg1 withAccounts:(id)arg2;
- (void)replaceAccount:(id)arg1 withAccount:(id)arg2;
- (void)deleteAccountWithIdentifier:(id)arg1;
- (void)deleteAccount:(id)arg1;
- (void)insertAccount:(id)arg1;
- (void)updateAccount:(id)arg1;
- (unsigned long long)count;
- (id)accountsWithTypes:(id)arg1 withLoader:(id)arg2;
- (id)accountsWithTypes:(id)arg1;
- (id)allMailAccounts;
- (id)fullAccountWithIdentifier:(id)arg1 loader:(id)arg2;
- (id)fullDeviceLocalAccount;
- (id)basicAccountsWithTypes:(id)arg1;
- (id)allBasicSyncableAccounts;
- (id)allBasicAccounts;
- (id)syncableAccountWithSyncIdentifier:(id)arg1;
- (id)displayAccountWithSyncIdentifier:(id)arg1;
- (id)accountWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (unsigned long long)dataVersion;
- (id)initInsideOfMigration;
- (id)initWithAccounsInfoArray:(id)arg1;
- (void)setDataVersion:(unsigned long long)arg1;

@end

