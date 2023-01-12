//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKPaymentSetupViewControllerLifeCycleDelegate-Protocol.h>
#import <PassKitUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, UICollectionView, UICollectionViewDiffableDataSource;

@interface PKDynamicCollectionViewController : UIViewController <PKPaymentSetupViewControllerLifeCycleDelegate, UICollectionViewDelegate>
{
    UICollectionViewDiffableDataSource *_dataSource;
    NSArray *_sectionIdentifiers;
    NSDictionary *_sectionMap;
    NSMutableDictionary *_supplementaryViewRegistrations;
    NSMutableDictionary *_itemsMap;
    NSMutableDictionary *_cellRegistrations;
    _Bool _viewDidAppear;
    _Bool _isViewControllerActive;
    _Bool _deselectSelectedCellsOnViewWillAppear;
    _Bool _retainCellSelectionCellOnReload;
    _Bool _useItemIdentityWhenUpdating;
    NSArray *_sections;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useItemIdentityWhenUpdating; // @synthesize useItemIdentityWhenUpdating=_useItemIdentityWhenUpdating;
@property(nonatomic) _Bool retainCellSelectionCellOnReload; // @synthesize retainCellSelectionCellOnReload=_retainCellSelectionCellOnReload;
@property(nonatomic) _Bool deselectSelectedCellsOnViewWillAppear; // @synthesize deselectSelectedCellsOnViewWillAppear=_deselectSelectedCellsOnViewWillAppear;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (id)_cellRegistrationForSection:(id)arg1 itemIdentifier:(id)arg2 item:(id)arg3;
- (void)_deselectCellsForce:(_Bool)arg1;
- (id)_sectionAtIndexPath:(id)arg1;
- (id)_sectionAtIndex:(long long)arg1;
- (id)_sectionForIdentifier:(id)arg1;
- (id)_sectionIdentifierForIndex:(long long)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)layout;
- (void)_reloadDataForSections:(id)arg1 recreateSnapshot:(_Bool)arg2 animated:(_Bool)arg3;
- (void)reloadDataForSectionIdentifier:(id)arg1 animated:(_Bool)arg2;
- (void)reloadDataAnimated:(_Bool)arg1;
- (void)deselectCells;
- (void)reloadItem:(id)arg1 animated:(_Bool)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)cellForItem:(id)arg1;
- (void)setSections:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidDismissModalView;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
