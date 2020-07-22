//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebUI/CNContactPickerDelegate-Protocol.h>
#import <WebUI/WBUContactAutoFillViewControllerFiller-Protocol.h>
#import <WebUI/WBUCreditCardCaptureViewControllerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, UIView, WBSFormMetadata, WBSMultiRoundAutoFillManager, WBUFormDataController;
@protocol WBUFormAutoFillFrameHandle, WBUFormAutoFillWebView;

@interface WBUFormAutoCompleteState : NSObject <WBUCreditCardCaptureViewControllerDelegate, WBUContactAutoFillViewControllerFiller, CNContactPickerDelegate>
{
    CDUnknownBlockType _creditCardCaptureCompletionHandler;
    WBSFormMetadata *_formMetadata;
    NSDictionary *_textFieldMetadata;
    unsigned long long _formType;
    long long _action;
    _Bool _gatheringFormValues;
    NSDictionary *_formValues;
    NSDictionary *_formAnnotations;
    NSArray *_credentialMatches;
    NSArray *_relatedCredentialMatches;
    _Bool _canAutoComplete;
    NSMutableDictionary *_matchesByCompletion;
    WBSMultiRoundAutoFillManager *_multiRoundAutoFillManager;
    _Bool _URLIsAllowedByWhiteList;
    _Bool _hasDeterminedIfURLIsAllowedByWhiteList;
    CDUnknownBlockType _displayOtherContactsCompletionHandler;
    CDUnknownBlockType _customAutoFillContactCompletionHandler;
    WBUFormDataController *_dataController;
}

+ (void)getMatchesFromFormProtectionSpace:(id)arg1 matchesFromOtherProtectionSpaces:(id)arg2 withFormURL:(id)arg3 credentialMatches:(id)arg4 lastGeneratedPassword:(id)arg5 currentUser:(id)arg6 currentPassword:(id)arg7 forUserNamesOnly:(_Bool)arg8;
+ (_Bool)_shouldSaveCredentialsInProtectionSpace:(id)arg1;
@property(nonatomic) __weak WBUFormDataController *dataController; // @synthesize dataController=_dataController;
- (void).cxx_destruct;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)_bestTextFieldMetadataForMetadata:(id)arg1;
- (void)showOtherContactOptions;
- (void)switchToCustomInputViewWithMatches:(id)arg1 contact:(id)arg2;
- (id)_viewControllerToPresentFrom;
- (void)performAutoFillWithMatchSelections:(id)arg1 doNotFill:(id)arg2 contact:(id)arg3;
- (void)autoFillDisplayData:(id)arg1 setAutoFilled:(_Bool)arg2;
- (void)dismissCustomAutoFill;
- (void)setShowingKeyboardInputView:(_Bool)arg1;
- (void)_offerToAutoFillContact;
- (void)_autoFillWithSet:(id)arg1;
- (void)creditCardCaptureViewController:(id)arg1 didCaptureCreditCard:(id)arg2;
- (void)creditCardCaptureViewControllerDidCancel:(id)arg1;
- (void)_offerToAutoFillFromPotentialCredentialMatches;
- (void)fillCredential:(id)arg1 setAutoFilled:(_Bool)arg2;
- (_Bool)hasPotentialLoginCredentialsForLoginForm;
- (id)potentialCredentialMatches;
- (void)getLoginFormUser:(id *)arg1 password:(id *)arg2 userIsAutoFilled:(_Bool *)arg3 passwordIsAutoFilled:(_Bool *)arg4;
- (void)_offerToForgetSavedPassword:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_suggestPasswordForNewAccountOrChangePasswordForm;
- (void)_generateAndSuggestPasswordWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fillGeneratedPassword:(id)arg1 inField:(id)arg2;
- (void)annotateForm:(long long)arg1 withValues:(id)arg2;
- (void)autoFillGeneratedPassword:(id)arg1 inForm:(long long)arg2;
- (long long)_passwordGenerationAssistanceAction;
- (_Bool)_passwordGenerationAssistanceAutoFillButtonEnabled;
- (_Bool)_shouldUsePasswordGenerationAssistanceForTextField;
- (void)_autoFillCreditCardData;
- (void)autoFillFormWithCreditCardDataAfterAuthenticationIfNeeded:(id)arg1;
- (void)fillCredentialAfterAuthenticationIfNeeded:(id)arg1;
- (void)autoFillValuesAfterAuthenticationIfNeeded:(id)arg1;
- (void)_captureCreditCardDataWithCameraAndFill;
@property(readonly, nonatomic) _Bool shouldOfferActionAutoFillCredentials;
@property(readonly, nonatomic) id <WBUFormAutoFillFrameHandle> frame;
@property(readonly, nonatomic) UIView<WBUFormAutoFillWebView> *webView;
- (void)autoFillFormWithCreditCardData:(id)arg1;
@property(readonly, nonatomic) _Bool canAutoFillCreditCardData;
- (_Bool)_textFieldLooksLikeCreditCardFormField;
@property(readonly, nonatomic) _Bool textFieldLooksLikeCreditCardNumericFormField;
- (id)_matchesForPartialString:(id)arg1;
- (void)_ensureFormMetadata;
- (void)getTextFieldMetadata:(id *)arg1 formMetadata:(id *)arg2;
- (void)acceptedAutoFillWord:(id)arg1;
- (id)suggestionsForString:(id)arg1;
- (_Bool)hasCurrentSuggestions;
@property(readonly, nonatomic) NSString *textFieldValue;
- (void)_performAutoFill;
- (void)updateCachedFormMetadataAfterFilling:(id)arg1;
- (void)_setUpMultiRoundAutoFillManagerIfNecessary;
- (void)_setUserAndPasswordFieldsAutoFilled:(_Bool)arg1 clearPasswordField:(_Bool)arg2;
- (void)setFormControls:(id)arg1 areAutoFilled:(_Bool)arg2 clearField:(id)arg3;
- (void)autoFill;
- (void)_autoFillValues:(id)arg1 setAutoFilled:(_Bool)arg2;
- (void)autoFillValues:(id)arg1 setAutoFilled:(_Bool)arg2 andFocusFieldAfterFilling:(_Bool)arg3 fieldToFocus:(id)arg4;
- (void)autoFillValues:(id)arg1 setAutoFilled:(_Bool)arg2 andFocusField:(id)arg3;
- (void)fetchFormMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (void)textDidChangeInForm:(id)arg1 textField:(id)arg2;
- (long long)_action;
@property(readonly, nonatomic) _Bool shouldOfferToAutoFillCreditCardData;
- (_Bool)_textFieldIsEmptyPasswordField;
- (id)titleOfAutoFillButton;
- (void)_updateAutoFillButton;
- (void)setAutoFillButtonTitle:(id)arg1;
- (void)_gatherFormValuesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)_actionForLoginForm;
- (_Bool)_shouldAllowGeneratedPassword;
- (void)_getShouldOfferForgetPassword:(_Bool *)arg1 savePassword:(_Bool *)arg2;
- (void)_presentViewController:(id)arg1 presentingViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_hasMatchWithUser:(id)arg1 password:(id)arg2;
- (void)dealloc;
- (void)invalidate;
- (id)initWithFormDataController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
