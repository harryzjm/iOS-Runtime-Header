//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, OADTableGrid;

__attribute__((visibility("hidden")))
@interface OADTable
{
    OADTableGrid *mGrid;
    NSMutableArray *mRows;
}

+ (void)applyTextStyle:(id)arg1 toParagraphProperties:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (void)setParentTextListStyle:(id)arg1;
- (id)addRow;
- (id)rowAtIndex:(unsigned long long)arg1;
- (unsigned long long)rowCount;
- (id)grid;
- (id)tableProperties;
- (id)init;
- (void)flipTableRTL;
- (id)masterCellOfPos:(struct OADTMatrixPos)arg1;
- (struct OADTMatrixPos)masterPosOfPos:(struct OADTMatrixPos)arg1;
- (id)cellAtPos:(struct OADTMatrixPos)arg1;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)flattenStyle;

@end
