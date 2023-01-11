//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/UIScrollViewDelegate-Protocol.h>
#import <PassKitUI/UITextViewDelegate-Protocol.h>
#import <PassKitUI/_PKUIKVisibilityBackdropViewDelegate-Protocol.h>

@class LAUICheckmarkLayer, NSAttributedString, NSString, OBPrivacyLinkController, PKPaymentSetupDockView, UIActivityIndicatorView, UIButton, UIColor, UIFont, UIImage, UIImageView, UILabel, UIScrollView, UITextView, _PKUIKVisibilityBackdropView;
@protocol PKExplanationViewDelegate;

@interface PKExplanationView : UIView <UIScrollViewDelegate, UITextViewDelegate, _PKUIKVisibilityBackdropViewDelegate>
{
    long long _context;
    _Bool _privacyFooterShouldPin;
    UIImageView *_imageView;
    PKPaymentSetupDockView *_dockView;
    NSString *_titleText;
    UILabel *_titleLabel;
    UIActivityIndicatorView *_activityIndicator;
    _PKUIKVisibilityBackdropView *_backdropView;
    double _backdropWeight;
    _Bool _showPrivacyView;
    double _topMargin;
    struct CGRect _titleLabelFrame;
    struct CGRect _titleLabelLastLineBounds;
    double _titleLabelLastLineDescent;
    UIButton *_bodyButton;
    UITextView *_secondaryBodyTextView;
    UIView *_topBackgroundView;
    _Bool _forceShowSetupLaterButton;
    _Bool _hideTitleText;
    id <PKExplanationViewDelegate> _delegate;
    double _titleHyphenationFactor;
    UIImage *_image;
    UIView *_heroView;
    UIColor *_topBackgroundColor;
    UIImage *_titleImage;
    UIFont *_titleFont;
    long long _titleTextAlignment;
    NSString *_bodyText;
    NSAttributedString *_attributedBodyText;
    NSAttributedString *_attributedSecondaryBodyText;
    NSString *_bodyButtonText;
    long long _bodyButtonNumberOfLines;
    UIView *_bodyView;
    double _bodyViewPadding;
    long long _bodyTextAlignment;
    unsigned long long _bodyDataDetectorTypes;
    OBPrivacyLinkController *_privacyLink;
    UIScrollView *_scrollView;
    LAUICheckmarkLayer *_checkmarkLayer;
    UIImageView *_logoImageView;
    UITextView *_bodyTextView;
    struct CGSize _logoImageViewTargetSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITextView *bodyTextView; // @synthesize bodyTextView=_bodyTextView;
@property(nonatomic) struct CGSize logoImageViewTargetSize; // @synthesize logoImageViewTargetSize=_logoImageViewTargetSize;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(readonly, nonatomic) LAUICheckmarkLayer *checkmarkLayer; // @synthesize checkmarkLayer=_checkmarkLayer;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) PKPaymentSetupDockView *dockView; // @synthesize dockView=_dockView;
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(nonatomic) unsigned long long bodyDataDetectorTypes; // @synthesize bodyDataDetectorTypes=_bodyDataDetectorTypes;
@property(nonatomic) long long bodyTextAlignment; // @synthesize bodyTextAlignment=_bodyTextAlignment;
@property(nonatomic) double bodyViewPadding; // @synthesize bodyViewPadding=_bodyViewPadding;
@property(retain, nonatomic) UIView *bodyView; // @synthesize bodyView=_bodyView;
@property(nonatomic) long long bodyButtonNumberOfLines; // @synthesize bodyButtonNumberOfLines=_bodyButtonNumberOfLines;
@property(copy, nonatomic) NSString *bodyButtonText; // @synthesize bodyButtonText=_bodyButtonText;
@property(copy, nonatomic) NSAttributedString *attributedSecondaryBodyText; // @synthesize attributedSecondaryBodyText=_attributedSecondaryBodyText;
@property(copy, nonatomic) NSAttributedString *attributedBodyText; // @synthesize attributedBodyText=_attributedBodyText;
@property(copy, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
@property(nonatomic) long long titleTextAlignment; // @synthesize titleTextAlignment=_titleTextAlignment;
@property(nonatomic) _Bool hideTitleText; // @synthesize hideTitleText=_hideTitleText;
@property(copy, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIImage *titleImage; // @synthesize titleImage=_titleImage;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UIColor *topBackgroundColor; // @synthesize topBackgroundColor=_topBackgroundColor;
@property(retain, nonatomic) UIView *heroView; // @synthesize heroView=_heroView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) double titleHyphenationFactor; // @synthesize titleHyphenationFactor=_titleHyphenationFactor;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) _Bool forceShowSetupLaterButton; // @synthesize forceShowSetupLaterButton=_forceShowSetupLaterButton;
@property(nonatomic) _Bool showPrivacyView; // @synthesize showPrivacyView=_showPrivacyView;
@property(nonatomic) __weak id <PKExplanationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (id)_createBodyTextView;
- (_Bool)_isBuddyiPad;
- (_Bool)_showTitleLogoImageView;
- (void)_updateCachedTitleLabelLastLine;
- (void)_updateTitleLabel;
- (void)_updateCheckmarkColor;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tintColorDidChange;
- (void)_createSubviews;
- (void)_calculateBlur;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_bodyButtonTapped;
- (void)_setupLater;
- (void)_continue;
@property(readonly, nonatomic) UIFont *bodyTextFont;
@property(readonly, nonatomic) UIImageView *imageView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithContext:(long long)arg1 delegate:(id)arg2;
- (id)initWithContext:(long long)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)init;
- (void)pk_applyAppearance:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
