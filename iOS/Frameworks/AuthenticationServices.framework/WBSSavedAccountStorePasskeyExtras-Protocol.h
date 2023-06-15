//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString, WBSPair, WBSPublicKeyCredentialIdentifier;

@protocol WBSSavedAccountStorePasskeyExtras
+ (NSArray *)recentlyDeletedPasskeysData;
+ (NSArray *)passkeysData;
+ (NSString *)importPasskeyCredential:(WBSPair *)arg1;
+ (WBSPair *)exportPasskeyCredentialWithID:(NSString *)arg1;
+ (void)deletePasskeyWithIdentifier:(WBSPublicKeyCredentialIdentifier *)arg1;
+ (void)updateUserVisibleName:(NSString *)arg1 forPasskeyWithIdentifier:(WBSPublicKeyCredentialIdentifier *)arg2;
+ (NSArray *)passkeyDataForPasskeyCredentialID:(NSData *)arg1;
@end

