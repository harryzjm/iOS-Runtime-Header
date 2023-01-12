//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UICollectionView, _UICollectionTableIndexOverlaySelectionViewCollectionViewFlowLayout;
@protocol _UICollectionTableIndexOverlayHost;

__attribute__((visibility("hidden")))
@interface _UICollectionTableIndexOverlaySelectionView : UIView
{
    UICollectionView *_collectionView;
    _UICollectionTableIndexOverlaySelectionViewCollectionViewFlowLayout *_flowLayout;
    id <_UICollectionTableIndexOverlayHost> _host;
}

- (void).cxx_destruct;
- (void)reloadData;
- (void)_setIndexColor:(id)arg1;
- (void)_doneTapped;
- (void)_cellTapped:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithHost:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

