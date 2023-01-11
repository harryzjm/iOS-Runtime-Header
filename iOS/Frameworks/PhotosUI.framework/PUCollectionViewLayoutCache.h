//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary;
@protocol PUCollectionViewLayoutProvider;

__attribute__((visibility("hidden")))
@interface PUCollectionViewLayoutCache : UICollectionViewLayout
{
    NSMutableDictionary *_itemLayoutAttributesByIndexPath;
    NSMutableDictionary *_supplementaryViewLayoutAttributesByKind;
    NSMutableDictionary *_decorationViewLayoutAttributesByKind;
    id <PUCollectionViewLayoutProvider> _layoutProvider;
    struct {
        unsigned int hasSupplementaryLayoutAttributes:1;
        unsigned int hasDecorationLayoutAttributes:1;
    } _layoutProviderFlags;
    _Bool _cachesResults;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool cachesResults; // @synthesize cachesResults=_cachesResults;
@property(readonly, nonatomic) __weak id <PUCollectionViewLayoutProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;
- (void)invalidateLayoutCache;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)init;
- (id)initWithProvider:(id)arg1;

@end
