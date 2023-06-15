//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIActionSheet, UIColor, UIImageView, UIPopoverBackgroundView, UIPopoverController, _UICutoutShadowView;

__attribute__((visibility("hidden")))
@interface _UIPopoverView : UIView
{
    UIView *_contentView;
    UIPopoverBackgroundView *_backgroundView;
    UIView *_clipView;
    Class _backgroundViewClass;
    UIImageView *_toolbarShine;
    _Bool _showsBackgroundComponentHighlights;
    _Bool _showsBackgroundViewHighlight;
    _Bool _showsContentViewHighlight;
    _Bool _contentExtendsOverArrow;
    _Bool _chromeHidden;
    _Bool _chromeHiddenForSizeTransition;
    UIActionSheet *_presentedActionSheet;
    UIPopoverController *_popoverController;
    _UICutoutShadowView *_shadowView;
    double _animationOvershootHeight;
    struct CGSize _contentSize;
}

+ (id)popoverViewContainingView:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double animationOvershootHeight; // @synthesize animationOvershootHeight=_animationOvershootHeight;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) _UICutoutShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) _Bool chromeHiddenForSizeTransition; // @synthesize chromeHiddenForSizeTransition=_chromeHiddenForSizeTransition;
@property(nonatomic) _Bool chromeHidden; // @synthesize chromeHidden=_chromeHidden;
@property(readonly, nonatomic) _Bool contentExtendsOverArrow; // @synthesize contentExtendsOverArrow=_contentExtendsOverArrow;
@property(nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property(retain, nonatomic) UIActionSheet *presentedActionSheet; // @synthesize presentedActionSheet=_presentedActionSheet;
@property(nonatomic) _Bool showsContentViewHighlight; // @synthesize showsContentViewHighlight=_showsContentViewHighlight;
@property(nonatomic) _Bool showsBackgroundViewHighlight; // @synthesize showsBackgroundViewHighlight=_showsBackgroundViewHighlight;
@property(nonatomic) _Bool showsBackgroundComponentHighlights; // @synthesize showsBackgroundComponentHighlights=_showsBackgroundComponentHighlights;
- (void)_performBlockCheckingDefinesTintColor:(CDUnknownBlockType)arg1;
- (_Bool)_definesTintColor;
- (id)_normalInheritedTintColor;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_hideArrow;
- (void)_showArrow;
- (void)_setCornerRadius:(double)arg1;
- (void)_setFrame:(struct CGRect)arg1 arrowOffset:(double)arg2;
- (void)setUseToolbarShine:(_Bool)arg1;
@property(copy, nonatomic) UIColor *arrowBackgroundColor;
@property(copy, nonatomic) UIColor *popoverBackgroundColor;
@property(nonatomic) long long backgroundStyle;
@property(nonatomic) unsigned long long arrowDirection;
@property(nonatomic) double arrowOffset;
- (void)_updateAlphaForChromeHidden;
- (_Bool)_allowsCustomizationOfContent;
- (void)_setPopoverContentView:(id)arg1;
- (struct CGRect)_snapshotBounds;
- (id)toolbarShine;
- (id)standardChromeView;
- (id)backgroundView;
- (id)contentView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect)arg1;
- (int)_style;
- (void)layoutSubviews;
- (struct UIEdgeInsets)safeAreaInsetsForContentView;
- (void)_layoutToolbarShine;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 backgroundViewClass:(Class)arg2 embeddedInView:(_Bool)arg3 contentExtendsOverArrow:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1 backgroundViewClass:(Class)arg2;

@end

