//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class SUUIGiftConfiguration, SUUIGiftConfirmLabeledValue, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface SUUIGiftConfirmView : UIView
{
    SUUIGiftConfirmLabeledValue *_amountView;
    UILabel *_chargeDisclaimerLabel;
    UILabel *_confirmYourOrderLabel;
    SUUIGiftConfirmLabeledValue *_senderView;
    SUUIGiftConfiguration *_giftConfiguration;
    SUUIGiftConfirmLabeledValue *_itemView;
    SUUIGiftConfirmLabeledValue *_messageView;
    SUUIGiftConfirmLabeledValue *_recipientsView;
    UIView *_rule1;
    UIView *_rule2;
    UIView *_rule3;
    UIView *_rule4;
    UIView *_rule5;
    UIView *_rule6;
    SUUIGiftConfirmLabeledValue *_fromView;
    SUUIGiftConfirmLabeledValue *_sendOnView;
    UIButton *_termsButton;
    SUUIGiftConfirmLabeledValue *_themeNameView;
    UILabel *_totalLabel;
}

- (void).cxx_destruct;
- (id)_termsButton;
- (id)_newLightLabelWithSize:(double)arg1 alpha:(double)arg2;
- (id)_newBoldLabelWithSize:(double)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIButton *termsButton;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;

@end

