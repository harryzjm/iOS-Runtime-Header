//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore;

__attribute__((visibility("hidden")))
@interface ACDKeychainMigrator : NSObject
{
    ACAccountStore *_accountStore;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_keychainItemFromAttributesArray:(id)arg1;
- (id)_keychainItemFromAttributes:(id)arg1;
- (id)_keychainItemsForAccount:(id)arg1 accountTypeIdentifiers:(id)arg2;
- (id)keychainItemsForAccounts:(id)arg1;
- (id)allKeychainItems;
- (void)_migrateUUIDKeychainItems:(id)arg1;
- (void)_validateKeychainItemClass:(id)arg1;
- (_Bool)migrateKeychainItem:(id)arg1 toKeybag:(_Bool)arg2;
- (void)migrateAllKeychainItems;
- (id)init;

@end
