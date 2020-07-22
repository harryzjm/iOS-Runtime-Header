//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface PUPhotosSharingCollectionViewItemSublayout : NSObject
{
    struct CGPoint _selectionBadgeCenter;
    struct CGPoint _optionBadgeCenter;
    NSIndexPath *_indexPath;
    double _bottomBadgeInset;
    unsigned long long _badgesCorner;
    UICollectionViewLayoutAttributes *_selectionBadgeLayoutAttributes;
    UICollectionViewLayoutAttributes *_optionBadgeLayoutAttributes;
    struct UIOffset _badgesOffset;
    struct CGRect _itemFrame;
    struct CGRect _visibleItemFrame;
    struct CGRect _badgesContainerFrame;
    struct CGRect _floatingBadgesContainerFrame;
}

@property(readonly, nonatomic) struct CGRect floatingBadgesContainerFrame; // @synthesize floatingBadgesContainerFrame=_floatingBadgesContainerFrame;
@property(readonly, nonatomic) struct CGRect badgesContainerFrame; // @synthesize badgesContainerFrame=_badgesContainerFrame;
@property(readonly, nonatomic) UICollectionViewLayoutAttributes *optionBadgeLayoutAttributes; // @synthesize optionBadgeLayoutAttributes=_optionBadgeLayoutAttributes;
@property(readonly, nonatomic) UICollectionViewLayoutAttributes *selectionBadgeLayoutAttributes; // @synthesize selectionBadgeLayoutAttributes=_selectionBadgeLayoutAttributes;
@property(nonatomic) unsigned long long badgesCorner; // @synthesize badgesCorner=_badgesCorner;
@property(nonatomic) struct UIOffset badgesOffset; // @synthesize badgesOffset=_badgesOffset;
@property(nonatomic) double bottomBadgeInset; // @synthesize bottomBadgeInset=_bottomBadgeInset;
@property(nonatomic) struct CGRect visibleItemFrame; // @synthesize visibleItemFrame=_visibleItemFrame;
@property(readonly, nonatomic) struct CGRect itemFrame; // @synthesize itemFrame=_itemFrame;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)setFloatingOffset:(struct UIOffset)arg1;
- (void)prepareSublayout;
@property(nonatomic) struct CGSize optionBadgeSize;
@property(nonatomic) struct CGSize selectionBadgeSize;
- (id)initWithIndexPath:(id)arg1 itemFrame:(struct CGRect)arg2;

@end

