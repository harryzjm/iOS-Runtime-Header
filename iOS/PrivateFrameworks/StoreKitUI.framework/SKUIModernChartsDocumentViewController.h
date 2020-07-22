//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUIModalSourceViewProvider-Protocol.h>
#import <StoreKitUI/SKUIResourceLoaderDelegate-Protocol.h>

@class NSMutableArray, NSString, SKUIActivityIndicatorView, SKUIChartsTemplateViewElement, SKUILayoutCache, SKUIModernChartsView, SKUIResourceLoader, SKUIViewElementLayoutContext;

@interface SKUIModernChartsDocumentViewController <SKUIResourceLoaderDelegate, SKUIDocumentViewController, SKUIModalSourceViewProvider>
{
    SKUIActivityIndicatorView *_activityIndicatorView;
    SKUIModernChartsView *_chartsView;
    NSMutableArray *_columnViewControllers;
    SKUILayoutCache *_layoutCache;
    SKUIChartsTemplateViewElement *_templateElement;
    SKUIViewElementLayoutContext *_viewLayoutContext;
    SKUIResourceLoader *_resourceLoader;
}

- (void).cxx_destruct;
- (id)_resourceLoader;
- (id)_viewLayoutContext;
- (struct CGRect)_computedFrameForActivityIndicatorView;
- (void)_showActivityIndicator;
- (void)_reloadWithTemplateElement:(id)arg1;
- (id)_newColumnViewControllersWithReusableViewControllers:(id)arg1;
- (id)_layoutCache;
- (void)_hideActivityIndicator;
- (struct UIEdgeInsets)_contentInset;
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;
- (void)resourceLoaderDidBeginLoading:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)contentScrollView;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
