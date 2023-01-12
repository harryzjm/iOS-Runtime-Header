//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DMCHangDetectionQueue;

@interface DMCAccountUtilities : NSObject
{
    DMCHangDetectionQueue *_signInQueue;
}

+ (id)_appleAccountWithPersonaID:(id)arg1;
+ (id)accountIdentifierForAppleAccountWithPersonaID:(id)arg1;
+ (id)managedAppleIDNameWithPersonaID:(id)arg1;
+ (id)appStoreAccountIdentifierForPersona:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) DMCHangDetectionQueue *signInQueue; // @synthesize signInQueue=_signInQueue;
- (void)signOutAllPrimaryAccounts;
- (_Bool)_signIniTunesAccountWithAuthenticationResult:(id)arg1 personaID:(id)arg2 canMakeAccountActive:(_Bool)arg3 baseViewController:(id)arg4 outError:(id *)arg5;
- (_Bool)_signIniCloudAccountWithAuthenticationResult:(id)arg1 personaID:(id)arg2 baseViewController:(id)arg3 outError:(id *)arg4;
- (void)signInAccountsWithTypes:(id)arg1 authenticationResult:(id)arg2 personaID:(id)arg3 canMakeAccountActive:(_Bool)arg4 baseViewController:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;

@end
