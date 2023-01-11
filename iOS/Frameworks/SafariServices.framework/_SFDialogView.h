//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, SFDialogContentView, UISwipeGestureRecognizer, UITapGestureRecognizer, _SFKeyboardLayoutAlignmentView;
@protocol _SFDialogViewDelegate;

@interface _SFDialogView : UIView
{
    SFDialogContentView *_contentView;
    SFDialogContentView *_contentViewConfiguredForMinimumHeight;
    _SFKeyboardLayoutAlignmentView *_keyboardAlignmentView;
    UISwipeGestureRecognizer *_keyboardDismissSwipeGesture;
    UITapGestureRecognizer *_keyboardDismissTapGesture;
    NSLayoutConstraint *_obscuredInsetTopConstraint;
    NSLayoutConstraint *_obscuredInsetLeftConstraint;
    NSLayoutConstraint *_obscuredInsetBottomConstraint;
    NSLayoutConstraint *_obscuredInsetRightConstraint;
    id <_SFDialogViewDelegate> _delegate;
}

@property(nonatomic) __weak id <_SFDialogViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_keyboardDismissGesture:(id)arg1;
- (void)willDisappear;
- (void)didAppear;
- (void)setDialogActions:(id)arg1;
- (void)setPasswordText:(id)arg1 placeholder:(id)arg2;
- (void)setInputText:(id)arg1 placeholder:(id)arg2;
- (void)setUsesOpaqueAppearance:(_Bool)arg1;
- (void)setObscuredInsets:(struct UIEdgeInsets)arg1;
- (void)setMessageText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (_Bool)becomeFirstResponder;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

