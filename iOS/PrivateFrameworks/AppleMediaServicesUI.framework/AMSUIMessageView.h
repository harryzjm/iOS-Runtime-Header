//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonView.h"

@class AMSDialogAction, AMSUICommonImageView, AMSUICommonTextView, AMSUIMessageViewLayoutContext, AMSUIPopoverShapeLayerView, NSArray, NSAttributedString, UIColor, UIImageView, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface AMSUIMessageView : AMSUICommonView
{
    _Bool _isSizing;
    _Bool _preLayoutImageView;
    UIView *_accessoryView;
    UIView *_accessorySecondaryView;
    NSArray *_footerButtonViews;
    NSAttributedString *_message;
    UIColor *_separatorColor;
    NSAttributedString *_title;
    UIImageView *_backgroundImageView;
    AMSUICommonImageView *_imageView;
    AMSUICommonTextView *_textView;
    AMSDialogAction *_bodyAction;
    unsigned long long _imageStyle;
    unsigned long long _style;
    UIScrollView *_containerView;
    UIView *_imageContainerView;
    AMSUIMessageViewLayoutContext *_layoutContext;
    NSArray *_separatorViews;
    AMSUIPopoverShapeLayerView *_maskShapeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AMSUIPopoverShapeLayerView *maskShapeView; // @synthesize maskShapeView=_maskShapeView;
@property(retain, nonatomic) NSArray *separatorViews; // @synthesize separatorViews=_separatorViews;
@property(retain, nonatomic) AMSUIMessageViewLayoutContext *layoutContext; // @synthesize layoutContext=_layoutContext;
@property(retain, nonatomic) UIView *imageContainerView; // @synthesize imageContainerView=_imageContainerView;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long imageStyle; // @synthesize imageStyle=_imageStyle;
@property(nonatomic) _Bool preLayoutImageView; // @synthesize preLayoutImageView=_preLayoutImageView;
@property(readonly, nonatomic) AMSDialogAction *bodyAction; // @synthesize bodyAction=_bodyAction;
@property(readonly, nonatomic) AMSUICommonTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) _Bool isSizing; // @synthesize isSizing=_isSizing;
@property(readonly, nonatomic) AMSUICommonImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void)_setTextAlignment;
- (id)_makeSeparatorView;
@property(copy, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(retain, nonatomic) NSArray *footerButtonViews; // @synthesize footerButtonViews=_footerButtonViews;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSAttributedString *message; // @synthesize message=_message;
- (void)setBackgroundColor:(id)arg1;
@property(retain, nonatomic) UIView *accessorySecondaryView; // @synthesize accessorySecondaryView=_accessorySecondaryView;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void)_syncRectsFromContext;
- (id)_defaultTitleFont;
- (id)_defaultTitleColor;
- (id)_defaultMessageFont;
- (id)_defaultMessageColor;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)_layoutHeightDependsOnWidth;
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setNeedsLayout;
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
- (void)_setAccessibility;
- (void)_setupImageView;
- (void)_setBackground;
- (void)_setShadow;
- (void)_setupInitialLayout;
- (void)_setupDefaults;
- (void)dealloc;
- (id)initWithStyle:(unsigned long long)arg1;

@end

