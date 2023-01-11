//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary;

@interface PXCMMCollectionViewStackLayout : UICollectionViewLayout
{
    NSMutableDictionary *_layoutAttributesForIndexPath;
    struct CGSize _contentSize;
    unsigned long long _stackDepth;
}

@property(nonatomic) unsigned long long stackDepth; // @synthesize stackDepth=_stackDepth;
- (void).cxx_destruct;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (void)invalidateLayout;
- (id)init;

@end

