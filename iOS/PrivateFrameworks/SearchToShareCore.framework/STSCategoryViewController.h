//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

#import <SearchToShareCore/STSCategoryTitleTableViewCellDelegate-Protocol.h>
#import <SearchToShareCore/UIScrollViewDelegate-Protocol.h>
#import <SearchToShareCore/UITableViewDataSource-Protocol.h>
#import <SearchToShareCore/UITableViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, STSCategoryView, STSSearchModel;
@protocol STSCategoryViewControllerDelegate;

@interface STSCategoryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, STSCategoryTitleTableViewCellDelegate, UIScrollViewDelegate>
{
    _Bool _isScrolling;
    NSMutableArray *_displayedResults;
    _Bool _sendFeedbackOnViewDidAppear;
    STSSearchModel *_searchModel;
    id <STSCategoryViewControllerDelegate> _selectionDelegate;
    NSArray *_categories;
    NSArray *_recents;
    NSMutableArray *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *model; // @synthesize model=_model;
@property(retain, nonatomic) NSArray *recents; // @synthesize recents=_recents;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) _Bool sendFeedbackOnViewDidAppear; // @synthesize sendFeedbackOnViewDidAppear=_sendFeedbackOnViewDidAppear;
@property(nonatomic) __weak id <STSCategoryViewControllerDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
@property(retain, nonatomic) STSSearchModel *searchModel; // @synthesize searchModel=_searchModel;
- (void)_reportFeedbackDisplayedResultsDidScroll:(_Bool)arg1;
- (void)sendVisibleResultsFeedback;
- (void)sendRankSectionsFeedback;
- (id)_searchResultIdentifierForSuggestion:(id)arg1 recent:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)reload;
- (void)updateRecents:(id)arg1;
- (void)_commitClearRecents;
- (void)clearButton:(id)arg1 pressedForCategoryResult:(id)arg2;
- (void)updateModel;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)clearRecents;
- (void)updateContentOffset:(double)arg1;
@property(nonatomic) struct UIEdgeInsets contentInset;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) STSCategoryView *view; // @dynamic view;

@end
