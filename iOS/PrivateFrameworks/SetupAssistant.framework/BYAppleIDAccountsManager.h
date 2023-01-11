//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AALoginPluginManager, AASetupAssistantService, AAStorableLoginContext;

@interface BYAppleIDAccountsManager : NSObject
{
    AALoginPluginManager *_appleIDLoginPluginManager;
    AAStorableLoginContext *_storedLoginContext;
    AASetupAssistantService *_aaService;
}

+ (id)sharedManager;
@property(retain, nonatomic, setter=setAAService:) AASetupAssistantService *aaService; // @synthesize aaService=_aaService;
- (void).cxx_destruct;
- (void)clearStoredLoginContext;
- (id)storedLoginContext;
- (void)performSilentICDPUpgrade;
- (void)attemptPostRestoreRenewForAccount:(id)arg1 loginContext:(id)arg2 allowFollowUp:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)repeatedlyAttemptPostRestoreRenewForAccount:(id)arg1 loginContext:(id)arg2 numberOfAttemptsAllowed:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)runPostRestoreRenewCredentialsIfNeeded;
- (void)enableDataClassesForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loginDelegateAccountsWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 skipiTunes:(_Bool)arg4 onlyAppleIDPlugin:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (id)init;
- (id)initForDelegateBundleIDs:(id)arg1;

@end

