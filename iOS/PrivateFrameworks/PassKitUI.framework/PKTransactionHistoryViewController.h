//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/CNAvatarViewDelegate-Protocol.h>

@class NSIndexPath, NSObject, NSString, PKAnimatedNavigationBarTitleView, PKContinuousButton, PKNavigationController, PKPaymentTransaction, PKSpendingSummaryFooterContainer, PKSpendingSummaryFooterView, PKTransactionSource, UIImageView;
@protocol OS_dispatch_source;

@interface PKTransactionHistoryViewController <CNAvatarViewDelegate>
{
    PKSpendingSummaryFooterView *_footer;
    PKSpendingSummaryFooterContainer *_footerContainer;
    _Bool _loadingMapsViewController;
    NSObject<OS_dispatch_source> *_loadingMapsTimer;
    PKContinuousButton *_detailsButton;
    PKContinuousButton *_phoneButton;
    PKContinuousButton *_messageButton;
    struct UIEdgeInsets _lastContentInset;
    double _headerHeight;
    PKNavigationController *_navigationController;
    NSIndexPath *_headerIndexPath;
    double _merchantHeaderAnimationProgress;
    PKAnimatedNavigationBarTitleView *_titleView;
    UIImageView *_titleIconImageView;
    NSString *_titleText;
    _Bool _isHeaderPinned;
    PKPaymentTransaction *_transaction;
    PKTransactionSource *_transactionSource;
    unsigned long long _historyType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long historyType; // @synthesize historyType=_historyType;
@property(readonly, nonatomic) PKTransactionSource *transactionSource; // @synthesize transactionSource=_transactionSource;
@property(readonly, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)_showMapsDetailsViewController;
- (void)_showContactDetailsViewController;
- (void)_handlePhoneButtonTapped:(id)arg1;
- (void)_handleMessageButtonTapped:(id)arg1;
- (void)_handleInfoButtonTapped:(id)arg1;
- (id)_barButtonItems;
- (CDStruct_8f3a66c8)pkui_navigationStatusBarStyleDescriptor;
- (void)_updateNavigationBarIconWithLogoURL:(id)arg1;
- (void)_updateHeaderCellWithAnimationProgress:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)updateContent;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_updateNavigationBarIconForNavigationBarAppeared:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)updateGroups:(id)arg1 headerGroup:(id)arg2;
- (id)initWithTransactionGroups:(id)arg1 headerGroup:(id)arg2 groupPresenter:(id)arg3 regionUpdater:(id)arg4 tokens:(id)arg5 transactionSource:(id)arg6 account:(id)arg7;
- (id)initWithInstallmentPlan:(id)arg1 transactionSource:(id)arg2 account:(id)arg3;
- (void)updateGroup:(id)arg1;
- (id)initWithTransactionGroup:(id)arg1 transactionSource:(id)arg2 account:(id)arg3 fetcher:(id)arg4 transactionHistory:(id)arg5;
- (id)initWithFetcher:(id)arg1 transactionSource:(id)arg2 account:(id)arg3 featuredTransaction:(id)arg4 selectedTransactions:(id)arg5 transactionHistory:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
