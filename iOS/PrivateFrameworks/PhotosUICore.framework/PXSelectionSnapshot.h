//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXIndexPathSet, PXSectionedDataSource;
@protocol PXFastEnumeration;

@interface PXSelectionSnapshot : NSObject
{
    _Bool _isSelectionLimitReached;
    PXSectionedDataSource *_dataSource;
    PXIndexPathSet *_selectedIndexPaths;
    struct PXSimpleIndexPath _cursorIndexPath;
    struct PXSimpleIndexPath _pendingIndexPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isSelectionLimitReached; // @synthesize isSelectionLimitReached=_isSelectionLimitReached;
@property(readonly, nonatomic) struct PXSimpleIndexPath pendingIndexPath; // @synthesize pendingIndexPath=_pendingIndexPath;
@property(readonly, nonatomic) struct PXSimpleIndexPath cursorIndexPath; // @synthesize cursorIndexPath=_cursorIndexPath;
@property(readonly, nonatomic) PXIndexPathSet *selectedIndexPaths; // @synthesize selectedIndexPaths=_selectedIndexPaths;
@property(readonly, nonatomic) PXSectionedDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (id)description;
@property(readonly, nonatomic) id <PXFastEnumeration> allObjectsEnumerator;
@property(readonly, nonatomic) id <PXFastEnumeration> allSectionsEnumerator;
@property(readonly, nonatomic) id <PXFastEnumeration> allItemsEnumerator;
- (id)fetchSelectedObjects;
- (void)enumerateSelectedObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (struct PXSimpleIndexPath)indexPathOfObjectPassingTest:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) PXIndexPathSet *sectionIndexPathsContainingSelection;
@property(readonly, nonatomic) struct PXSimpleIndexPath lastSelectedIndexPath;
@property(readonly, nonatomic) struct PXSimpleIndexPath firstSelectedIndexPath;
- (_Bool)areAllItemsSelected;
- (_Bool)isAnyItemSelected;
- (_Bool)isAnySectionSelected;
- (_Bool)isIndexPathSelected:(struct PXSimpleIndexPath)arg1;
- (id)init;
- (id)initWithDataSource:(id)arg1 selectedIndexPath:(struct PXSimpleIndexPath)arg2;
- (id)initWithDataSource:(id)arg1 selectedIndexPaths:(id)arg2;
- (id)initWithDataSource:(id)arg1 selectedIndexPaths:(id)arg2 cursorIndexPath:(struct PXSimpleIndexPath)arg3;
- (id)initWithDataSource:(id)arg1 selectedIndexPaths:(id)arg2 cursorIndexPath:(struct PXSimpleIndexPath)arg3 pendingIndexPath:(struct PXSimpleIndexPath)arg4 selectionLimitReached:(_Bool)arg5;
- (_Bool)areAllUnsavedAssetsSelectedWithImportStatusManager:(id)arg1;

@end
