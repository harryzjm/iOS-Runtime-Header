//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UICollectionLayoutItemSolver;
@protocol _UICollectionLayoutAuxillaryOffsets;

__attribute__((visibility("hidden")))
@interface _UICollectionEstimatedSolutionBookmark : NSObject
{
    _UICollectionLayoutItemSolver *_solution;
    id <_UICollectionLayoutAuxillaryOffsets> _supplementaryOffsets;
    struct _NSRange _itemRange;
    struct CGRect _solutionFrame;
}

- (void).cxx_destruct;
- (id)description;

@end

