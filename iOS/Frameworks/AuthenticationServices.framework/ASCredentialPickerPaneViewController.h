//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKASAuthorizationProvider, ASCAuthorizationPresentationContext, ASCPasswordCredential, ASCredentialRequestConfirmButtonSubPane, ASCredentialRequestImageSubPane, ASCredentialRequestInfoLabelSubPane, NSArray, NSObject, NSString, UIWindow, _ASCredentialAuthenticationViewController;
@protocol ASCLoginChoiceProtocol, OS_dispatch_queue, OS_os_activity;

__attribute__((visibility("hidden")))
@interface ASCredentialPickerPaneViewController
{
    ASCAuthorizationPresentationContext *_presentationContext;
    ASCredentialRequestImageSubPane *_imageSubPane;
    ASCredentialRequestConfirmButtonSubPane *_confirmButtonSubPane;
    long long _currentlySelectedRow;
    id <ASCLoginChoiceProtocol> _previouslySelectedLoginChoice;
    _Bool _shouldExpandOtherLoginChoices;
    NSArray *_tableViewLoginChoices;
    NSArray *_otherLoginChoices;
    NSObject<OS_os_activity> *_authorizationActivity;
    AKASAuthorizationProvider *_authKitAuthorizationProvider;
    NSObject<OS_dispatch_queue> *_alertQueue;
    _ASCredentialAuthenticationViewController *_credentialProviderViewController;
    ASCPasswordCredential *_externalPasswordCredentialForSelectedLoginChoice;
    _Bool _isUserVerificationConfigured;
    long long _currentlyEnabledBiometryType;
    long long _supportedBiometryType;
    ASCredentialRequestInfoLabelSubPane *_infoLabelPane;
    ASCredentialRequestInfoLabelSubPane *_subtitleSubPane;
}

- (void).cxx_destruct;
- (_Bool)_isUserVerificationConfigured;
@property(readonly, nonatomic) UIWindow *presentationAnchor;
- (void)authenticationProvider:(id)arg1 hideViewController:(id)arg2;
- (void)authenticationProvider:(id)arg1 showViewController:(id)arg2;
- (void)_presentAlert:(id)arg1 primaryAction:(CDUnknownBlockType)arg2 alternateAction:(CDUnknownBlockType)arg3;
- (void)authenticationProvider:(id)arg1 presentAlert:(id)arg2 primaryAction:(CDUnknownBlockType)arg3 alternateAction:(CDUnknownBlockType)arg4;
- (void)_userTappedContinueButtonForCABLELoginChoice:(id)arg1;
- (void)_userTappendContinueButtonForSecurityKeyLoginChoice:(id)arg1;
- (void)_userTappedContinueButtonForPasswordLoginChoice:(id)arg1;
- (void)_userTappedContinueButtonForPasskeyLoginChoice:(id)arg1;
- (void)userTappedContinueButton;
- (_Bool)validateReadyForAuthorization:(id)arg1;
- (void)performAuthorization:(id)arg1 withAuthenticatedLAContext:(id)arg2;
- (void)performPasswordAuthentication:(id)arg1;
- (void)confirmButtonSubPaneDidFailBiometry:(id)arg1;
- (_Bool)_errorIsPINRequiredError:(id)arg1;
- (void)confirmButtonSubPaneDidEnterProcessingState:(id)arg1 withAuthenticatedContext:(id)arg2;
- (void)_updateSelectedRow:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_cellForRow:(long long)arg1;
- (long long)numberOfTableRows;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)credentialAuthenticationViewController:(id)arg1 didFinishWithPasskeyRegistrationCredential:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)credentialAuthenticationViewController:(id)arg1 didFinishWithPasskeyAssertionCredential:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1;
- (void)credentialAuthenticationViewController:(id)arg1 didFinishWithCredential:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg1;
- (void)_userSelectedExternalPasswordCredential;
- (id)_iconImage;
- (void)_updateCachedLoginChoices;
- (_Bool)_shouldShowLoginChoicesInTableView;
- (void)_performAuthorizationWithAuthenticatedContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setCancelButtonEnabled:(_Bool)arg1;
- (id)_usernameForContinueButtonWithLoginChoice:(id)arg1;
- (void)_configureAuthenticationPaneForSelectedLoginChoice:(id)arg1;
- (id)_infoLabelStringForSignInWithApple;
- (id)_infoLabelStringForPassword;
- (id)_infoLabelStringForSecurityKeyCredentialAssertion;
- (id)_subtitleForPlatformPublicKeyCredentialAssertion;
- (id)_subtitleForPlatformPublicKeyCredentialRegistration;
- (id)_titleForPlatformPublicKeyCredentialRegistration;
- (id)_defaultPasskeySignInTitle;
- (id)_serviceName;
- (id)_localizedInfoString;
- (void)_selectInitialLoginChoice;
- (void)_manuallyEnterPasswordButtonTapped;
- (void)_useCABLEButtonTapped;
- (void)_useSecurityKeyButtonTapped;
- (void)_otherLoginChoicesButtonTapped;
- (double)_secondaryButtonBottomMargin;
- (void)_addManuallyEnterPasswordButtonIfNeeded;
- (void)_addOtherLoginChoicesButtonIfNeeded;
- (void)_addAuthorizationButtonToPaneContext:(id)arg1;
- (void)_setUpInfoLabel;
- (void)_setUpIconViewIfNecessary;
- (void)_setUpPlatformCredentialRequestPane;
- (void)_setUpView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_selectPreviouslySelectedLoginChoiceIfPossible:(id)arg1;
- (void)reloadLoginChoices;
- (id)initWithPresentationContext:(id)arg1 activity:(id)arg2;
- (id)initWithPresentationContext:(id)arg1 shouldExpandOtherLoginChoices:(_Bool)arg2 activity:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

