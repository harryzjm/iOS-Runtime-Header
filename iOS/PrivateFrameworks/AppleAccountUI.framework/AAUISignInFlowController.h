//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/AAUIAccountRepairRemoteUIDelegate-Protocol.h>
#import <AppleAccountUI/AAUIGenericTermsRemoteUIDelegate-Protocol.h>
#import <AppleAccountUI/AAUISignInOperationDelegate-Protocol.h>

@class AAUIAccountRepairRemoteUI, AAUIGenericTermsRemoteUI, ACAccountStore, ACAccountType, CUMessageSession, NSLock, NSMutableDictionary, NSString, UIViewController;

@interface AAUISignInFlowController : NSObject <AAUIAccountRepairRemoteUIDelegate, AAUIGenericTermsRemoteUIDelegate, AAUISignInOperationDelegate>
{
    ACAccountStore *_accountStore;
    ACAccountType *_appleAccountType;
    AAUIGenericTermsRemoteUI *_genericTermsRemoteUI;
    AAUIAccountRepairRemoteUI *_accountRepairRemoteUI;
    CDUnknownBlockType _pendingCompletion;
    NSMutableDictionary *_cdpContextsByAccountID;
    NSLock *_cdpContextsByAccountIDLock;
    _Bool _shouldAutomaticallySaveSignInResults;
    _Bool _shouldStashLoginResponse;
    UIViewController *_presentingViewController;
    CUMessageSession *_messageSession;
    unsigned long long _activationAction;
}

@property(nonatomic) _Bool shouldStashLoginResponse; // @synthesize shouldStashLoginResponse=_shouldStashLoginResponse;
@property(nonatomic) unsigned long long activationAction; // @synthesize activationAction=_activationAction;
@property(retain, nonatomic) CUMessageSession *messageSession; // @synthesize messageSession=_messageSession;
@property(nonatomic) _Bool shouldAutomaticallySaveSignInResults; // @synthesize shouldAutomaticallySaveSignInResults=_shouldAutomaticallySaveSignInResults;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)signInOperationManager:(id)arg1 didSaveAccount:(id)arg2 error:(id)arg3;
- (id)_appleAccountType;
- (id)_titleForError:(id)arg1 account:(id)arg2;
- (void)_presentExistingAccountAlert:(id)arg1;
- (void)_presentValidationErrorAlert:(id)arg1 forAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)accountRepairRemoteUI:(id)arg1 account:(id)arg2 didFinishWithSuccess:(_Bool)arg3;
- (void)_loadAccountRepairRemoteUIWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_showSecondFactorUIForAccount:(id)arg1 loginResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)_showGenericTermsUIforAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentUnableToSaveAccountAlert;
- (_Bool)_carrierBundleSaysHideFindMyiPhone;
- (void)_hasActivationLockSupportedWatchWithCompletion:(CDUnknownBlockType)arg1;
- (void)_promptToEnableFindMyIfPossibleWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_stashLoginResponseWithAuthenticationResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_saveAccount:(id)arg1 withAllDataclassesEnabledIfPossibleWithCompletion:(CDUnknownBlockType)arg2;
- (void)_validateCDPStateForAccount:(id)arg1 withCDPContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_verifyLoginResponseForiCloudAccount:(id)arg1 withSuccess:(_Bool)arg2 response:(id)arg3 error:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_updateAppleAccountIfNecessary:(id)arg1 withAltDSID:(id)arg2 rawPassword:(id)arg3;
- (void)signInWithIDMSAuthenticationResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool shouldHideActivationLockAlert;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

