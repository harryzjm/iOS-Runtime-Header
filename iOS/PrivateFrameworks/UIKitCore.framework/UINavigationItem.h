//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/_UIBarAppearanceChangeObserver-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, UIBarButtonItem, UIImageView, UINavigationBar, UINavigationBarAppearance, UISearchController, UIView, _UINavigationBarItemStackEntry, _UINavigationBarPalette;
@protocol _UINavigationItemChangeObserver;

@interface UINavigationItem : NSObject <_UIBarAppearanceChangeObserver, NSCoding>
{
    NSString *_title;
    NSString *_backButtonTitle;
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_synthesizedBackBarButtonItem;
    NSString *_prompt;
    long long _tag;
    id _context;
    UINavigationBar *_navigationBar;
    UIView *_defaultTitleView;
    UIView *_titleView;
    UIView *_backButtonView;
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    NSArray *_customLeftViews;
    NSArray *_customRightViews;
    _Bool _hidesBackButton;
    _Bool _leftItemsSupplementBackButton;
    UISearchController *_searchController;
    _Bool _alwaysShowsSearchBar;
    UIImageView *_frozenTitleView;
    NSArray *_abbreviatedBackButtonTitles;
    NSMutableDictionary *_minimumDesiredHeights;
    _Bool _manualScrollEdgeAppearanceEnabled;
    _Bool _alwaysUseManualScrollEdgeAppearance;
    _Bool __alignLargeTitleAccessoryViewToBaseline;
    _Bool __backgroundHidden;
    _Bool _useRelativeLargeTitleInsets;
    _Bool __preserveSearchBarAcrossTransitions;
    double _fontScaleAdjustment;
    _UINavigationBarPalette *_bottomPalette;
    NSString *_pendingTitle;
    double _manualScrollEdgeAppearanceProgress;
    double _autoScrollEdgeTransitionDistance;
    NSArray *_leftItemSpaceList;
    NSArray *_rightItemSpaceList;
    unsigned long long _leftFlexibleSpaceCount;
    unsigned long long _rightFlexibleSpaceCount;
    long long _backButtonDisplayMode;
    long long _largeTitleDisplayMode;
    UINavigationBarAppearance *_standardAppearance;
    UINavigationBarAppearance *_compactAppearance;
    UINavigationBarAppearance *_scrollEdgeAppearance;
    id <_UINavigationItemChangeObserver> __changeObserver;
    _UINavigationBarItemStackEntry *__stackEntry;
    double __titleViewWidthForAnimations;
    double __idealCustomTitleWidth;
    unsigned long long __largeTitleAccessoryViewHorizontalAlignment;
    UINavigationBar *__owningNavigationBar;
    UIView *__largeTitleAccessoryView;
    unsigned long long __largeTitleTwoLineMode;
    NSString *__weeTitle;
    UIView *__canvasView;
    NSArray *__alternateLargeTitles;
    struct NSDirectionalEdgeInsets _largeTitleInsets;
}

