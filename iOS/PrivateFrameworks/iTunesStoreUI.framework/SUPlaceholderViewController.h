//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SUGradient, SUGradientView, SULoadingView;

@interface SUPlaceholderViewController
{
    SUGradient *_backgroundGradient;
    SUGradient *_defaultBackgroundGradient;
    _Bool _hideLoadingView;
    SULoadingView *_loadingView;
    SUGradientView *_gradientView;
}

@property(copy, nonatomic) SUGradient *defaultBackgroundGradient; // @synthesize defaultBackgroundGradient=_defaultBackgroundGradient;
@property(copy, nonatomic) SUGradient *backgroundGradient; // @synthesize backgroundGradient=_backgroundGradient;
- (void)_reloadLoadingView;
- (void)_reloadBackgroundGradient;
- (id)_newURLBagBackgroundGradient;
- (id)_copyActiveGradient;
- (void)_bagDidLoadNotification:(id)arg1;
- (void)setScriptProperties:(id)arg1;
- (void)setSkLoading:(_Bool)arg1;
- (void)parentViewControllerHierarchyDidChange;
- (void)loadView;
- (id)copyDefaultScriptProperties;
- (id)copyArchivableContext;
@property(nonatomic) _Bool shouldShowLoadingView;
@property(readonly, nonatomic) SULoadingView *loadingView;
- (void)dealloc;
- (id)init;

@end

