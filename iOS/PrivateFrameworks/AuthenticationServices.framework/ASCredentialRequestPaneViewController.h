//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class ASCredentialRequestPaneContext, NSLayoutConstraint, NSString, UIStackView, UITableView, UIVisualEffectView;
@protocol ASCredentialRequestPaneViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface ASCredentialRequestPaneViewController : UIViewController
{
    _Bool _isTableViewRequired;
    UIVisualEffectView *_blurryTray;
    NSLayoutConstraint *_headerWidthConstraint;
    NSLayoutConstraint *_footerWidthConstraint;
    id <ASCredentialRequestPaneViewControllerDelegate> _delegate;
    UIStackView *_paneHeaderStackView;
    UIStackView *_paneFooterStackView;
    ASCredentialRequestPaneContext *_headerPaneContext;
    ASCredentialRequestPaneContext *_footerPaneContext;
    UITableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) ASCredentialRequestPaneContext *footerPaneContext; // @synthesize footerPaneContext=_footerPaneContext;
@property(readonly, nonatomic) ASCredentialRequestPaneContext *headerPaneContext; // @synthesize headerPaneContext=_headerPaneContext;
@property(readonly, nonatomic) UIStackView *paneFooterStackView; // @synthesize paneFooterStackView=_paneFooterStackView;
@property(readonly, nonatomic) UIStackView *paneHeaderStackView; // @synthesize paneHeaderStackView=_paneHeaderStackView;
@property(nonatomic) __weak id <ASCredentialRequestPaneViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (double)_intrinsicContentHeight;
- (double)_maximumContentHeight;
- (double)_navigationBarHeaderHeight;
- (long long)_safeIndexWithCount:(long long)arg1;
- (id)_indexPathForLastRow;
- (_Bool)_isContentUnderTray;
- (void)_updateBlurForTray;
- (void)_adjustForPositionOfScrollView:(id)arg1;
@property(readonly, nonatomic) long long numberOfTableRows;
- (void)_setUpContexts;
- (id)_newContainerView;
- (id)_newStackView;
- (double)_blurryTrayMinimumHeight;
- (void)traitCollectionDidChange:(id)arg1;
- (void)sizeToFitPaneContent;
- (void)_setCompressedHeightForView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initRequiringTableView:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

