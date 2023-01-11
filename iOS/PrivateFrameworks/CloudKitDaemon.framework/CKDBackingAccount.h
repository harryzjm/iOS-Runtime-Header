//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore, NSPersonNameComponents, NSString, NSURL;

@interface CKDBackingAccount : NSObject
{
    _Bool _iCloudDriveAllowsCellularAccess;
    ACAccountStore *_accountStore;
    ACAccount *_appleAccount;
}

+ (void)deviceCountForAccount:(id)arg1 ignoreCache:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)ensureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2;
+ (_Bool)_lockedEnsureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2;
+ (id)accountQueue;
+ (id)fakeAccountWithEmail:(id)arg1 password:(id)arg2 inStore:(id)arg3 propertyOverrides:(id)arg4 overridesByDataclass:(id)arg5;
+ (id)primaryAccountInStore:(id)arg1;
+ (id)accountWithIdentifier:(id)arg1 inStore:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) ACAccount *appleAccount; // @synthesize appleAccount=_appleAccount;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(readonly, nonatomic) _Bool iCloudDriveAllowsCellularAccess; // @synthesize iCloudDriveAllowsCellularAccess=_iCloudDriveAllowsCellularAccess;
- (void)deviceCountWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *personaIdentifier;
@property(readonly, nonatomic) NSString *sharingURLHostname;
@property(readonly, nonatomic) NSURL *privateMetricsServiceURL;
- (id)privateCodeServiceURLPreferringGateway:(_Bool)arg1;
@property(readonly, nonatomic) NSURL *privateCodeServiceURL;
@property(readonly, nonatomic) NSURL *privateDeviceServiceURL;
@property(readonly, nonatomic) NSURL *privateShareServiceURL;
@property(readonly, nonatomic) NSURL *privateCloudDBURL;
- (id)urlForDataclass:(id)arg1;
- (id)urlForDataclass:(id)arg1 preferringGateway:(_Bool)arg2;
- (void)_setOverridesOnVettingContext:(id)arg1;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)accountPropertiesForDataclass:(id)arg1;
@property(readonly, nonatomic) _Bool isFakeAccount;
@property(readonly, nonatomic) NSString *serverPreferredPushEnvironment;
- (_Bool)canRenew;
- (id)iCloudAuthTokenWithError:(id *)arg1;
- (id)cloudKitAuthTokenWithError:(id *)arg1;
- (id)_accountCredentialForAccount:(id)arg1 withError:(id *)arg2;
- (_Bool)isDataclassEnabledForCellular:(id)arg1;
- (_Bool)isDataclassEnabled:(id)arg1;
@property(readonly, nonatomic) _Bool isPrimaryEmailVerified;
@property(readonly, nonatomic) NSString *displayedHostname;
@property(readonly, nonatomic) NSPersonNameComponents *fullName;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *dsid;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *primaryEmail;
@property(readonly, nonatomic) ACAccount *ckAccount;
- (id)init;
- (id)_initWithAccountStore:(id)arg1;

@end
