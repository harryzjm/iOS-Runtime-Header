//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXFilterController-Protocol.h>
#import <PhotosUICore/UITableViewDataSource-Protocol.h>
#import <PhotosUICore/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, PXContentFilterState;
@protocol PXFilterControllerDelegate;

@interface PXUIFilterController : UITableViewController <UITableViewDataSource, UITableViewDelegate, PXChangeObserver, PXFilterController>
{
    NSArray *_contentFilterGroups;
    _Bool _showContentOptions;
    PXContentFilterState *_contentFilterState;
    id <PXFilterControllerDelegate> _filterControllerDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <PXFilterControllerDelegate> filterControllerDelegate; // @synthesize filterControllerDelegate=_filterControllerDelegate;
@property(nonatomic) _Bool showContentOptions; // @synthesize showContentOptions=_showContentOptions;
@property(copy, nonatomic) PXContentFilterState *contentFilterState; // @synthesize contentFilterState=_contentFilterState;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1 initialContentFilterState:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (void)_tappedRowAtIndexPath:(id)arg1;
- (id)_getUpdatedContentFilterStateFromTappedCell:(id)arg1;
- (_Bool)_selectCellWithContentFilterItemTag:(long long)arg1;
- (id)_contentFilterGroups;
- (long long)_adjustedContentFilterSection:(long long)arg1;
- (_Bool)_isContentFilterSection:(long long)arg1;
- (long long)_contentFilterGroupsCount;
- (void)_setupTableView;
- (void)_setupNavigationBar;
- (_Bool)_contentSyndicationIsAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
