//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, TSTSelectionDragController, TSTTableReferences;

@protocol TSTTableRepInternal
@property(copy, nonatomic) NSSet *visibleFillKnobs;
@property(readonly, nonatomic) _Bool usesSelectionChromeResizer;
@property(readonly, nonatomic) _Bool selectsCellOnInitialTap;
@property(readonly, nonatomic) _Bool selectionUsesBezierPath;
@property(nonatomic) _Bool selectionDragAbortedOnNewSelection;
@property(nonatomic) __weak TSTSelectionDragController *cellDragController;
@property(readonly, nonatomic) _Bool zoomOperationIsInProgress;
@property(readonly, nonatomic) _Bool aspectOperationIsInProgress;
@property(readonly, nonatomic) TSTTableReferences *references;
@property(nonatomic) struct TSUCellCoord ratingsDragCellID;
@property(nonatomic) struct CGRect searchSelectionBounds;
@end

