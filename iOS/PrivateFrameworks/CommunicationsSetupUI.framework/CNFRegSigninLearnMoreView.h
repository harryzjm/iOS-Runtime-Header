//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <CommunicationsSetupUI/PSHeaderFooterView-Protocol.h>

@class CNFRegSplashSignInController, PSSpecifier, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface CNFRegSigninLearnMoreView : UIView <PSHeaderFooterView>
{
    long long _serviceType;
    PSSpecifier *_specifier;
    UILabel *_signingInLabel;
    UIActivityIndicatorView *_signingInSpinner;
    CNFRegSplashSignInController *_controller;
    UIImageView *_splashImageView;
    UILabel *_titleLabel;
    UILabel *_verbiageLabel;
    UIButton *_learnMoreButton;
    UIView *_authKitSignInView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *authKitSignInView; // @synthesize authKitSignInView=_authKitSignInView;
@property(retain, nonatomic) UIButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) UILabel *verbiageLabel; // @synthesize verbiageLabel=_verbiageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *splashImageView; // @synthesize splashImageView=_splashImageView;
@property(nonatomic) CNFRegSplashSignInController *controller; // @synthesize controller=_controller;
@property(nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
- (void)_learnMorePressed:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)layoutSubviews;
- (id)signingInSpinner;
- (id)signingInLabel;
- (id)_splashImage;
- (void)setSigningIn:(_Bool)arg1;
- (id)initWithSpecifier:(id)arg1;

@end
