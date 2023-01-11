//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/WFActionDrawerResultsControlling-Protocol.h>

@class NSArray, NSString, UITableView, WFActionDrawerCoordinator, WFActionDrawerResults;

@interface WFActionDrawerCompositeResultsViewController : UIViewController <WFActionDrawerResultsControlling>
{
    WFActionDrawerCoordinator *_coordinator;
    WFActionDrawerResults *_results;
    NSArray *_suggestionSections;
    NSArray *_actionSections;
    NSArray *_appSections;
    NSArray *_userActivitySections;
    UITableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) NSArray *userActivitySections; // @synthesize userActivitySections=_userActivitySections;
@property(readonly, nonatomic) NSArray *appSections; // @synthesize appSections=_appSections;
@property(readonly, nonatomic) NSArray *actionSections; // @synthesize actionSections=_actionSections;
@property(readonly, nonatomic) NSArray *suggestionSections; // @synthesize suggestionSections=_suggestionSections;
@property(readonly, nonatomic) WFActionDrawerResults *results; // @synthesize results=_results;
@property(readonly, nonatomic) __weak WFActionDrawerCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (id)convertDonationsToActionsForSections:(id)arg1;
- (id)categorizeResults:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)reloadViews;
- (void)setResults:(id)arg1 animated:(_Bool)arg2;
- (id)initWithCoordinator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
