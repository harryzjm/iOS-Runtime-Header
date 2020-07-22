//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/ISURLOperationDelegate-Protocol.h>
#import <iTunesStoreUI/SUTermsAndConditionsViewDelegate-Protocol.h>

@class NSNumber, NSString, SUStructuredPage, UILabel;

@interface SUStructuredPageViewController <SUTermsAndConditionsViewDelegate, ISURLOperationDelegate>
{
    Class _dataSourceClass;
    UILabel *_noItemsLabel;
    SUStructuredPage *_structuredPage;
}

@property(retain, nonatomic) SUStructuredPage *structuredPage; // @synthesize structuredPage=_structuredPage;
@property(retain, nonatomic) Class dataSourceClass; // @synthesize dataSourceClass=_dataSourceClass;
- (void)_reloadTermsAndConditions;
- (void)_reloadNoItemsLabel;
- (void)_reloadLoadMoreCellAtIndexPath:(id)arg1;
- (void)_loadMoreWithURL:(id)arg1;
- (void)_loadMoreOperation:(id)arg1 finishedWithOutput:(id)arg2;
- (_Bool)_gotoURLForItem:(id)arg1 withURLIndex:(long long)arg2;
- (_Bool)_handleLoadMoreForIndexPath:(id)arg1;
- (id)viewControllerForPresentingAccountAlertControllerFromTermsAndConditionsView:(id)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)bannerCell:(id)arg1 tappedButtonAtIndex:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)storePageProtocol;
- (void)setSkLoading:(_Bool)arg1;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)reloadData;
- (_Bool)loadMoreWithURL:(id)arg1;
- (_Bool)hasDisplayableContent;
- (_Bool)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2;
- (struct CGRect)documentBounds;
- (_Bool)canSelectRowAtIndexPath:(id)arg1;
- (id)newTermsAndConditionsFooter;
- (id)newNoItemsOverlayLabel;
- (id)newDataSource;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

