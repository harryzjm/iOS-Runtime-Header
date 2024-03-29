//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonView.h"

@class AMSDialogAction, AMSUICommonImageView, AMSUICommonTextView, AMSUIMessageViewLayoutContext, AMSUIPopoverShapeLayerView, MicaPlayer, NSArray, NSAttributedString, UIColor, UIImageView, UIScrollView, UIView;
@protocol AMSUIMessageViewDelegate;

__attribute__((visibility("hidden")))
@interface AMSUIMessageView : AMSUICommonView
{
    _Bool _isImageSymbolImage;
    _Bool _isSizing;
    _Bool _preLayoutImageView;
    UIView *_accessoryView;
    UIView *_accessorySecondaryView;
    NSArray *_footerButtonViews;
    UIColor *_iconColor;
    UIColor *_separatorColor;
    id <AMSUIMessageViewDelegate> _ams_delegate;
    UIImageView *_backgroundImageView;
    AMSUICommonImageView *_imageView;
    NSAttributedString *_message;
    AMSUICommonTextView *_textView;
    AMSDialogAction *_bodyAction;
    NSAttributedString *_title;
    unsigned long long _imageStyle;
    unsigned long long _style;
    UIScrollView *_containerView;
    UIView *_imageContainerView;
    AMSUIMessageViewLayoutContext *_layoutContext;
    MicaPlayer *_micaPlayer;
    NSArray *_separatorViews;
    AMSUIPopoverShapeLayerView *_maskShapeView;
    NSArray *_ams_accessibilitySupplementaryFooterViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *ams_accessibilitySupplementaryFooterViews; // @synthesize ams_accessibilitySupplementaryFooterViews=_ams_accessibilitySupplementaryFooterViews;
@property(retain, nonatomic) AMSUIPopoverShapeLayerView *maskShapeView; // @synthesize maskShapeView=_maskShapeView;
@property(retain, nonatomic) NSArray *separatorViews; // @synthesize separatorViews=_separatorViews;
@property(retain, nonatomic) MicaPlayer *micaPlayer; // @synthesize micaPlayer=_micaPlayer;
@property(retain, nonatomic) AMSUIMessageViewLayoutContext *layoutContext; // @synthesize layoutContext=_layoutContext;
@property(retain, nonatomic) UIView *imageContainerView; // @synthesize imageContainerView=_imageContainerView;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long imageStyle; // @synthesize imageStyle=_imageStyle;
@property(nonatomic) _Bool preLayoutImageView; // @synthesize preLayoutImageView=_preLayoutImageView;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(readonly, nonatomic) AMSDialogAction *bodyAction; // @synthesize bodyAction=_bodyAction;
@property(readonly, nonatomic) AMSUICommonTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSAttributedString *message; // @synthesize message=_message;
@property(nonatomic) _Bool isSizing; // @synthesize isSizing=_isSizing;
@property(nonatomic) _Bool isImageSymbolImage; // @synthesize isImageSymbolImage=_isImageSymbolImage;
@property(readonly, nonatomic) AMSUICommonImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak id <AMSUIMessageViewDelegate> ams_delegate; // @synthesize ams_delegate=_ams_delegate;
- (double)_textViewParagraphSpacingBefore;
- (void)_setTextAlignment;
- (id)_makeSeparatorView;
@property(copy, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(copy, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(retain, nonatomic) NSArray *footerButtonViews; // @synthesize footerButtonViews=_footerButtonViews;
- (void)setBackgroundColor:(id)arg1;
@property(retain, nonatomic) UIView *accessorySecondaryView; // @synthesize accessorySecondaryView=_accessorySecondaryView;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void)_syncRectsFromContext;
- (void)_setLocalOverrideTraitCollection:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)_layoutHeightDependsOnWidth;
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (id)focusItemsInRect:(struct CGRect)arg1;
- (_Bool)canBecomeFocused;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_endObservations;
- (void)_startObservations;
- (void)removeBubbleArrowMaskView;
- (void)setupBubbleArrowMaskView;
- (void)setFooterForDialogActions:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setBodyDialogAction:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setAccessorySecondaryViewForDialogAction:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setAccessoryViewForDialogAction:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)_setTextViewText;
- (void)_setAccessibilityIdentifier;
- (void)_setMICAPlayerTintColor:(id)arg1;
- (id)_accessibilitySupplementaryFooterViews;
- (void)_setAccessibility;
- (void)_setupImageViewDefault;
- (void)_setupImageView;
- (void)_setBackground;
- (void)_setupMICAAssetWithData:(id)arg1 originalURL:(id)arg2;
- (void)_setShadow;
- (void)_setupInitialLayout;
- (void)_setupDefaults;
- (void)dealloc;
- (id)initWithStyle:(unsigned long long)arg1;

@end

