//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKBKeyView.h"

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout;

__attribute__((visibility("hidden")))
@interface UIKBRecentInputsView : UIKBKeyView
{
    _Bool _verticalLayout;
    UICollectionView *_collectionView;
    NSArray *_recentInputStrings;
    UICollectionViewFlowLayout *_flowLayout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) NSArray *recentInputStrings; // @synthesize recentInputStrings=_recentInputStrings;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)displayLayer:(id)arg1;
- (void)scrollViewDidChangeContentSize:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setupCollectionView;
- (void)setRecentInputs:(id)arg1;
- (void)setVerticalLayout:(_Bool)arg1;
- (unsigned long long)focusableVariantCount;
- (id)selectedRecentInputString;
- (void)refreshSelectedRecent;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

