//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/AKAppleIDAuthenticationInAppContextDelegate-Protocol.h>
#import <PassKitUI/AKSignInViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKAuthenticatorDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationFooterViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationServiceProtocol-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationStateMachineDelegate-Protocol.h>
#import <PassKitUI/UINavigationControllerDelegate-Protocol.h>
#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class CNContact, NSLayoutConstraint, NSMutableSet, NSString, PKAuthenticator, PKContactFormatValidator, PKPaymentAuthorizationFooterView, PKPaymentAuthorizationLayout, PKPaymentAuthorizationPasswordButtonView, PKPaymentAuthorizationStateMachine, PKPaymentAuthorizationSummaryItemsView, PKPaymentAuthorizationTotalView, PKPaymentPreferencesViewController, PKPeerPaymentAccount, UIBarButtonItem, UITableView, UIView;
@protocol PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol;

@interface PKPaymentAuthorizationServiceViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, PKPaymentAuthorizationFooterViewDelegate, PKAuthenticatorDelegate, PKPaymentAuthorizationStateMachineDelegate, AKSignInViewControllerDelegate, AKAppleIDAuthenticationInAppContextDelegate, PKPaymentAuthorizationServiceProtocol>
{
    PKPaymentAuthorizationLayout *_layout;
    UIView *_contentView;
    UITableView *_detailTableView;
    PKPaymentAuthorizationSummaryItemsView *_summaryItemsView;
    NSLayoutConstraint *_summaryHeightConstraint;
    PKPaymentAuthorizationTotalView *_totalView;
    PKPaymentAuthorizationFooterView *_footerView;
    PKPaymentAuthorizationPasswordButtonView *_passwordButtonView;
    NSLayoutConstraint *_passphraseBottomConstraint;
    _Bool _needsToAccommodateKeyboard;
    UIBarButtonItem *_cancelBarButtonItem;
    _Bool _cancelButtonDisabled;
    _Bool _scrollIndicatorShown;
    UIView *_passphraseSeparatorView;
    NSLayoutConstraint *_contentViewRightConstraint;
    PKPaymentPreferencesViewController *_shippingMethodPreferencesController;
    PKPaymentPreferencesViewController *_shippingAddressPreferencesController;
    PKPaymentPreferencesViewController *_shippingContactPreferencesController;
    PKPaymentPreferencesViewController *_paymentCardPreferencesController;
    PKPaymentPreferencesViewController *_bankAccountPreferencesController;
    _Bool _viewAppeared;
    _Bool _visible;
    _Bool _authenticating;
    _Bool _allowCompactProcessing;
    _Bool _allowBiometricPhysicalButtonInstruction;
    _Bool _useBiometricPhysicalButtonInstruction;
    _Bool _physicalButtonVisibleOnce;
    unsigned char _visibility;
    _Bool _keyboardVisible;
    struct CGRect _keyboardFrame;
    struct CGRect _lastKeyboardFrame;
    unsigned short _layoutRecursionCounter;
    long long _userIntentStyle;
    long long _internalAuthenticationEvaluationState;
    _Bool _idleStateIsPasscode;
    unsigned int _faceIDCameraEdge;
    _Bool _showPoseOutOfRangeDownCoaching;
    long long _internalCoachingState;
    UIViewController *_passcodeViewController;
    UIViewController *_passphraseViewController;
    _Bool _hostApplicationResignedActive;
    _Bool _hostApplicationEnteredBackground;
    _Bool _treatingHostAsBackgrounded;
    _Bool _bypassAuthenticator;
    _Bool _isPad;
    _Bool _isAMPPayment;
    _Bool _isInstallment;
    _Bool _isPaymentSummaryPinned;
    _Bool _needsFinalCallback;
    long long _preferencesStyle;
    struct __IOHIDEventSystemClient *_hidSystemClient;
    unsigned long long _biometryAttempts;
    PKPeerPaymentAccount *_peerPaymentAccount;
    _Bool _peerPaymentBalanceIsInsufficient;
    NSMutableSet *_completionHandlers;
    CNContact *_lastUnservicableAddress;
    double _authenticatorFingerOnTime;
    PKContactFormatValidator *_contactFormatValidator;
    _Bool _blockingHardwareCancels;
    PKPaymentAuthorizationStateMachine *_stateMachine;
    PKAuthenticator *_authenticator;
    long long _physicalButtonState;
    long long _physicalButtonAnimationStyle;
    NSString *_physicalButtonInstruction;
    long long _coachingState;
    id <PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool blockingHardwareCancels; // @synthesize blockingHardwareCancels=_blockingHardwareCancels;
@property(nonatomic) __weak id <PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long coachingState; // @synthesize coachingState=_coachingState;
@property(readonly, nonatomic) NSString *physicalButtonInstruction; // @synthesize physicalButtonInstruction=_physicalButtonInstruction;
@property(readonly, nonatomic) long long physicalButtonAnimationStyle; // @synthesize physicalButtonAnimationStyle=_physicalButtonAnimationStyle;
@property(readonly, nonatomic) long long physicalButtonState; // @synthesize physicalButtonState=_physicalButtonState;
@property(retain, nonatomic) PKAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
@property(retain, nonatomic) PKPaymentAuthorizationStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (void)contextWillBeginPresentingSecondaryUI:(id)arg1;
- (void)_removeSimulatorHIDListener;
- (void)_startSimulatorHIDListener;
- (void)_sendDidEncounterAuthorizationEventIfNecessary:(unsigned long long)arg1;
- (_Bool)_passwordRequired;
- (_Bool)_passcodeAllowed;
- (void)_updateFooterStateIfAuthenticatingWithBiometricFailure:(_Bool)arg1;
- (void)_updateCoachingState;
- (void)_updatePhysicalButtonInstructionAndNotify:(_Bool)arg1;
- (void)_updatePhysicalButtonState;
- (void)_updateUserIntentStyle;
- (void)_setPassphraseViewController:(id)arg1;
- (void)_setPasscodeViewController:(id)arg1;
- (void)_setAuthenticating:(_Bool)arg1;
- (void)_setVisible:(_Bool)arg1;
- (id)_evaluationRequestWithHasInitialAuthenticatorState:(_Bool)arg1 initialAuthenticatorState:(unsigned long long)arg2;
- (long long)_authenticatorPolicy;
- (id)_compactNavigationController;
- (long long)_totalViewStyle;
- (void)_updatePreferredContentSize;
- (void)_showUnservicableAddressAlertForErrors:(id)arg1;
- (void)_updatePreferencesWithErrors:(id)arg1;
- (void)_updateShippingMethods;
- (id)_availabilityStringForPass:(id)arg1;
- (void)_setupPaymentPassAndBillingAddress;
- (void)_updateAvailableCardsPreferences;
- (id)_unavailablePasses;
- (long long)selectedPaymentApplicationIndexFromCardEntries:(id)arg1;
- (id)_availablePasses;
- (void)_updateBankAccounts;
- (void)_setupBankAccounts;
- (_Bool)_shouldShowUsePeerPaymentBalanceToggle;
- (void)_setupShippingContact;
- (void)_setupShippingAddress;
- (void)_setupShippingMethods;
- (void)_setupWithPaymentRequest:(id)arg1 relevantPassUniqueID:(id)arg2 fromAppWithLocalizedName:(id)arg3 applicationIdentifier:(id)arg4 bundleIdentifier:(id)arg5 teamIdentifier:(id)arg6;
- (void)_handleModelUpdate;
- (Class)_viewPresenterClassForDataItem:(id)arg1;
- (Class)_tableViewClassForDataItem:(id)arg1;
- (void)_removePassphraseViewFromHierarchyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_addPassphraseViewControllerToHierarchy:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_updateFooterStateForBiometricMatchMissIfNecessary;
- (void)resumeAndUpdateContentSize;
- (void)cancelPressed:(id)arg1;
- (void)_payWithPasswordPressed:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)_shouldShowSeparatorForRowAtIndexPath:(id)arg1;
- (_Bool)signInViewController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (void)authorizationFooterViewDidChangeConstraints:(id)arg1;
- (void)authorizationFooterViewWillChangeConstraints:(id)arg1;
- (void)authorizationFooterViewPasscodeButtonPressed:(id)arg1;
- (void)dismissPassphraseViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissPassphraseViewController;
- (void)presentPassphraseViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;
- (void)dismissPasscodeViewController;
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;
- (void)biometricAttemptFailed;
- (void)authenticatorDidEncounterBiometricLockout:(id)arg1;
- (void)authenticator:(id)arg1 didTransitionToCoachingState:(long long)arg2;
- (void)authenticator:(id)arg1 didTransitionToEvaluationStateWithEvent:(CDStruct_912cb5d2)arg2;
- (long long)_progressStateForAuthenticationWithBiometricFailure:(_Bool)arg1;
- (void)_updatePendingTransaction:(id)arg1 withAuthorizationStateParam:(id)arg2;
- (void)_didSucceedWithAuthorizationStateParam:(id)arg1;
- (void)_didFailWithFatalError:(id)arg1;
- (void)_didFailWithError:(id)arg1;
- (void)_didCancel:(_Bool)arg1;
- (void)_executeCompletionHandlers;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)arg1;
- (void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg1 signatureRequest:(id)arg2;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizeCashDisbursementWithResult:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg1;
- (void)_updateBackgroundedState:(_Bool)arg1;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationWillResignActive:(_Bool)arg1;
- (void)handleDismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleHostApplicationDidCancel;
- (void)_showScrollIndicatorIfNeeded;
- (void)setFooterState:(long long)arg1 string:(id)arg2 animated:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)setFooterState:(long long)arg1 string:(id)arg2 animated:(_Bool)arg3;
- (void)_selectOptionsForDataItem:(id)arg1;
- (void)_startEvaluationWithHasInitialAuthenticatorState:(_Bool)arg1 initialAuthenticatorState:(unsigned long long)arg2;
- (void)_suspendAuthenticationAndForceReset:(_Bool)arg1;
- (void)_suspendAuthentication;
- (void)_abandonPSD2StyleAMPBuy;
- (void)_abandonActiveEnrollmentAttempts;
- (void)_resumeAuthenticationWithPreviousError:(id)arg1 animated:(_Bool)arg2;
- (void)_invalidPaymentDataWithParam:(id)arg1;
- (void)_processClientCallback:(id)arg1;
- (void)_updateCancelButtonEnabledForState:(unsigned long long)arg1 param:(id)arg2;
- (_Bool)paymentAuthorizationStateMachine:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(id)arg4;
- (void)invalidate;
- (id)handlePaymentRequest:(id)arg1 relevantPassUniqueID:(id)arg2 fromAppWithLocalizedName:(id)arg3 applicationIdentifier:(id)arg4 bundleIdentifier:(id)arg5 teamIdentifier:(id)arg6;
- (id)handlePaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2 andApplicationIdentifier:(id)arg3;
- (void)_updateLayoutForKeyboardAction:(CDUnknownBlockType)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillChange:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_setVisibility:(unsigned char)arg1;
- (void)_setNavigationItemLeftItemForAMP;
- (_Bool)_setNavigationItemLeftItemFromNavigationTitle;
- (void)viewDidLoad;
- (void)_createSubviews;
- (void)dealloc;
- (id)initWithLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
