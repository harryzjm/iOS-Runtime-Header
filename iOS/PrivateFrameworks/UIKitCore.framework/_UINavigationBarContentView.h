//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSLayoutConstraint, NSMutableArray, NSString, UIAction, UIBarButtonItem, UIBarButtonItemGroup, UIDeferredMenuElement, UIDocumentProperties, UIImage, UILayoutGuide, UIView, _UIBarButtonItemData, _UIBarButtonItemSearchBarGroup, _UIButtonBarButton, _UINavigationBarContentViewLayout, _UINavigationBarTransitionContext, _UINavigationItemRenameHandler, _UIPointerInteractionAssistant;
@protocol _UINavigationBarContentViewDelegate, _UINavigationBarContentViewVisualProvider;

__attribute__((visibility("hidden")))
@interface _UINavigationBarContentView
{
    _UINavigationBarTransitionContext *_transitionContext;
    UIImage *_backIndicatorImage;
    UIBarButtonItem *_backActionItem;
    _UIButtonBarButton *_staticNavBarButton;
    UILayoutGuide *_navItemContentLayoutGuide;
    NSLayoutConstraint *_staticNavBarButtonXPositionConstraint;
    NSArray *_staticNavBarButtonVerticalAlignmentConstraints;
    NSArray *_navItemContentLayoutGuideHorizEdgeConstraints;
    NSLayoutConstraint *_navItemContentLayoutGuideStaticButtonVisibilityAnimationConstraint;
    double _backButtonMaximumWidth;
    NSMutableArray *_currentAnimations;
    NSMutableArray *_currentCompletions;
    struct {
        unsigned int deferResolvedSizeChange:1;
        unsigned int outstandingDeferredResolvedSizeChange:1;
        unsigned int needsStaticNavBarButtonUpdate:1;
        unsigned int isHidingLeadingBar:1;
        unsigned int isAnimatingNavItemContentLayoutGuideForStaticNavBarButtonVisibility:1;
        unsigned int navItemContentLayoutGuideStaticButtonVisibilityAnimationConstraintNeedsInitialization:1;
        unsigned int shouldFadeStaticNavBarButton:1;
        unsigned int staticNavBarButtonLingers:1;
        unsigned int staticNavBarButtonIsActingAsFakeBackButton:1;
    } _navigationBarContentViewFlags;
    _Bool _backButtonHidden;
    _Bool _staticNavBarButtonTrailing;
    _Bool _leadingItemsSupplementBackItem;
    _Bool _allowLeadingAlignedLargeTitle;
    _Bool _enableAlternatePopItem;
    double _backButtonMargin;
    id <_UINavigationBarContentViewDelegate> _delegate;
    id <_UINavigationBarContentViewVisualProvider> _visualProvider;
    UIBarButtonItem *_backButtonItem;
    UIBarButtonItem *_staticNavBarButtonItem;
    NSArray *_leadingBarButtonItems;
    NSArray *_leadingBarGroups;
    NSArray *_centerBarGroups;
    NSString *_customizationIdentifier;
    NSArray *_trailingBarButtonItems;
    NSArray *_trailingBarGroups;
    UIBarButtonItemGroup *_fixedTrailingGroup;
    NSString *_title;
    UIView *_titleView;
    _UIBarButtonItemSearchBarGroup *_inlineSearchBarGroup;
    double _inlineTitleViewAlpha;
    NSDictionary *_titleAttributes;
    double _overrideSize;
    _UIPointerInteractionAssistant *_assistant;
    long long _requestedContentSize;
    long long _barMetrics;
    _UINavigationBarContentViewLayout *_layout;
    long long _toolbarStyle;
    CDUnknownBlockType _titleMenuProvider;
    UIDocumentProperties *_documentProperties;
    _UINavigationItemRenameHandler *_dci_renameHandler;
    UIAction *_backAction;
    UIDeferredMenuElement *_additionalItems;
    NSDictionary *_effectiveTitleAttributes;
    struct UIOffset _titlePositionAdjustment;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *effectiveTitleAttributes; // @synthesize effectiveTitleAttributes=_effectiveTitleAttributes;
@property(retain, nonatomic) UIDeferredMenuElement *additionalItems; // @synthesize additionalItems=_additionalItems;
@property(nonatomic) _Bool enableAlternatePopItem; // @synthesize enableAlternatePopItem=_enableAlternatePopItem;
@property(retain, nonatomic) UIAction *backAction; // @synthesize backAction=_backAction;
@property(retain, nonatomic, setter=dci_setRenameHandler:) _UINavigationItemRenameHandler *dci_renameHandler; // @synthesize dci_renameHandler=_dci_renameHandler;
@property(retain, nonatomic) UIDocumentProperties *documentProperties; // @synthesize documentProperties=_documentProperties;
@property(copy, nonatomic) CDUnknownBlockType titleMenuProvider; // @synthesize titleMenuProvider=_titleMenuProvider;
@property(nonatomic) long long toolbarStyle; // @synthesize toolbarStyle=_toolbarStyle;
@property(readonly, nonatomic) _UINavigationBarContentViewLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) long long barMetrics; // @synthesize barMetrics=_barMetrics;
@property(nonatomic) long long requestedContentSize; // @synthesize requestedContentSize=_requestedContentSize;
@property(nonatomic) __weak _UIPointerInteractionAssistant *assistant; // @synthesize assistant=_assistant;
@property(nonatomic) _Bool allowLeadingAlignedLargeTitle; // @synthesize allowLeadingAlignedLargeTitle=_allowLeadingAlignedLargeTitle;
@property(nonatomic) double overrideSize; // @synthesize overrideSize=_overrideSize;
@property(nonatomic) struct UIOffset titlePositionAdjustment; // @synthesize titlePositionAdjustment=_titlePositionAdjustment;
@property(copy, nonatomic) NSDictionary *titleAttributes; // @synthesize titleAttributes=_titleAttributes;
@property(nonatomic) double inlineTitleViewAlpha; // @synthesize inlineTitleViewAlpha=_inlineTitleViewAlpha;
@property(retain, nonatomic) _UIBarButtonItemSearchBarGroup *inlineSearchBarGroup; // @synthesize inlineSearchBarGroup=_inlineSearchBarGroup;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIBarButtonItemGroup *fixedTrailingGroup; // @synthesize fixedTrailingGroup=_fixedTrailingGroup;
@property(copy, nonatomic) NSArray *trailingBarGroups; // @synthesize trailingBarGroups=_trailingBarGroups;
@property(copy, nonatomic) NSArray *trailingBarButtonItems; // @synthesize trailingBarButtonItems=_trailingBarButtonItems;
@property(copy, nonatomic) NSString *customizationIdentifier; // @synthesize customizationIdentifier=_customizationIdentifier;
@property(copy, nonatomic) NSArray *centerBarGroups; // @synthesize centerBarGroups=_centerBarGroups;
@property(nonatomic) _Bool leadingItemsSupplementBackItem; // @synthesize leadingItemsSupplementBackItem=_leadingItemsSupplementBackItem;
@property(copy, nonatomic) NSArray *leadingBarGroups; // @synthesize leadingBarGroups=_leadingBarGroups;
@property(copy, nonatomic) NSArray *leadingBarButtonItems; // @synthesize leadingBarButtonItems=_leadingBarButtonItems;
@property(nonatomic, getter=isStaticNavBarButtonTrailing) _Bool staticNavBarButtonTrailing; // @synthesize staticNavBarButtonTrailing=_staticNavBarButtonTrailing;
@property(retain, nonatomic) UIBarButtonItem *staticNavBarButtonItem; // @synthesize staticNavBarButtonItem=_staticNavBarButtonItem;
@property(nonatomic) _Bool backButtonHidden; // @synthesize backButtonHidden=_backButtonHidden;
@property(retain, nonatomic) UIBarButtonItem *backButtonItem; // @synthesize backButtonItem=_backButtonItem;
@property(readonly, nonatomic) id <_UINavigationBarContentViewVisualProvider> visualProvider; // @synthesize visualProvider=_visualProvider;
@property(nonatomic) __weak id <_UINavigationBarContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double backButtonMargin; // @synthesize backButtonMargin=_backButtonMargin;
@property(readonly, copy) NSString *description;
- (id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint)arg1;
- (id)_accessibility_barButtonItemAtPoint:(struct CGPoint)arg1;
- (id)_accessibility_HUDItemForPoint:(struct CGPoint)arg1;
- (void)_itemDidChangeEnabledState:(id)arg1;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (id)titleViewBackButtonMenu:(id)arg1;
- (void)titleViewChangedMaximumBackButtonWidth:(id)arg1;
- (void)titleViewChangedPreferredDisplaySize:(id)arg1;
- (void)titleViewChangedDisplayItemAlpha:(id)arg1;
- (void)titleViewChangedStandardDisplayItems:(id)arg1;
- (void)titleViewChangedLayout:(id)arg1;
- (void)titleViewChangedHeight:(id)arg1;
- (void)titleViewChangedUnderlayContent:(id)arg1;
- (double)titleViewContentBaseHeight:(id)arg1;
- (double)titleViewContentBaselineOffsetFromTop:(id)arg1;
- (CDStruct_c3b9c2ee)titleViewLargeTitleHeightRange:(id)arg1;
- (double)titleViewLargeTitleHeight:(id)arg1;
- (void)titleView:(id)arg1 needsUpdatedContentOverlayRects:(id)arg2;
- (id)_layoutForAugmentedTitleView:(id)arg1;
- (struct CGRect)_overlayRectForView:(id)arg1 inTargetView:(id)arg2;
- (void)_clearAssistants;
- (void)_setAssistants;
@property(readonly, nonatomic) double buttonBarMinimumInterGroupSpace;
@property(readonly, nonatomic) double buttonBarMinimumInterItemSpace;
@property(copy, nonatomic) _UIBarButtonItemData *backButtonAppearance;
@property(copy, nonatomic) _UIBarButtonItemData *doneItemAppearance;
@property(copy, nonatomic) _UIBarButtonItemData *plainItemAppearance;
- (void)_appearanceChanged;
- (void)backButtonTitleDidChange;
@property(nonatomic, setter=_setBackButtonMaximumWidth:) double backButtonMaximumWidth;
- (void)setBackIndicatorImage:(id)arg1;
- (id)backIndicatorImage;
- (_Bool)isRTL;
- (long long)barType;
- (double)defaultEdgeSpacing;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAugmentedTitleViewNavigationBarTraitsTo:(id)arg1 from:(id)arg2;
- (void)tintColorDidChange;
- (void)relinquishLayout;
- (void)adoptNewLayout;
- (void)adoptLayout:(id)arg1;
- (void)clearTransitionContext;
- (void)finalizeStateFromTransition:(id)arg1;
- (void)ensureBackButtonTruncationOccursWithContext:(id)arg1;
- (void)recordToStateForTransition:(id)arg1;
- (void)prepareToRecordToState:(id)arg1;
- (void)recordFromStateForTransition:(id)arg1;
- (void)updateContentAnimated:(_Bool)arg1;
- (void)_clearAllAnimations;
- (void)_runAllScheduledAnimations:(_Bool)arg1;
- (void)_addCoordinatedAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UIView *accessibilityBackButtonView;
@property(readonly, nonatomic) UIView *accessibilityTitleView;
- (void)layoutSubviews;
- (void)_updateLayoutMarginsForLayout:(id)arg1;
- (void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets)arg1;
- (void)layoutMarginsDidChange;
- (void)_setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets)arg1;
- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)resolvedHeightDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (double)_intrinsicHeight;
- (void)_setupTitleView;
- (_Bool)_useLeadingAlignedTitle;
- (void)_setupTrailingButtonBarAnimated:(_Bool)arg1;
- (void)_setupCenterButtonBar;
- (void)_setupLeadingButtonBarAnimated:(_Bool)arg1;
- (void)setNeedsStaticNavBarButtonUpdate;
- (void)_setupBackButton;
- (void)_configureBackButton:(id)arg1;
- (void)__backButtonAction:(id)arg1;
- (void)_setupStaticNavBarButtonAnimated:(_Bool)arg1;
- (void)_updateStaticNavBarButtonVerticalAlignmentConstraints;
- (void)_updateNavItemContentLayoutGuideEdgeConstraints;
- (double)_contentLayoutGuideAnimationConstraintConstantForFullyHiddenButton;
- (double)_contentLayoutGuideAnimationConstraintConstantForFullyVisibleButton;
- (_Bool)_isStaticNavBarButtonOnRight;
- (void)endAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
@property(readonly, nonatomic, getter=isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange) _Bool animatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (_Bool)updateNavItemContentLayoutGuideAnimationConstraintConstant:(double)arg1;
- (_Bool)_backButtonLayoutGuideIncludesFullyHiddenConstant;
@property(readonly, nonatomic) double navItemContentLayoutGuideAnimationDistance;
- (void)beginAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (_Bool)_effectiveStaticNavBarButtonLingers;
@property(nonatomic) _Bool staticNavBarButtonLingers;
@property(nonatomic) _Bool shouldFadeStaticNavBarButton;
@property(readonly, nonatomic) _Bool isNavItemContentLayoutGuideFlushTrailing;
@property(readonly, nonatomic) _Bool isNavItemContentLayoutGuideFlushLeading;
@property(readonly, nonatomic) UILayoutGuide *navItemContentLayoutGuide;
- (long long)_effectiveToolbarStyle;
- (long long)effectiveStyleForStyle:(long long)arg1;
@property(readonly, nonatomic) double currentHeight;
- (_Bool)compactMetrics;
@property(readonly, nonatomic) long long currentContentSize;
- (id)initWithFrame:(struct CGRect)arg1 visualProvider:(id)arg2;
- (id)_newLayout;
- (long long)_currentContentSize;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

