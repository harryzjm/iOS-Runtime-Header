//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

#import <PhotosUICore/PXCMMCollectionViewLayoutProtocol-Protocol.h>

@class NSMutableDictionary, NSString;

@interface PXCMMCollectionViewStaggeredLayout : UICollectionViewLayout <PXCMMCollectionViewLayoutProtocol>
{
    CDStruct_f0658562 _relativeStaggerOffset;
    long long _staggerDirection;
    NSMutableDictionary *_layoutAttributesForIndexPath;
    struct CGSize _contentSize;
    struct CGSize _itemSize;
}

@property(nonatomic) long long staggerDirection; // @synthesize staggerDirection=_staggerDirection;
@property(nonatomic) CDStruct_f0658562 relativeStaggerOffset; // @synthesize relativeStaggerOffset=_relativeStaggerOffset;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (void).cxx_destruct;
- (double)contentHeight;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (void)invalidateLayout;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

