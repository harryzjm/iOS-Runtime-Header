//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC15ConversationKit21ParticipantListLayout : UICollectionViewFlowLayout
{
    MISSING_TYPE *indexPathLayoutAttributes;
    MISSING_TYPE *lastInvalidatedSize;
    MISSING_TYPE *calculatedContentSize;
}

- (CDUnknownBlockType).cxx_destruct;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
@property(nonatomic, readonly) struct CGSize collectionViewContentSize;
- (void)prepareLayout;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
