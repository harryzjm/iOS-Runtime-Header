//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CloudTabStore, NSArray, NSString, NSTimer, PreviewTableViewController, UIBarButtonItem, UISearchController, UITableView;
@protocol CloudTabsViewControllerDelegate, LinkPreviewProvider, TabGroupProvider, _SFNavigationIntentHandling;

__attribute__((visibility("hidden")))
@interface CloudTabsViewController : UIViewController
{
    CloudTabStore *_cloudTabStore;
    NSArray *_devices;
    NSString *_primaryDeviceUUID;
    _Bool _onlyShowsPrimaryDevice;
    NSString *_userTypedFilter;
    UIBarButtonItem *_doneBarButtonItem;
    UIBarButtonItem *_editBarButtonItem;
    PreviewTableViewController *_tableViewController;
    UITableView *_tableView;
    UISearchController *_searchController;
    NSTimer *_delayReloadTimer;
    id <CloudTabsViewControllerDelegate> _delegate;
    id <LinkPreviewProvider> _linkPreviewProvider;
    id <_SFNavigationIntentHandling> _navigationIntentHandler;
    id <TabGroupProvider> _tabGroupProvider;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TabGroupProvider> tabGroupProvider; // @synthesize tabGroupProvider=_tabGroupProvider;
@property(nonatomic) __weak id <_SFNavigationIntentHandling> navigationIntentHandler; // @synthesize navigationIntentHandler=_navigationIntentHandler;
@property(nonatomic) __weak id <LinkPreviewProvider> linkPreviewProvider; // @synthesize linkPreviewProvider=_linkPreviewProvider;
@property(nonatomic) id <CloudTabsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (id)previewTableViewController:(id)arg1 menuForRowAtIndexPath:(id)arg2;
- (id)previewTableViewController:(id)arg1 URLForRowAtIndexPath:(id)arg2;
- (id)_urlForRowAtIndexPath:(id)arg1;
- (id)safari_tableViewScrollPositionSaveIdentifier;
- (id)safari_tableViewForScrollPositionSaving;
- (id)tableView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)tableView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;
- (void)_deleteRowAtIndexPath:(id)arg1;
- (_Bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (id)_tabForIndexPath:(id)arg1;
- (id)_filteredTabsInSection:(long long)arg1;
- (id)_deviceForIndexPath:(id)arg1;
- (void)_reloadDevicesAndTable;
- (void)_cloudTabsDidChange:(id)arg1;
- (void)_delayReloadTimerFired;
- (void)_loadDevices;
- (void)dismiss;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_updateContentUnavailableConfiguration;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithCloudTabStore:(id)arg1 primaryDeviceUUID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

