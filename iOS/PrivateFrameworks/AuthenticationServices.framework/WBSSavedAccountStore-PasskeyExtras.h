//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariCore/WBSSavedAccountStore.h>

@interface WBSSavedAccountStore (PasskeyExtras)
+ (id)importPasskeyCredential:(id)arg1;
+ (id)exportPasskeyCredentialWithID:(id)arg1;
+ (void)updateUserVisibleName:(id)arg1 forPasskeyWithIdentifier:(id)arg2;
+ (void)deletePasskeyWithIdentifier:(id)arg1;
+ (id)_passkeyDataForPasskeyCredentialID:(id)arg1;
+ (id)passkeyDataForPasskeyCredentialID:(id)arg1;
+ (id)allPasskeysData;
@end

