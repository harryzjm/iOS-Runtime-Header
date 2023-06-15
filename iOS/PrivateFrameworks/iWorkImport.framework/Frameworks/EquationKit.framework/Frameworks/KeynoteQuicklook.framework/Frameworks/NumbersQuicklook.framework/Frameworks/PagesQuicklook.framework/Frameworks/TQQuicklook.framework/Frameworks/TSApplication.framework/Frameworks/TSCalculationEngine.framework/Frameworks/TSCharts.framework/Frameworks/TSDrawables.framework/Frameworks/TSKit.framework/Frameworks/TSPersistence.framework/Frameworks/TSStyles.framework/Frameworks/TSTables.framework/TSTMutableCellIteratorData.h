//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TSTCell, TSTCellFormulaSpec;

@interface TSTMutableCellIteratorData : NSObject
{
    struct TSUCellCoord _cellID;
    TSTCell *_cell;
    TSTCellFormulaSpec *_formulaSpec;
    struct TSUCellRect _mergeRange;
}

- (void).cxx_destruct;
@property(nonatomic) struct TSUCellRect mergeRange; // @synthesize mergeRange=_mergeRange;
@property(retain, nonatomic) TSTCellFormulaSpec *formulaSpec; // @synthesize formulaSpec=_formulaSpec;
@property(retain, nonatomic) TSTCell *cell; // @synthesize cell=_cell;
@property(nonatomic) struct TSUCellCoord cellID; // @synthesize cellID=_cellID;
@property(readonly, nonatomic) _Bool cellIsEmpty;
@property(readonly, nonatomic) _Bool cellHasCommentStorage;
@property(readonly, nonatomic) _Bool cellHasCustomFormat;
@property(readonly, nonatomic) _Bool cellHasConditionalStyle;
@property(readonly, nonatomic) _Bool cellHasFormula;
@property(readonly, nonatomic) unsigned char cellValueType;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

