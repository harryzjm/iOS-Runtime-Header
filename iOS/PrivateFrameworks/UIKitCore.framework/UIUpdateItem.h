//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, UICollectionViewUpdateItem, UITableViewUpdateGap;

__attribute__((visibility("hidden")))
@interface UIUpdateItem : NSObject
{
    UICollectionViewUpdateItem *_collectionViewUpdateItem;
    _Bool _headerFooterOnly;
    int _action;
    NSIndexPath *_indexPath;
    long long _animation;
    UITableViewUpdateGap *_gap;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UITableViewUpdateGap *gap; // @synthesize gap=_gap;
@property(readonly, nonatomic) _Bool isDecomposedFromReload;
- (long long)compareIndexPathsForMoves:(id)arg1;
- (long long)inverseCompareIndexPaths:(id)arg1;
- (long long)compareIndexPaths:(id)arg1;
- (id)description;
- (id)_moveDestinationDescription;
@property(readonly, nonatomic) UICollectionViewUpdateItem *collectionViewUpdateItem;

@end

