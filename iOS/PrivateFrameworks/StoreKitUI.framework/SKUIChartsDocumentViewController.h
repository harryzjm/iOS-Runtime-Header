//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUIResourceLoaderDelegate-Protocol.h>

@class NSMutableArray, NSString, SKUIChartColumnsView, SKUIChartsTemplateViewElement, SKUIResourceLoader;

@interface SKUIChartsDocumentViewController <SKUIResourceLoaderDelegate, SKUIDocumentViewController>
{
    SKUIChartColumnsView *_chartsView;
    NSMutableArray *_columnViewControllers;
    SKUIChartsTemplateViewElement *_templateElement;
    SKUIResourceLoader *_resourceLoader;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
- (void).cxx_destruct;
- (id)_resourceLoader;
- (long long)_visibleColumnCountForWidth:(double)arg1;
- (id)_newColumnViewControllersWithReusableViewControllers:(id)arg1;
- (id)_columnViewControllers;
- (struct UIEdgeInsets)_chartInsets;
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;
- (void)resourceLoaderDidBeginLoading:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)loadView;
- (id)contentScrollView;
- (void)skui_viewWillAppear:(_Bool)arg1;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

