//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionCompositionalLayoutSolverResolveResult-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutSolverResolveResult : NSObject <_UICollectionCompositionalLayoutSolverResolveResult>
{
    NSMutableDictionary *_insertedSupplementaryElementKindIndexPathsDict;
    NSMutableDictionary *_insertedDecorationElementKindIndexPathsDict;
    NSMutableDictionary *_deletedSupplementaryElementKindIndexPathsDict;
    NSMutableDictionary *_deletedDecorationElementKindIndexPathsDict;
    struct CGPoint _contentOffsetAdjustment;
    struct CGSize _contentSizeAdjustment;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize contentSizeAdjustment; // @synthesize contentSizeAdjustment=_contentSizeAdjustment;
@property(nonatomic) struct CGPoint contentOffsetAdjustment; // @synthesize contentOffsetAdjustment=_contentOffsetAdjustment;
@property(readonly, copy) NSString *description;
- (id)indexPathsForInsertedDecorationsForElementKind:(id)arg1;
- (id)indexPathsForInsertedSupplememtariesForElementKind:(id)arg1;
- (id)indexPathsForDeletedDecorationsForElementKind:(id)arg1;
- (id)indexPathsForDeletedSupplememtariesForElementKind:(id)arg1;
- (void)addInsertedAuxillaryOfElementKind:(id)arg1 atIndexPath:(id)arg2 isSupplementary:(_Bool)arg3;
- (void)addDeletedAuxillaryOfElementKind:(id)arg1 atIndexPath:(id)arg2 isSupplementary:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
