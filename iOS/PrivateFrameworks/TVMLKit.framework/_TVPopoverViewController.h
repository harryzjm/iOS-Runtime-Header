//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TVMLKit/UITableViewDataSource-Protocol.h>
#import <TVMLKit/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UIBarButtonItem, UITableView, _TVPopoverDescriptor;

@interface _TVPopoverViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _ignoreDismissalOnExpansionOrContraction;
    _TVPopoverDescriptor *_popoverDescriptor;
    long long _expandedRow;
    NSArray *_popoverEntries;
    UIBarButtonItem *_cancelButtonItem;
}

@property(readonly, nonatomic) UIBarButtonItem *cancelButtonItem; // @synthesize cancelButtonItem=_cancelButtonItem;
@property(copy, nonatomic) NSArray *popoverEntries; // @synthesize popoverEntries=_popoverEntries;
@property(nonatomic) long long expandedRow; // @synthesize expandedRow=_expandedRow;
@property(readonly, nonatomic) _TVPopoverDescriptor *popoverDescriptor; // @synthesize popoverDescriptor=_popoverDescriptor;
- (void).cxx_destruct;
- (void)_updatePreferredContentSize;
- (double)_heightForOptionAtRow:(unsigned long long)arg1;
- (void)_cancelButtonTouchUpInside:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateWithViewElement:(id)arg1;
@property(readonly, nonatomic) UITableView *tableView;
@property(readonly, nonatomic) struct CGSize calculatedPreferredContentSize;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (id)initWithViewElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

