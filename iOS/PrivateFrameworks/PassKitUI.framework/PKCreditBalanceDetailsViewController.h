//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewController.h>

#import <PassKitUI/PKAccountServiceObserver-Protocol.h>

@class NSArray, NSDateFormatter, NSDictionary, NSString, PKAccount, PKBalanceSummary, PKBalanceSummaryFetcher, PKCreditAccountStatement, PKCreditAccountSummary, PKDashboardBalanceItem, PKDashboardBalancePresenter, PKDashboardBalanceSummaryItem, PKDashboardBalanceSummaryItemPresenter, PKDashboardFooterTextView, PKDashboardTitleHeaderView, PKDashboardTransactionFetcher, PKPaymentWebService, PKTransactionSource;

@interface PKCreditBalanceDetailsViewController : UICollectionViewController <PKAccountServiceObserver>
{
    PKTransactionSource *_transactionSource;
    PKAccount *_account;
    unsigned long long _feature;
    PKCreditAccountStatement *_statement;
    PKCreditAccountStatement *_previousStatement;
    PKBalanceSummaryFetcher *_fetcher;
    PKCreditAccountSummary *_accountSummary;
    PKPaymentWebService *_webService;
    PKDashboardTransactionFetcher *_transactionFetcher;
    PKDashboardBalancePresenter *_balancePresenter;
    PKDashboardBalanceSummaryItemPresenter *_balanceSummaryItemPresenter;
    PKDashboardBalanceItem *_balanceItem;
    PKDashboardBalanceSummaryItem *_lastStatementSummaryItem;
    PKDashboardBalanceSummaryItem *_currentSpendingSummaryItem;
    PKDashboardBalanceSummaryItem *_interestSummaryItem;
    PKDashboardBalanceSummaryItem *_paymentsAndCreditsSummaryItem;
    PKDashboardBalanceSummaryItem *_paymentsSummaryItem;
    PKDashboardBalanceSummaryItem *_creditsSummaryItem;
    PKDashboardBalanceSummaryItem *_dailyCashSummaryItem;
    PKDashboardBalanceSummaryItem *_installmentBalanceSummaryItem;
    PKDashboardBalanceSummaryItem *_creditLimitSummaryItem;
    PKDashboardBalanceSummaryItem *_totalBalanceSummaryItem;
    PKDashboardBalanceSummaryItem *_availableCreditSummaryItem;
    NSArray *_totalBalanceItems;
    NSArray *_usageItems;
    PKDashboardBalanceSummaryItem *_statementDownloadSummaryItem;
    PKDashboardBalanceSummaryItem *_exportTransactionDataSummaryItem;
    NSArray *_buttonItems;
    PKBalanceSummary *_balanceSummary;
    NSArray *_statements;
    NSDictionary *_statementsByYear;
    NSArray *_sortedYears;
    NSDateFormatter *_monthYearFormatter;
    PKDashboardTitleHeaderView *_sampleHeaderView;
    PKDashboardFooterTextView *_sampleFooterView;
    NSArray *_sectionMap;
    unsigned long long _numberOfStaticSections;
    long long _style;
    NSString *_pageTagForAnalyticsReporting;
}

- (void).cxx_destruct;
- (void)_reportEventForPassIfNecessary:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)statementsChangedForAccountIdentifier:(id)arg1;
- (_Bool)_shouldInset;
- (void)_updateStatements;
- (void)_sortStatementsForPresentation;
- (void)_reloadData;
- (id)_createSummaryItemOfType:(unsigned long long)arg1;
- (void)_configureFooterView:(id)arg1 inSectionIndex:(unsigned long long)arg2;
- (void)_configureHeaderView:(id)arg1 inSectionIndex:(unsigned long long)arg2;
- (_Bool)_hasFooterForSectionIndex:(unsigned long long)arg1;
- (_Bool)_hasHeaderForSectionIndex:(unsigned long long)arg1;
- (id)_summaryItemForIndexPath:(id)arg1;
- (unsigned long long)_sectionForIndex:(unsigned long long)arg1;
- (void)showStatement:(id)arg1 style:(long long)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1 transactionSource:(id)arg2 webService:(id)arg3 account:(id)arg4 statement:(id)arg5 previousStatements:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
