//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, SUUIClientContext, SUUIITunesPassConfiguration, SUUIRedeemCameraLandingView, SUUIRedeemITunesPassLockup, SUUIRedeemTextField, UIButton, UIImage;
@protocol SUUIRedeemCameraViewDelegate;

__attribute__((visibility("hidden")))
@interface SUUIRedeemCameraView : UIView
{
    SUUIClientContext *_clientContext;
    id <SUUIRedeemCameraViewDelegate> _delegate;
    SUUIRedeemTextField *_inputAccessoryTextField;
    SUUIITunesPassConfiguration *_iTunesPassConfiguration;
    SUUIRedeemITunesPassLockup *_iTunesPassLockup;
    SUUIRedeemCameraLandingView *_landingView;
    UIView *_overlay;
    UIView *_redeemerView;
    UIButton *_termsButton;
    SUUIRedeemTextField *_textField;
    _Bool _displayRedeem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SUUIITunesPassConfiguration *ITunesPassConfiguration; // @synthesize ITunesPassConfiguration=_iTunesPassConfiguration;
@property(nonatomic) __weak id <SUUIRedeemCameraViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showRedeemer:(_Bool)arg1;
- (void)_resumeRedeemer;
- (void)_pauseRedeemer;
- (id)_newTextFieldWithClientContext:(id)arg1 placeholderColor:(id)arg2;
- (_Bool)_isShowingRedeemer;
- (void)_hideKeyboard;
- (void)_termsButtonAction:(id)arg1;
- (void)_tapGestureAction:(id)arg1;
- (void)_landingButtonAction:(id)arg1;
- (void)_iTunesPassLearnMoreAction:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *text;
- (void)start;
- (void)showKeyboard;
@property(retain, nonatomic) UIImage *image;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)dealloc;
- (id)initWithClientContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

