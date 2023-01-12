//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <MobileSafariUI/UICollectionViewDelegate-Protocol.h>
#import <MobileSafariUI/UICollectionViewDragDelegate-Protocol.h>
#import <MobileSafariUI/UICollectionViewDropDelegate-Protocol.h>

@class NSString, UIBarButtonItem, UICollectionView, UICollectionViewDiffableDataSource;
@protocol TabGroupProvider;

__attribute__((visibility("hidden")))
@interface TabGroupPickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate>
{
    id <TabGroupProvider> _tabGroupProvider;
    UICollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_dataSource;
    UIBarButtonItem *_doneButton;
    _Bool _isReordering;
}

- (void).cxx_destruct;
- (long long)_collectionView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;
- (long long)_collectionView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg2 atCurrentIndexPath:(id)arg3 toProposedIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;
- (id)_swipeActionsConfigurationForIndexPath:(id)arg1;
- (id)_checkmarkAccessory;
- (_Bool)_shouldShowCheckmarkForTabGroup:(id)arg1;
- (void)_enumerateTabGroupSectionsWithBlock:(CDUnknownBlockType)arg1;
- (void)reloadData;
- (void)doneButtonTapped;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTabGroupProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
