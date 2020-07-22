//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosExtras/UICollectionViewDataSource-Protocol.h>
#import <VideosExtras/UICollectionViewDelegate-Protocol.h>
#import <VideosExtras/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSMutableDictionary, NSString, UICollectionView, UICollectionViewFlowLayout, VideosExtrasBannerController;

@interface VideosExtrasStackTemplateViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSMutableDictionary *_viewControllers;
    NSMutableDictionary *_sizes;
    VideosExtrasBannerController *_bannerViewController;
}

- (void).cxx_destruct;
- (id)_viewControllerForIndexPath:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)_prepareLayout;
- (id)sectionStyle;
- (id)templateElement;
- (id)contentScrollView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_dynamicTypeDidChange;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (_Bool)showsPlaceholder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

