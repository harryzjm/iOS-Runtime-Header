//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewFlowLayout.h>

__attribute__((visibility("hidden")))
@interface CNMeCardSharingOnboardingAvatarCarouselLayout : UICollectionViewFlowLayout
{
}

+ (id)indexPathForNearestItemToCenterWithOffset:(struct CGPoint)arg1 collectionView:(id)arg2 layout:(id)arg3;
- (id)indexesForElementsInRect:(struct CGRect)arg1 visibleBounds:(struct CGRect)arg2 numberOfItems:(long long)arg3;
- (struct CGRect)frameForElementAtIndex:(long long)arg1 visibleBounds:(struct CGRect)arg2;
- (double)pageOffsetForIndex:(long long)arg1;
- (long long)selectedPageIndex;
- (double)pagingOrigin;
- (double)pagingLength;

@end

