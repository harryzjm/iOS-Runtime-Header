//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UICollectionView;

__attribute__((visibility("hidden")))
@interface SKUISearchCollectionViewFlowLayout
{
    UICollectionView *_collectionView;
    long long _numberOfRows;
    long long _numberOfColumns;
    struct CGSize _headerSize;
    double _horizontalPadding;
    double _verticalPadding;
    _Bool _backfills;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool backfills; // @synthesize backfills=_backfills;
@property(nonatomic) double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)init;

@end
