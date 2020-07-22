//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXRelatedDataSource, PXRelatedSpec;
@protocol PXRelatedTilingLayoutDelegate;

@interface PXRelatedTilingLayout
{
    unsigned long long _dataSourceIdentifier;
    long long _numberOfEntries;
    long long _numberOfColumns;
    long long _numberOfRows;
    struct UIEdgeInsets _margins;
    struct CGSize _itemSize;
    struct CGSize _interItemSpacing;
    struct CGRect _contentBounds;
    _Bool _isDataSourceTransient;
    struct {
        _Bool isPlaceholderEntryAtIndexPath;
        _Bool fontNameForEntryAtIndexPath;
        _Bool contentsRectForItemAtIndexPathForAspectRatio;
    } _delegateRespondsTo;
    id <PXRelatedTilingLayoutDelegate> _delegate;
    PXRelatedDataSource *_dataSource;
    PXRelatedSpec *_spec;
    long long _maximumNumberOfRows;
    struct PXSimpleIndexPath _highlightedIndexPath;
    struct PXSimpleIndexPath _focusedIndexPath;
}

@property(nonatomic) struct PXSimpleIndexPath focusedIndexPath; // @synthesize focusedIndexPath=_focusedIndexPath;
@property(nonatomic) struct PXSimpleIndexPath highlightedIndexPath; // @synthesize highlightedIndexPath=_highlightedIndexPath;
@property(nonatomic) long long maximumNumberOfRows; // @synthesize maximumNumberOfRows=_maximumNumberOfRows;
@property(retain, nonatomic) PXRelatedSpec *spec; // @synthesize spec=_spec;
@property(retain, nonatomic) PXRelatedDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PXRelatedTilingLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)_rectForEmptyPlaceholder;
- (_Bool)_shouldShowEmptyPlaceholder;
- (struct CGRect)_rectForActivityIndicator;
- (_Bool)_shouldShowActivityIndicator;
- (struct CGRect)_rectForEntryAtIndex:(long long)arg1;
- (void)_enumerateEntryIndexesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct PXTileIdentifier)_tileIdentifierForTileKind:(long long)arg1 entryIndex:(long long)arg2;
- (struct CGRect)rectOfInterestForEntryAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)indexPathForEntryAtPoint:(struct CGPoint)arg1;
- (struct PXTileIdentifier)tileIdentifierForTileKind:(long long)arg1 entryIndexPath:(struct PXSimpleIndexPath)arg2;
- (struct PXSimpleIndexPath)indexPathForTileIdentifier:(struct PXTileIdentifier)arg1;
- (long long)tileKindForTileIdentifier:(struct PXTileIdentifier)arg1;
- (_Bool)getGeometry:(out struct PXTileGeometry *)arg1 group:(out unsigned long long *)arg2 userData:(out id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)contentBounds;
- (void)prepareLayout;
- (void)setReferenceSize:(struct CGSize)arg1;
- (id)init;

@end

