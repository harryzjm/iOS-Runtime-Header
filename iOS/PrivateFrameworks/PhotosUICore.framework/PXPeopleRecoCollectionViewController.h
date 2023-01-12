//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewController.h>

#import <PhotosUICore/PXPeopleRecoDataSourceDelegate-Protocol.h>
#import <PhotosUICore/UICollectionViewDataSourcePrefetching-Protocol.h>

@class NSString, PXPeopleRecoDataSource, UICollectionViewCellRegistration, UICollectionViewSupplementaryRegistration;

@interface PXPeopleRecoCollectionViewController : UICollectionViewController <UICollectionViewDataSourcePrefetching, PXPeopleRecoDataSourceDelegate>
{
    PXPeopleRecoDataSource *_dataSource;
    UICollectionViewCellRegistration *_cellRegistration;
    UICollectionViewSupplementaryRegistration *_headerRegistration;
}

+ (id)recoControllerForPerson:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) UICollectionViewSupplementaryRegistration *headerRegistration; // @synthesize headerRegistration=_headerRegistration;
@property(readonly, nonatomic) UICollectionViewCellRegistration *cellRegistration; // @synthesize cellRegistration=_cellRegistration;
@property(readonly, nonatomic) PXPeopleRecoDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)recoDataSourceDataChanged:(id)arg1;
- (void)_tagMoreTapped:(id)arg1;
- (void)_doneTapped:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)_initWithPerson:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
