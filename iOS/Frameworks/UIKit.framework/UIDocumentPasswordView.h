//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextFieldDelegate-Protocol.h>

@class NSObject, NSString, UIDocumentPasswordField, UIImageView, UILabel, UITextField;
@protocol UIDocumentPasswordViewDelegate;

@interface UIDocumentPasswordView <UITextFieldDelegate>
{
    UIImageView *_iconView;
    UIDocumentPasswordField *_passwordTextField;
    UILabel *_label;
    NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate;
}

@property(readonly, nonatomic) UITextField *passwordField; // @synthesize passwordField=_passwordTextField;
@property(nonatomic) NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate; // @synthesize passwordDelegate;
- (double)_textFieldWidth;
- (double)_labelHorizontalOffset;
- (id)_labelTextColor;
- (id)_labelFont;
- (void)_passwordEntered:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)_canDrawContent;
- (void)layoutSubviews;
- (struct CGRect)_iconRectForContainerRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithDocumentName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
