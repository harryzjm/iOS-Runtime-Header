//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewLayout.h>

@class NSArray, VUIShelfLayoutHelper;
@protocol VUIShelfViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface VUIShelfViewLayout : UICollectionViewLayout
{
    _Bool _shouldSnapContent;
    id <VUIShelfViewLayoutDelegate> _delegate;
    double _minimumInteritemSpacing;
    double _minimumLineSpacing;
    long long _rowCount;
    long long _prominentSectionIndex;
    double _headerSelectionMargin;
    double _headerBottomMargin;
    VUIShelfLayoutHelper *_layoutHelper;
    NSArray *_shelfLayoutSections;
    struct CGSize _itemSize;
    struct CGSize _headerReferenceSize;
    struct UIEdgeInsets _sectionInset;
}

+ (double)defaultHeaderSelectionMargin;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *shelfLayoutSections; // @synthesize shelfLayoutSections=_shelfLayoutSections;
@property(retain, nonatomic) VUIShelfLayoutHelper *layoutHelper; // @synthesize layoutHelper=_layoutHelper;
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) double headerBottomMargin; // @synthesize headerBottomMargin=_headerBottomMargin;
@property(nonatomic) double headerSelectionMargin; // @synthesize headerSelectionMargin=_headerSelectionMargin;
@property(nonatomic) struct CGSize headerReferenceSize; // @synthesize headerReferenceSize=_headerReferenceSize;
@property(nonatomic) long long prominentSectionIndex; // @synthesize prominentSectionIndex=_prominentSectionIndex;
@property(nonatomic) long long rowCount; // @synthesize rowCount=_rowCount;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_minimumLineSpacing;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) _Bool shouldSnapContent; // @synthesize shouldSnapContent=_shouldSnapContent;
@property(nonatomic) __weak id <VUIShelfViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (id)indexPathForSnappedContent;
- (void)snapContentToIndexPath:(id)arg1;
- (void)snapContent;
- (id)_indexPathForItemAtProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (_Bool)_bumpHeaderForLayoutSection:(id)arg1 forIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGRect)boundingSelectionFrameForFrame:(struct CGRect)arg1;
- (double)computedContentHeight;
- (long long)computedRowCount;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)init;

@end

