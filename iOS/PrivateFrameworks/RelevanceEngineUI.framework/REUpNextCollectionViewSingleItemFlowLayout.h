//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSIndexPath, REUpNextCollectionViewFlowLayoutAttributes;

@interface REUpNextCollectionViewSingleItemFlowLayout
{
    REUpNextCollectionViewFlowLayoutAttributes *_preferedCellAttributes;
    NSDictionary *_allAttributes;
    NSIndexPath *_preferedIndexPath;
}

@property(retain, nonatomic) NSIndexPath *preferedIndexPath; // @synthesize preferedIndexPath=_preferedIndexPath;
- (void).cxx_destruct;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;

@end
