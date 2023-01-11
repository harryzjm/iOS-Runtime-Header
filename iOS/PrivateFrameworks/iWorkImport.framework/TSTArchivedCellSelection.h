//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class NSString, TSKSelection, TSTCellRegion, TSTCellSelection;

__attribute__((visibility("hidden")))
@interface TSTArchivedCellSelection <TSKArchivedSelection>
{
    TSTCellSelection *_cellSelection;
    _Bool _isLegacyBasedIDSelection;
    struct TSUCellCoord _legacyAnchorCellID;
    struct TSUCellCoord _legacyCursorCellID;
    TSTCellRegion *_legacyCellRegion;
    TSTCellRegion *_legacyBaseCellRegion;
    long long _selectionType;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(retain, nonatomic) TSKSelection *selection;
- (id)selectionWithParent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

