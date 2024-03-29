//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, SUUIRedeemTextField, UIImage, _UIBackdropView;
@protocol SUUIRedeemCameraViewDelegate;

__attribute__((visibility("hidden")))
@interface SUUIFullscreenRedeemCameraView : UIView
{
    id <SUUIRedeemCameraViewDelegate> _delegate;
    UIView *_overlay;
    UIView *_redeemerView;
    SUUIRedeemTextField *_textField;
    _UIBackdropView *_textFieldSafeAreaBackdrop;
    struct CGRect _keyboardRect;
    _Bool _enabled;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SUUIRedeemCameraViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_resumeRedeemer;
- (void)_pauseRedeemer;
- (id)_newTextFieldWithClientContext:(id)arg1;
- (void)_hideKeyboard;
- (void)_tapGestureAction:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)layoutSubviews;
- (void)start;
@property(nonatomic) _Bool enabled;
- (void)showKeyboard;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *text;
- (void)dealloc;
- (id)initWithClientContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

