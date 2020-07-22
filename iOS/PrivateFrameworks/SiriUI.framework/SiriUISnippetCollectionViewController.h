//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/UICollectionViewDataSource-Protocol.h>
#import <SiriUI/UICollectionViewDelegate-Protocol.h>

@class NSString, UICollectionView, UICollectionViewLayout;

@interface SiriUISnippetCollectionViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    struct CGRect _previousBounds;
    _Bool _needsToInvalidateCollectionViewLayoutOnViewWillLayoutSubviews;
    UICollectionViewLayout *_collectionViewLayout;
    UICollectionView *_collectionView;
}

@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(readonly, nonatomic) UICollectionViewLayout *collectionViewLayout;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithCollectionViewLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

