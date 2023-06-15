//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, SUUIClientContext, SUUILinkButton, SUUIRoundedRectButton, UIButton, UIControl, UILabel;

__attribute__((visibility("hidden")))
@interface SUUIAccountButtonsView : UIView
{
    UILabel *_accountCreditsLabel;
    SUUIRoundedRectButton *_appleIDButton;
    SUUIClientContext *_clientContext;
    SUUILinkButton *_ecommerceButton;
    SUUIRoundedRectButton *_giftingButton;
    UIButton *_termsAndConditionsButton;
    SUUIRoundedRectButton *_usernameButton;
    _Bool _ecommerceVisibilityHidden;
    _Bool _giftingVisibilityHidden;
    UIButton *_redeemButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *termsAndConditionsButton; // @synthesize termsAndConditionsButton=_termsAndConditionsButton;
@property(readonly, nonatomic) UIButton *redeemButton; // @synthesize redeemButton=_redeemButton;
@property(readonly, nonatomic) UIButton *giftingButton; // @synthesize giftingButton=_giftingButton;
@property(readonly, nonatomic) UIControl *ECommerceButton; // @synthesize ECommerceButton=_ecommerceButton;
@property(readonly, nonatomic) UIButton *appleIDButton; // @synthesize appleIDButton=_appleIDButton;
- (void)_reloadFonts;
- (id)_newLinkButtonWithTitle:(id)arg1;
- (void)_layoutTwoRows;
- (void)_layoutOneRow;
- (void)tintColorDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic, getter=isTermsAndConditionsHidden) _Bool termsAndConditionsHidden;
@property(nonatomic, getter=isGiftingHidden) _Bool giftingHidden;
@property(copy, nonatomic) NSString *accountCredits;
- (_Bool)isRedeemHidden;
- (_Bool)isEcommerceHidden;
@property(copy, nonatomic) NSString *ECommerceLinkTitle;
- (void)dealloc;
- (id)initWithClientContext:(id)arg1;

@end

