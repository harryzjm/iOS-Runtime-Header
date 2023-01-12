//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HistoryTableViewDataSource, NSArray, NSString, NSTimer, UIBarButtonItem, UISearchBar;
@protocol HistoryTableViewControllerDelegate, TabGroupProvider, _SFNavigationIntentHandling;

__attribute__((visibility("hidden")))
@interface HistoryTableViewController
{
    UIBarButtonItem *_clearHistoryButton;
    UIBarButtonItem *_doneBarButtonItem;
    NSTimer *_saveChangesToCloudHistoryTimer;
    HistoryTableViewDataSource *_historyDataSource;
    _Bool _needsInitialContentOffsetUpdateForTableHeaderView;
    _Bool _needsContentOffsetUpdate;
    UISearchBar *_searchBar;
    _Bool _historyWasLoaded;
    _Bool _allowClearingHistory;
    id <HistoryTableViewControllerDelegate> _delegate;
    id <_SFNavigationIntentHandling> _navigationIntentHandler;
    id <TabGroupProvider> _tabGroupProvider;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TabGroupProvider> tabGroupProvider; // @synthesize tabGroupProvider=_tabGroupProvider;
@property(nonatomic) __weak id <_SFNavigationIntentHandling> navigationIntentHandler; // @synthesize navigationIntentHandler=_navigationIntentHandler;
@property(nonatomic) __weak id <HistoryTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (id)previewTableViewController:(id)arg1 menuForRowAtIndexPath:(id)arg2;
- (id)previewTableViewController:(id)arg1 URLForRowAtIndexPath:(id)arg2;
- (id)_urlForRowAtIndexPath:(id)arg1;
- (void)historyTableViewDataSource:(id)arg1 didChangeRowAtIndexPath:(id)arg2 forChangeType:(long long)arg3;
- (void)historyTableViewDataSource:(id)arg1 didChangeSectionAtIndex:(long long)arg2 forChangeType:(long long)arg3;
- (void)historyTableViewDataSourceDidChangeContent:(id)arg1;
- (void)historyTableViewDataSourceWillChangeContent:(id)arg1;
- (void)historyTableViewDataSourceDidLoadContent:(id)arg1;
- (id)safari_tableViewScrollPositionSaveIdentifier;
- (_Bool)restoreStateWithDictionary:(id)arg1;
- (id)currentStateDictionary;
- (_Bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)_deleteRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 trailingSwipeActionsForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)safari_wantsDoneButtonInModalBookmarksPanel;
- (void)_saveChangesToCloudHistory;
- (void)_saveChangesToCloudHistorySoon;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateContentOffsetIfNeeded;
- (id)_separatorEffect;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_shouldUseTranslucentAppearance;
- (void)_endEditing;
- (void)_setUpClearHistoryMenu;
- (void)_updateClearHistoryMenuTitle;
- (id)_clearHistoryText;
- (void)updateClearHistoryButtonEnable;
- (id)_clearHistoryBarButtonItem;
- (id)_doneBarButtonItem;
@property(readonly, nonatomic) NSArray *bookmarksPanelToolbarItems;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