+ (id)defaultFont;
- (void).cxx_destruct;
@property(nonatomic, setter=_setPreserveSearchBarAcrossTransitions:) _Bool _preserveSearchBarAcrossTransitions; // @synthesize _preserveSearchBarAcrossTransitions=__preserveSearchBarAcrossTransitions;
@property(retain, nonatomic) NSArray *_alternateLargeTitles; // @synthesize _alternateLargeTitles=__alternateLargeTitles;
@property(nonatomic) _Bool useRelativeLargeTitleInsets; // @synthesize useRelativeLargeTitleInsets=_useRelativeLargeTitleInsets;
@property(nonatomic) struct NSDirectionalEdgeInsets largeTitleInsets; // @synthesize largeTitleInsets=_largeTitleInsets;
@property(retain, nonatomic, setter=_setCanvasView:) UIView *_canvasView; // @synthesize _canvasView=__canvasView;
@property(nonatomic) __weak UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic, setter=_setBackgroundHidden:) _Bool _backgroundHidden; // @synthesize _backgroundHidden=__backgroundHidden;
@property(copy, nonatomic, setter=_setWeeTitle:) NSString *_weeTitle; // @synthesize _weeTitle=__weeTitle;
@property(nonatomic, setter=_setLargeTitleTwoLineMode:) unsigned long long _largeTitleTwoLineMode; // @synthesize _largeTitleTwoLineMode=__largeTitleTwoLineMode;
@property(retain, nonatomic, setter=_setLargeTitleAccessoryView:) UIView *_largeTitleAccessoryView; // @synthesize _largeTitleAccessoryView=__largeTitleAccessoryView;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic, getter=_owningNavigationBar, setter=_setOwningNavigationBar:) __weak UINavigationBar *_owningNavigationBar; // @synthesize _owningNavigationBar=__owningNavigationBar;
@property(readonly, nonatomic) unsigned long long _largeTitleAccessoryViewHorizontalAlignment; // @synthesize _largeTitleAccessoryViewHorizontalAlignment=__largeTitleAccessoryViewHorizontalAlignment;
@property(readonly, nonatomic) _Bool _alignLargeTitleAccessoryViewToBaseline; // @synthesize _alignLargeTitleAccessoryViewToBaseline=__alignLargeTitleAccessoryViewToBaseline;
@property(nonatomic, setter=_setIdealCustomTitleWidth:) double _idealCustomTitleWidth; // @synthesize _idealCustomTitleWidth=__idealCustomTitleWidth;
@property(nonatomic) double _titleViewWidthForAnimations; // @synthesize _titleViewWidthForAnimations=__titleViewWidthForAnimations;
@property(nonatomic, setter=_setStackEntry:) _UINavigationBarItemStackEntry *_stackEntry; // @synthesize _stackEntry=__stackEntry;
@property(nonatomic, setter=_setChangeObserver:) __weak id <_UINavigationItemChangeObserver> _changeObserver; // @synthesize _changeObserver=__changeObserver;
@property(copy, nonatomic) UINavigationBarAppearance *scrollEdgeAppearance; // @synthesize scrollEdgeAppearance=_scrollEdgeAppearance;
@property(copy, nonatomic) UINavigationBarAppearance *compactAppearance; // @synthesize compactAppearance=_compactAppearance;
@property(copy, nonatomic) UINavigationBarAppearance *standardAppearance; // @synthesize standardAppearance=_standardAppearance;
@property(nonatomic) long long largeTitleDisplayMode; // @synthesize largeTitleDisplayMode=_largeTitleDisplayMode;
@property(nonatomic) long long backButtonDisplayMode; // @synthesize backButtonDisplayMode=_backButtonDisplayMode;
@property(nonatomic, setter=_setRightFlexibleSpaceCount:) unsigned long long _rightFlexibleSpaceCount; // @synthesize _rightFlexibleSpaceCount;
@property(nonatomic, setter=_setLeftFlexibleSpaceCount:) unsigned long long _leftFlexibleSpaceCount; // @synthesize _leftFlexibleSpaceCount;
@property(copy, nonatomic, setter=_setRightItemSpaceList:) NSArray *_rightItemSpaceList; // @synthesize _rightItemSpaceList;
@property(copy, nonatomic, setter=_setLeftItemSpaceList:) NSArray *_leftItemSpaceList; // @synthesize _leftItemSpaceList;
@property(nonatomic, setter=_setAutoScrollEdgeTransitionDistance:) double _autoScrollEdgeTransitionDistance; // @synthesize _autoScrollEdgeTransitionDistance;
@property(nonatomic, setter=_setManualScrollEdgeAppearanceProgress:) double _manualScrollEdgeAppearanceProgress; // @synthesize _manualScrollEdgeAppearanceProgress;
@property(nonatomic, setter=_setAlwaysUseManualScrollEdgeAppearance:) _Bool _alwaysUseManualScrollEdgeAppearance; // @synthesize _alwaysUseManualScrollEdgeAppearance;
@property(nonatomic, getter=_isManualScrollEdgeAppearanceEnabled, setter=_setManualScrollEdgeAppearanceEnabled:) _Bool _manualScrollEdgeAppearanceEnabled; // @synthesize _manualScrollEdgeAppearanceEnabled;
@property(copy, nonatomic, setter=_setPendingTitle:) NSString *_pendingTitle; // @synthesize _pendingTitle;
@property(retain, nonatomic, setter=_setBottomPalette:) _UINavigationBarPalette *_bottomPalette; // @synthesize _bottomPalette;
@property(nonatomic, setter=_setFontScaleAdjustment:) double _fontScaleAdjustment; // @synthesize _fontScaleAdjustment;
- (void)appearance:(id)arg1 categoriesChanged:(long long)arg2;
- (id)_independentShadowImage;
- (id)_independentBackgroundImageForBarMetrics:(long long)arg1;
- (void)_setIndependentBackgroundImage:(id)arg1 shadowImage:(id)arg2 forBarMetrics:(long long)arg3;
@property(nonatomic) _Bool leftItemsSupplementBackButton;
@property(nonatomic, setter=_setIndependentBarStyle:) long long _independentBarStyle;
- (_Bool)_needsSizeTransitionToItem:(id)arg1 barMetrics:(long long)arg2 defaultHeightBlock:(CDUnknownBlockType)arg3;
- (id)_minimumDesiredHeights;
- (double)_desiredHeightForBarMetrics:(long long)arg1 defaultHeightBlock:(CDUnknownBlockType)arg2;
- (double)_minimumDesiredHeightForBarMetrics:(long long)arg1;
- (void)_setMinimumDesiredHeight:(double)arg1 forBarMetrics:(long long)arg2;
- (id)_firstNonSpaceRightItem;
- (id)_firstNonSpaceLeftItem;
- (id)_firstNonSpaceItemInList:(id)arg1;
- (void)setCustomRightItem:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIBarButtonItem *customRightItem;
- (void)setCustomLeftItem:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIBarButtonItem *customLeftItem;
@property(retain, nonatomic) UIView *customTitleView;
- (id)_titleView;
- (id)_defaultTitleView;
- (_Bool)_hasDefaultTitleView;
- (void)_updateViewsForBarSizeChangeAndApply:(_Bool)arg1;
- (void)_removeContentInView:(id)arg1;
- (_Bool)_accumulateViewsFromItems:(id)arg1 isLeft:(_Bool)arg2 refreshViews:(_Bool)arg3;
- (void)_setBottomPaletteNeedsUpdate;
- (void)_setBottomPaletteNeedsUpdate:(id)arg1;
- (void)_setCustomRightViews:(id)arg1;
- (void)_setCustomLeftViews:(id)arg1;
- (void)setLeftBarButtonItems:(id)arg1 animated:(_Bool)arg2;
- (void)setRightBarButtonItems:(id)arg1 animated:(_Bool)arg2;
- (id)_leftBarButtonItems;
- (void)_setLeftBarButtonItems:(id)arg1;
- (id)_rightBarButtonItems;
- (void)_setRightBarButtonItems:(id)arg1;
@property(copy, nonatomic) NSArray *rightBarButtonItems;
@property(copy, nonatomic) NSArray *leftBarButtonItems;
- (void)setCustomRightView:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIView *customRightView;
- (void)_setCustomRightView:(id)arg1;
- (id)_customRightView;
- (id)_customRightViewCreating:(_Bool)arg1;
- (id)_customRightViews;
- (id)_customRightViewsCreating:(_Bool)arg1;
- (void)setCustomLeftView:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIView *customLeftView;
- (void)_setCustomLeftView:(id)arg1;
- (void)_setCustomLeftRightView:(id)arg1 left:(_Bool)arg2;
- (id)_customLeftView;
- (id)_customLeftViewCreating:(_Bool)arg1;
- (id)_customLeftViews;
- (id)_customLeftViewsCreating:(_Bool)arg1;
- (void)_movedFromTopOfStack:(_Bool)arg1;
- (void)_movedToTopOfStack:(_Bool)arg1;
- (void)_movingFromTopOfStack;
- (void)_movingToTopOfStack;
- (void)set_alwaysUseManualScrollEdgeAppearance:(_Bool)arg1;
@property(nonatomic, setter=_setBackButtonDisplayMode:) unsigned long long _backButtonDisplayMode;
@property(nonatomic) _Bool hidesSearchBarWhenScrolling;
@property(readonly, nonatomic) _Bool _hidesSearchBarWhenScrollingIfAllowed;
@property(retain, nonatomic) UISearchController *searchController;
- (void)_messageChangeObserver:(id)arg1 forTransitionFromSearchController:(id)arg2;
@property(readonly, nonatomic) UISearchController *_searchControllerIfAllowed;
- (void)setRightBarButtonItem:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem;
- (void)_setRightBarButtonItem:(id)arg1;
- (id)_rightBarButtonItem;
- (void)setLeftBarButtonItem:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIBarButtonItem *leftBarButtonItem;
- (void)_setLeftBarButtonItem:(id)arg1;
- (id)_leftBarButtonItem;
- (void)setObject:(id)arg1 forLeftRightKeyPath:(id)arg2 animated:(_Bool)arg3;
- (void)_updateBarItemOwnersTo:(id)arg1;
- (void)set_customRightViews:(id)arg1;
- (void)set_customLeftViews:(id)arg1;
- (void)set_leftBarButtonItems:(id)arg1;
- (void)set_rightBarButtonItems:(id)arg1;
- (void)set_customLeftView:(id)arg1;
- (void)set_customRightView:(id)arg1;
- (void)set_rightBarButtonItem:(id)arg1;
- (void)set_leftBarButtonItem:(id)arg1;
- (id)_buttonForBackButtonIndicator;
- (id)_barButtonForBackButtonIndicator;
- (_Bool)_wantsBackButtonIndicator;
- (_Bool)_leftItemsWantBackButton;
- (void)setHidesBackButton:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool hidesBackButton;
- (void)updateNavigationBarButtonsAnimated:(_Bool)arg1;
- (void)_updateItemsForLetterpressImagesVisualStateIfNecessary;
@property(copy, nonatomic) NSString *prompt;
- (void)_setLargeTitleViewDataSource:(id)arg1;
- (void)_setTitleViewDataSource:(id)arg1;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
- (id)backButtonView;
- (id)existingBackButtonView;
- (void)_replaceCustomLeftRightViewAtIndex:(unsigned long long)arg1 withView:(id)arg2 left:(_Bool)arg3;
- (void)_removeBackButtonView;
- (void)_removeTitleAndButtonViews;
- (void)_removeBarButtonItemViews;
@property(retain, nonatomic) UIBarButtonItem *backBarButtonItem;
- (id)_effectiveBackBarButtonItem;
- (id)_backButtonTitleAllowingGenericTitles:(_Bool)arg1;
- (id)currentBackButtonTitle;
@property(copy, nonatomic) NSString *backButtonTitle;
@property(copy, nonatomic) NSString *title;
- (void)_setBackButtonTitle:(id)arg1 lineBreakMode:(long long)arg2;
@property(nonatomic, setter=_setSupportsTwoLineLargeTitles:) _Bool _supportsTwoLineLargeTitles;
- (void)_setLargeTitleAccessoryView:(id)arg1 alignToBaseline:(_Bool)arg2 horizontalAlignment:(unsigned long long)arg3;
- (void)_setLargeTitleAccessoryView:(id)arg1 alignToBaseline:(_Bool)arg2;
- (void)_setTitle:(id)arg1 animated:(_Bool)arg2;
- (void)_setTitle:(id)arg1 animated:(_Bool)arg2 matchBarButtonItemAnimationDuration:(_Bool)arg3;
- (id)_addDefaultTitleViewToNavigationBarIfNecessary:(id)arg1;
- (void)_cleanupFrozenTitleView;
- (void)_freezeCurrentTitleView;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (id)init;
- (void)_setBackButtonPressed:(_Bool)arg1;
@property(copy, nonatomic, setter=_setAbbreviatedBackButtonTitles:) NSArray *_abbreviatedBackButtonTitles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
