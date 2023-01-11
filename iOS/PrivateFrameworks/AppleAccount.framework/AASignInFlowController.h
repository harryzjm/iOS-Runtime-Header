//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, CDPContext, CUMessageSession;
@protocol AASignInFlowControllerDelegate, CDPStateUIProvider;

@interface AASignInFlowController : NSObject
{
    ACAccountStore *_accountStore;
    CDPContext *_cdpContextForAccount;
    _Bool _pendingSignIn;
    _Bool _existingAccount;
    _Bool _shouldAutomaticallySaveSignInResults;
    _Bool _ignoreLockAssertErrors;
    id <AASignInFlowControllerDelegate> _delegate;
    id <CDPStateUIProvider> _cdpUIProvider;
    CUMessageSession *_messageSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CUMessageSession *messageSession; // @synthesize messageSession=_messageSession;
@property(nonatomic) _Bool ignoreLockAssertErrors; // @synthesize ignoreLockAssertErrors=_ignoreLockAssertErrors;
@property(nonatomic) _Bool shouldAutomaticallySaveSignInResults; // @synthesize shouldAutomaticallySaveSignInResults=_shouldAutomaticallySaveSignInResults;
@property(nonatomic) __weak id <CDPStateUIProvider> cdpUIProvider; // @synthesize cdpUIProvider=_cdpUIProvider;
@property(nonatomic) __weak id <AASignInFlowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prewarmOperationsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_userPersonaUniqueString;
- (void)_stashLoginResponseWithAuthenticationResults:(id)arg1 appleAccount:(id)arg2;
- (_Bool)_shouldStashLoginResponse;
- (_Bool)_shouldEnableDataclassesForAccount:(id)arg1;
- (unsigned long long)_findMyActivationAction;
- (_Bool)_delegateRequiresTerms;
- (_Bool)_delegateWantsToBackgroundDataclassEnablement;
- (_Bool)_delegateWantsToSkipDataclassEnablement;
- (_Bool)_isDuplicateAccountError:(long long)arg1;
- (id)_aaMessageForErrorCode:(long long)arg1;
- (id)_aaErrorForErrorCode:(long long)arg1 withUnderlyingError:(id)arg2;
- (id)_aaErrorForErrorCode:(long long)arg1;
- (id)_titleForVerificationFailureAlert;
- (id)_titleForSignInFailureAlert;
- (id)_nameForCloudService;
- (void)_delegate_enableFindMyWithCompletion:(CDUnknownBlockType)arg1;
- (void)_delegate_presentValidationAlertForError:(id)arg1 forAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_delegate_presentGenericTermsUIforAccount:(id)arg1 serverError:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_delegate_presentAccountCreationError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_saveAccount:(id)arg1 withDataclassEnablement:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_delegate_saveAccount:(id)arg1 withDataclassEnablement:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_backgroundSaveAccount:(id)arg1 withDataclassEnablement:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_saveAccount:(id)arg1 withAllDataclassesEnabledIfPossibleWithCompletion:(CDUnknownBlockType)arg2;
- (void)_enableFindMyIfPossibleWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_validateCDPStateForAccount:(id)arg1 withCDPContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_verifyLoginResponseForiCloudAccount:(id)arg1 withSuccess:(_Bool)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_registerAndVerifyLoginForiCloudAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_updateAppleAccountIfNecessary:(id)arg1 withAltDSID:(id)arg2 rawPassword:(id)arg3;
- (void)_updateAppleAccount:(id)arg1 withAuthenticationResults:(id)arg2;
- (void)_createCDPContextForPrimaryAccount:(id)arg1 withAuthResults:(id)arg2;
- (id)_createNewAppleAccountWithAuthResults:(id)arg1 accountCreationError:(id *)arg2;
- (void)_saveTermsWithAuthResults:(id)arg1 account:(id)arg2;
- (void)_prepareExistingAppleAccountForSignIn:(id)arg1 withAuthResults:(id)arg2 accountCreationError:(id *)arg3;
- (id)_updateOrCreateAppleAccountForAuthResults:(id)arg1 accountCreationError:(id *)arg2;
- (void)signInWithIDMSAuthenticationResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
