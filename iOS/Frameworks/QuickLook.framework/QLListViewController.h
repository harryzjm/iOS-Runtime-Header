//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@class NSArray, NSString, QLItem, QLListCellManager, QLPreviewItemStore, UIBarButtonItem, UIPopoverPresentationController, UITableViewController;
@protocol QLListViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface QLListViewController : UINavigationController
{
    UIPopoverPresentationController *_presentationController;
    UITableViewController *_tableViewController;
    QLItem *_currentPreviewItem;
    QLPreviewItemStore *_previewItemStore;
    QLListCellManager *_cellManager;
    NSArray *_itemsWithFolders;
    id <QLListViewControllerDelegate> _archiveDelegate;
    UIBarButtonItem *_barButton;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIBarButtonItem *barButton; // @synthesize barButton=_barButton;
@property __weak id <QLListViewControllerDelegate> archiveDelegate; // @synthesize archiveDelegate=_archiveDelegate;
- (void)_addPath:(id)arg1 fromPreviewItem:(id)arg2 intoArray:(id)arg3;
- (void)_generateItemsAndFolders;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)_updateNavigationBarVisibilityForPresentationStyle:(long long)arg1;
- (void)_dismiss;
- (id)initWithPreviewItemStore:(id)arg1 currentPreviewItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

