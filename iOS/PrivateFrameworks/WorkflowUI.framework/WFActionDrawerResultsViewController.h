//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>
#import <WorkflowUI/WFActionDrawerResultsControlling-Protocol.h>
#import <WorkflowUI/WFActionDrawerStateConfigurable-Protocol.h>
#import <WorkflowUI/WFActionDrawerStateRepresentable-Protocol.h>

@class NSString, UILabel, UITableView, WFActionDrawerCoordinator, WFActionDrawerResults, WFActionDrawerState;

@interface WFActionDrawerResultsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable, WFActionDrawerResultsControlling>
{
    WFActionDrawerCoordinator *_coordinator;
    WFActionDrawerResults *_results;
    NSString *_emptyText;
    UITableView *_tableView;
    UILabel *_emptyLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *emptyText; // @synthesize emptyText=_emptyText;
@property(readonly, nonatomic) WFActionDrawerResults *results; // @synthesize results=_results;
@property(readonly, nonatomic) __weak WFActionDrawerCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (_Bool)moveToState:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) WFActionDrawerState *state;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollToTop;
@property(nonatomic) _Bool scrollsToTop;
- (void)updateEmptyLabelVisibility;
- (void)setResults:(id)arg1 animated:(_Bool)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithTitle:(id)arg1 coordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
