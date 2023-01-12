//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASCAuthorizationPresentationContext, ASCredentialRequestButtonContinue, NSLayoutConstraint, UIActivityIndicatorView, UILabel, UITextField;
@protocol ASPasswordAuthenticationPaneViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface ASPasswordAuthenticationPaneViewController
{
    ASCAuthorizationPresentationContext *_presentationContext;
    double _keyboardHeight;
    unsigned long long _persona;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UITextField *_usernameField;
    UITextField *_secureTextField;
    ASCredentialRequestButtonContinue *_signInButton;
    UIActivityIndicatorView *_signInButtonActivityIndicator;
    NSLayoutConstraint *_paneHeaderStackViewBottomKeyboardConstraint;
    id <ASPasswordAuthenticationPaneViewControllerDelegate> _authenticationDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ASPasswordAuthenticationPaneViewControllerDelegate> authenticationDelegate; // @synthesize authenticationDelegate=_authenticationDelegate;
- (_Bool)canBecomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)keyboardDidShow:(id)arg1;
- (void)sizeToFitPaneContentAnimated:(_Bool)arg1;
- (void)_completeManualPasswordCredentialEntry;
- (void)_textFieldChanged:(id)arg1;
- (double)_intrinsicContentHeight;
- (void)_stopAnimatingActivityIndicator;
- (void)_startAnimatingActivityIndicator;
- (void)dealloc;
- (void)_pinValidationFailedWithError:(id)arg1;
- (void)_pinValidationSucceededWithCredential:(id)arg1;
- (void)_signInButtonTapped;
- (double)_secureTextFieldInsetMargin;
- (double)_signInButtonInsetMargin;
- (double)_containerViewHorizontalMargin;
- (double)_topViewMargin;
- (id)_secureTextFieldPlaceholderText;
- (id)_manualPasswordEntryTitleLabelText;
- (id)_titleLabelText;
- (void)_setUpUsernameLabel;
- (void)_setUpSubtitleLabel;
- (void)_setUpAndAddIconImage;
- (void)_setConstraints;
- (void)_createViews;
- (void)viewDidLoad;
- (id)initWithPersona:(unsigned long long)arg1 presentationContext:(id)arg2;

@end
