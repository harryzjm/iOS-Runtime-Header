//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/SFPasswordSavingServiceViewControllerProtocol-Protocol.h>
#import <SafariServices/_ASAccountAuthenticationModificationExtensionManagerObserver-Protocol.h>
#import <SafariServices/_ASAccountAuthenticationModificationHostViewControllerDelegate-Protocol.h>

@class NSArray, NSExtension, NSString, NSURLCredential, SFPasswordAlertController, WBSAutoFillQuirksManager, WBSPasswordWarning, WBSSavedPasswordStore, _ASAccountAuthenticationModificationHostViewController;

__attribute__((visibility("hidden")))
@interface SFPasswordSavingServiceViewController <_ASAccountAuthenticationModificationExtensionManagerObserver, _ASAccountAuthenticationModificationHostViewControllerDelegate, SFPasswordSavingServiceViewControllerProtocol>
{
    long long _action;
    NSArray *_protectionSpacesToUpdate;
    NSString *_domainForSavePasswordAction;
    NSURLCredential *_credential;
    NSString *_tokenForShowingPrompt;
    SFPasswordAlertController *_prompt;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    WBSPasswordWarning *_passwordWarning;
    NSExtension *_accountModificationExtension;
    _ASAccountAuthenticationModificationHostViewController *_accountModificationHostViewController;
    WBSSavedPasswordStore *_savedPasswordStore;
    _Bool _supportsUpgradeToStrongPassword;
    _Bool _supportsUpgradeToSignInWithApple;
    _Bool _passwordIsWeakEnoughForActiveWarning;
    _Bool _passwordHasLikelyBeenCompromised;
}

+ (id)_exportedInterface;
- (void).cxx_destruct;
- (void)_openPasswordManagerToChangePasswordOnWebsite;
- (void)_initiateChangeToStrongPassword;
- (void)_initiateUpgradeToSignInWithApple;
- (id)_messageStringForAccountModificationPrompt;
- (id)_titleStringForAccountModificationPrompt;
- (void)_addChangePasswordOnWebsiteActionToPrompt;
- (void)_addChangeToStrongPasswordActionToPrompt;
- (void)_addUpgradeToSignInWithAppleActionToPrompt;
- (void)_showAccountModificationPrompt;
- (void)_dismiss;
- (void)showPromptWithToken:(id)arg1 style:(long long)arg2;
- (void)_removeCredential:(id)arg1;
- (void)_updateCredential:(id)arg1;
- (void)_saveCredential:(id)arg1;
- (void)_configureSecurityPromptActionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_checkIfWarningStoreAlreadyContainsCredentialWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)credentialsSubmittedForWebsiteURL:(id)arg1 user:(id)arg2 password:(id)arg3 passwordIsAutoGenerated:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
