//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, _UICollectionLayoutSectionGeometryTranslator, _UIOrderedRangeIndexer, _UIRTree;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSolutionState : NSObject
{
    _UICollectionLayoutSectionGeometryTranslator *_sectionGeometryTranslator;
    NSArray *_bookmarks;
    _UIRTree *_geometricIndexer;
    _UIOrderedRangeIndexer *_itemRangeIndexer;
    _UIOrderedRangeIndexer *_preferredSizeGroupingIndexer;
    NSDictionary *_auxillaryRangeIndexerKindDict;
}

- (void).cxx_destruct;
- (id)description;

@end

