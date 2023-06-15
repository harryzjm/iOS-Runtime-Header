//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIView, VKCActionInfoMoreButton, VKCActionInfoViewLayoutContext, VKCVisualSearchCornerView, VKImageAnalysisButton;

__attribute__((visibility("hidden")))
@interface VKCActionInfoView
{
    _Bool _quickActionsDisabled;
    _Bool _liveTextButtonDisabled;
    _Bool _visualSearchCornerViewDisabled;
    _Bool _layoutUpdatesSuspended;
    _Bool _shouldAnimateQuickActionVisibilityChanges;
    _Bool __quickActionsHidden;
    _Bool _automaticVisualRectLayoutDisabled;
    _Bool _alignQuickActionsWithVerticalCenter;
    _Bool _wantsTranslucentActionInfoButtons;
    _Bool _isShowingSingleTapMoreButtonMenu;
    VKImageAnalysisButton *_liveTextButton;
    VKCVisualSearchCornerView *_visualSearchCornerView;
    NSArray *_quickActions;
    UIView *_containerView;
    UIView *_textButtonContainer;
    UIView *_visualSearchContainer;
    UIView *_moreButtonContainer;
    VKCActionInfoMoreButton *_moreButton;
    VKCActionInfoViewLayoutContext *_layoutContext;
    double _preferredQuickActionButtonHeight;
    CDUnknownBlockType _quickActionConfigurationUpdateHandler;
    struct CGRect _contentsRect;
    struct CGRect _normalizedVisibleRect;
    struct UIEdgeInsets _edgeInsets;
}

+ (id)buildMoreButtonMenuFromQuickActions:(id)arg1 moreButton:(id)arg2 isStandAloneMoreButton:(_Bool)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool isShowingSingleTapMoreButtonMenu; // @synthesize isShowingSingleTapMoreButtonMenu=_isShowingSingleTapMoreButtonMenu;
@property(copy, nonatomic) CDUnknownBlockType quickActionConfigurationUpdateHandler; // @synthesize quickActionConfigurationUpdateHandler=_quickActionConfigurationUpdateHandler;
@property(nonatomic) _Bool wantsTranslucentActionInfoButtons; // @synthesize wantsTranslucentActionInfoButtons=_wantsTranslucentActionInfoButtons;
@property(nonatomic) double preferredQuickActionButtonHeight; // @synthesize preferredQuickActionButtonHeight=_preferredQuickActionButtonHeight;
@property(nonatomic) _Bool alignQuickActionsWithVerticalCenter; // @synthesize alignQuickActionsWithVerticalCenter=_alignQuickActionsWithVerticalCenter;
@property(nonatomic) _Bool automaticVisualRectLayoutDisabled; // @synthesize automaticVisualRectLayoutDisabled=_automaticVisualRectLayoutDisabled;
@property(nonatomic) _Bool _quickActionsHidden; // @synthesize _quickActionsHidden=__quickActionsHidden;
@property(retain, nonatomic) VKCActionInfoViewLayoutContext *layoutContext; // @synthesize layoutContext=_layoutContext;
@property(retain, nonatomic) VKCActionInfoMoreButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIView *moreButtonContainer; // @synthesize moreButtonContainer=_moreButtonContainer;
@property(retain, nonatomic) UIView *visualSearchContainer; // @synthesize visualSearchContainer=_visualSearchContainer;
@property(retain, nonatomic) UIView *textButtonContainer; // @synthesize textButtonContainer=_textButtonContainer;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool shouldAnimateQuickActionVisibilityChanges; // @synthesize shouldAnimateQuickActionVisibilityChanges=_shouldAnimateQuickActionVisibilityChanges;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) _Bool layoutUpdatesSuspended; // @synthesize layoutUpdatesSuspended=_layoutUpdatesSuspended;
@property(nonatomic) _Bool visualSearchCornerViewDisabled; // @synthesize visualSearchCornerViewDisabled=_visualSearchCornerViewDisabled;
@property(nonatomic) _Bool liveTextButtonDisabled; // @synthesize liveTextButtonDisabled=_liveTextButtonDisabled;
@property(nonatomic) _Bool quickActionsDisabled; // @synthesize quickActionsDisabled=_quickActionsDisabled;
@property(copy, nonatomic) NSArray *quickActions; // @synthesize quickActions=_quickActions;
@property(retain, nonatomic) VKCVisualSearchCornerView *visualSearchCornerView; // @synthesize visualSearchCornerView=_visualSearchCornerView;
@property(retain, nonatomic) VKImageAnalysisButton *liveTextButton; // @synthesize liveTextButton=_liveTextButton;
@property(nonatomic) struct CGRect normalizedVisibleRect; // @synthesize normalizedVisibleRect=_normalizedVisibleRect;
@property(nonatomic) struct CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
- (_Bool)isInteractableView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)containsInteractableItemAtPoint:(struct CGPoint)arg1;
- (id)createContainerForView:(id)arg1;
- (struct CGSize)sizeForView:(id)arg1 scale:(double)arg2;
- (id)configureView:(id)arg1 isLeading:(_Bool)arg2 container:(id)arg3 layoutContext:(id)arg4;
- (void)processView:(id)arg1 hasContent:(_Bool)arg2 isLeading:(_Bool)arg3 layoutContext:(id)arg4;
- (void)updateFramesForContext:(id)arg1;
- (void)updateMoreButtonMenuForContext:(id)arg1;
- (void)adjustContextToFitWidth:(id)arg1;
- (void)layoutContainerView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
@property(readonly, nonatomic) NSArray *allViews;
- (void)_applyConfigurationUpdateHandlerToQuickActions;
- (void)updateLayoutIfNecessary;
- (void)setHidden:(_Bool)arg1;
@property(readonly, nonatomic) struct CGRect visibleImageRect;
- (id)initWithLiveTextButton:(id)arg1 cornerView:(id)arg2;

@end

