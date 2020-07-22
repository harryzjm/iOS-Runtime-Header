//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/UITextFieldDelegate-Protocol.h>

@class NSDecimalNumber, NSNumberFormatter, NSString, PKNumberPadInputView, UIColor, UILabel, UITextField;
@protocol PKEnterCurrencyAmountViewDelegate;

@interface PKEnterCurrencyAmountView : UIView <UITextFieldDelegate>
{
    UIView *_internalInputAccessoryView;
    _Bool _showsDecimalPointButton;
    _Bool _enabled;
    UITextField *_amountTextField;
    NSString *_currency;
    UIColor *_textColor;
    id <PKEnterCurrencyAmountViewDelegate> _delegate;
    UILabel *_currencySymbolLabel;
    UILabel *_amountLabel;
    PKNumberPadInputView *_numberPad;
    NSNumberFormatter *_currentAmountFormatter;
    NSString *_amountString;
}

@property(retain, nonatomic) NSString *amountString; // @synthesize amountString=_amountString;
@property(retain, nonatomic) NSNumberFormatter *currentAmountFormatter; // @synthesize currentAmountFormatter=_currentAmountFormatter;
@property(retain, nonatomic) PKNumberPadInputView *numberPad; // @synthesize numberPad=_numberPad;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UILabel *currencySymbolLabel; // @synthesize currencySymbolLabel=_currencySymbolLabel;
@property(nonatomic) __weak id <PKEnterCurrencyAmountViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(readonly, nonatomic) UITextField *amountTextField; // @synthesize amountTextField=_amountTextField;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool showsDecimalPointButton; // @synthesize showsDecimalPointButton=_showsDecimalPointButton;
- (void).cxx_destruct;
- (void)_createSubviews;
- (double)_topPaddingForCurrencySymbol;
- (id)_decimalNumberFromPosixString:(id)arg1;
- (id)_posixStringFromDecimalNumber:(id)arg1;
- (id)_posixFormatter;
- (void)_updateContent;
- (void)_createAmountFormatter;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)showKeyboard;
- (void)dismissKeyboard;
@property(retain, nonatomic) UIView *inputAccessoryView;
@property(retain, nonatomic) NSDecimalNumber *currentAmount;
- (id)initWithCurrency:(id)arg1 amount:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

