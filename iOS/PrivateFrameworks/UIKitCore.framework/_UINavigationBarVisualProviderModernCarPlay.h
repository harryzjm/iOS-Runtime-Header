//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UINavigationBarVisualProvider.h"

@class NSArray, NSLayoutConstraint, NSString, UIColor, UIFocusContainerGuide, UIImageSymbolConfiguration, UIView, UIVisualEffectView, _CarTitleView, _UIBarButtonItemAppearanceStorage, _UIButtonBar, _UIButtonBarButton;

__attribute__((visibility("hidden")))
@interface _UINavigationBarVisualProviderModernCarPlay : _UINavigationBarVisualProvider
{
    _Bool _compactMetrics;
    _Bool _havePrepared;
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;
    UIView *_contentView;
    _CarTitleView *_titleView;
    _UIButtonBar *_leadingBar;
    _UIButtonBar *_trailingBar;
    _UIButtonBarButton *_backBarButton;
    NSLayoutConstraint *_leadingBarConstraint;
    NSLayoutConstraint *_leadingBarNoItemsConstraint;
    NSLayoutConstraint *_trailingBarConstraint;
    NSLayoutConstraint *_trailingBarNoItemsConstraint;
    NSArray *_backButtonConstraints;
    NSLayoutConstraint *_largeTitleLeadingConstraint;
    NSLayoutConstraint *_largeTitleTrailingConstraint;
    NSLayoutConstraint *_regularTitleConstraint;
    NSLayoutConstraint *_leadingBarWithTitleTrailingConstraint;
    NSLayoutConstraint *_leadingBarWithNoTitleTrailingConstraint;
    NSLayoutConstraint *_trailingBarWithTitleLeadingConstraint;
    NSLayoutConstraint *_trailingBarWithNoTitleLeadingConstraint;
    UIVisualEffectView *_backgroundView;
    UIFocusContainerGuide *_focusContainerGuide;
    NSArray *_debugViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *debugViews; // @synthesize debugViews=_debugViews;
@property(retain, nonatomic) UIFocusContainerGuide *focusContainerGuide; // @synthesize focusContainerGuide=_focusContainerGuide;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSLayoutConstraint *trailingBarWithNoTitleLeadingConstraint; // @synthesize trailingBarWithNoTitleLeadingConstraint=_trailingBarWithNoTitleLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingBarWithTitleLeadingConstraint; // @synthesize trailingBarWithTitleLeadingConstraint=_trailingBarWithTitleLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingBarWithNoTitleTrailingConstraint; // @synthesize leadingBarWithNoTitleTrailingConstraint=_leadingBarWithNoTitleTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingBarWithTitleTrailingConstraint; // @synthesize leadingBarWithTitleTrailingConstraint=_leadingBarWithTitleTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *regularTitleConstraint; // @synthesize regularTitleConstraint=_regularTitleConstraint;
@property(retain, nonatomic) NSLayoutConstraint *largeTitleTrailingConstraint; // @synthesize largeTitleTrailingConstraint=_largeTitleTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *largeTitleLeadingConstraint; // @synthesize largeTitleLeadingConstraint=_largeTitleLeadingConstraint;
@property(retain, nonatomic) NSArray *backButtonConstraints; // @synthesize backButtonConstraints=_backButtonConstraints;
@property(retain, nonatomic) NSLayoutConstraint *trailingBarNoItemsConstraint; // @synthesize trailingBarNoItemsConstraint=_trailingBarNoItemsConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingBarConstraint; // @synthesize trailingBarConstraint=_trailingBarConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingBarNoItemsConstraint; // @synthesize leadingBarNoItemsConstraint=_leadingBarNoItemsConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingBarConstraint; // @synthesize leadingBarConstraint=_leadingBarConstraint;
@property(retain, nonatomic) _UIButtonBarButton *backBarButton; // @synthesize backBarButton=_backBarButton;
@property(retain, nonatomic) _UIButtonBar *trailingBar; // @synthesize trailingBar=_trailingBar;
@property(retain, nonatomic) _UIButtonBar *leadingBar; // @synthesize leadingBar=_leadingBar;
@property(retain, nonatomic) _CarTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool havePrepared; // @synthesize havePrepared=_havePrepared;
@property(readonly, nonatomic) _Bool compactMetrics; // @synthesize compactMetrics=_compactMetrics;
- (void)_installGradientLayerMaskForClippingView:(id)arg1;
- (void)_configureBackground;
- (void)changeAppearance;
- (double)absorptionForItem:(id)arg1;
@property(readonly, nonatomic) double backButtonMaximumWidth;
@property(readonly, nonatomic) double backButtonMargin;
- (id)backIndicatorMaskImage;
- (id)backIndicatorImage;
- (id)defaultFontDescriptor;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
@property(readonly, nonatomic) double defaultTextPadding;
@property(readonly, nonatomic) double defaultEdgeSpacing;
@property(readonly, nonatomic) _Bool centerTextButtons;
@property(readonly, nonatomic) UIColor *tintColor;
- (long long)barMetrics;
@property(readonly, nonatomic) long long barType;
@property(readonly, nonatomic) _UIBarButtonItemAppearanceStorage *appearanceStorage; // @synthesize appearanceStorage=_appearanceStorage;
@property(readonly, nonatomic) _Bool isRTL;
- (void)navigationItemUpdatedLargeTitleDisplayMode:(id)arg1;
- (void)navigationItemUpdatedLargeTitleContent:(id)arg1;
- (void)navigationItem:(id)arg1 appearance:(id)arg2 categoriesChanged:(long long)arg3;
- (void)navigationItemUpdatedScrollEdgeProgress:(id)arg1;
- (void)navigationItemUpdatedSearchController:(id)arg1 oldSearchController:(id)arg2;
- (void)navigationItemUpdatedPromptContent:(id)arg1;
- (void)navigationItemUpdatedCanvasView:(id)arg1;
- (void)navigationItemUpdatedBottomPalette:(id)arg1 oldPalette:(id)arg2;
- (void)navigationItemUpdatedBackgroundAppearance:(id)arg1;
- (void)navigationItemSearchControllerReadyForDeferredAutomaticShowsScopeBar:(id)arg1;
- (void)navigationItemUpdatedRightBarButtonItems:(id)arg1 animated:(_Bool)arg2;
- (void)navigationItemUpdatedLeftBarButtonItems:(id)arg1 animated:(_Bool)arg2;
- (void)navigationItemUpdatedBackButtonContent:(id)arg1 animated:(_Bool)arg2;
- (void)navigationItemUpdatedContentLayout:(id)arg1 animated:(_Bool)arg2;
- (void)navigationItemUpdatedTitleContent:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigationItemIsBackItem:(id)arg1;
- (_Bool)navigationItemIsTopItem:(id)arg1;
- (void)_updateContentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2 direction:(unsigned long long)arg3;
- (void)_updateContentForTopItem:(id)arg1 backItem:(id)arg2 animated:(_Bool)arg3 direction:(unsigned long long)arg4;
- (void)__backButtonAction;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)animateForSearchPresentation:(_Bool)arg1;
- (void)dismissHostedSearchWithTransitionCoordinator:(id)arg1;
- (void)presentHostedSearchWithTransitionCoordinator:(id)arg1;
- (void)navigationBarInvalidatedResolvedLayoutMargins;
- (void)popAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareForPop;
- (void)pushAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateTopNavigationItemAnimated:(_Bool)arg1;
- (void)setupTopNavigationItem;
- (void)prepareForPush;
- (void)stackDidChangeFrom:(id)arg1;
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;
- (void)teardown;
- (void)prepare;

// Remaining properties
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property(readonly) Class superclass;

@end

