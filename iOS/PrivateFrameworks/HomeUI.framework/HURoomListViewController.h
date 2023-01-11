//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUEditRoomViewControllerAddRoomDelegate-Protocol.h>
#import <HomeUI/HUEditRoomViewControllerPresentationDelegate-Protocol.h>

@class HUGridLayoutOptions, HURoomListItemManager, NSString;
@protocol HURoomListViewControllerDelegate;

@interface HURoomListViewController <HUEditRoomViewControllerPresentationDelegate, HUEditRoomViewControllerAddRoomDelegate>
{
    id <HURoomListViewControllerDelegate> _delegate;
    HUGridLayoutOptions *_layoutOptions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HUGridLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(nonatomic) __weak id <HURoomListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_saveItemOrder:(id)arg1 forSection:(long long)arg2 resort:(_Bool)arg3;
- (void)_setReorderableHomeKitItemList:(id)arg1 forSection:(long long)arg2;
- (id)_reorderableHomeKitItemListForSection:(long long)arg1;
- (id)_reorderableRoomItems;
- (void)presentAddRoomViewControllerForEditRoomViewController:(id)arg1;
- (void)editRoomViewControllerDidFinish:(id)arg1 withNewRoom:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (_Bool)automaticallyUpdatesViewControllerTitle;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)_doneButtonPressed:(id)arg1;
- (void)_editButtonPressed:(id)arg1;
- (void)_addButtonPressed:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithHome:(id)arg1 delegate:(id)arg2 layoutOptions:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HURoomListItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end
