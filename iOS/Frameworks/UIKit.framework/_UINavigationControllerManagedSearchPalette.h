//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UISearchBar, UIView;

__attribute__((visibility("hidden")))
@interface _UINavigationControllerManagedSearchPalette
{
    _Bool _ignoreGeometryChanges;
    CDUnknownBlockType _resetAfterSearchFieldFade;
    UISearchBar *__searchBar;
}

@property(nonatomic, setter=_setSearchBar:) __weak UISearchBar *_searchBar; // @synthesize _searchBar=__searchBar;
@property(copy, nonatomic) CDUnknownBlockType resetAfterSearchFieldFade; // @synthesize resetAfterSearchFieldFade=_resetAfterSearchFieldFade;
@property(nonatomic) _Bool ignoreGeometryChanges; // @synthesize ignoreGeometryChanges=_ignoreGeometryChanges;
- (void).cxx_destruct;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
@property(nonatomic, setter=_setShadowAlpha:) double _shadowAlpha;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_popDisableLayoutFlushingForTransition;
- (void)_pushDisableLayoutFlushingForTransition;
- (void)_updateLayoutForCurrentConfiguration;
@property(readonly, nonatomic) UIView *viewForAsymmetricFade;
- (_Bool)_supportsSpecialSearchBarTransitions;
- (id)_initWithNavigationController:(id)arg1 forEdge:(unsigned long long)arg2;

@end

