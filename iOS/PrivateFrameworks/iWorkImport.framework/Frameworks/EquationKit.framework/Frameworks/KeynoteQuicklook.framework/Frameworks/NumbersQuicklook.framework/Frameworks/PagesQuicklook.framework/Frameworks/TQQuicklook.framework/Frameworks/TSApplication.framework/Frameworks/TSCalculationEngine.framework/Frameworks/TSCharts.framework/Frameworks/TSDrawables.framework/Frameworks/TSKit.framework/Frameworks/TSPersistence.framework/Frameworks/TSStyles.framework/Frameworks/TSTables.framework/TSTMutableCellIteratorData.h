//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSTables/TSTCellIteratorData-Protocol.h>

@class NSString, TSTCell, TSTCellFormulaSpec;

@interface TSTMutableCellIteratorData : NSObject <TSTCellIteratorData>
{
    _Bool _cellIDIsValid;
    _Bool _cellIsValid;
    _Bool _formulaSpecIsValid;
    _Bool _mergeRangeIsValid;
    struct TSUCellCoord _cellID;
    TSTCell *_cell;
    TSTCellFormulaSpec *_formulaSpec;
    struct TSUCellRect _mergeRange;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool mergeRangeIsValid; // @synthesize mergeRangeIsValid=_mergeRangeIsValid;
@property(nonatomic) _Bool formulaSpecIsValid; // @synthesize formulaSpecIsValid=_formulaSpecIsValid;
@property(nonatomic) _Bool cellIsValid; // @synthesize cellIsValid=_cellIsValid;
@property(nonatomic) _Bool cellIDIsValid; // @synthesize cellIDIsValid=_cellIDIsValid;
@property(readonly, nonatomic) _Bool cellIsEmpty;
@property(readonly, nonatomic) _Bool cellHasCommentStorage;
@property(readonly, nonatomic) _Bool cellHasCustomFormat;
@property(readonly, nonatomic) _Bool cellHasConditionalStyle;
@property(readonly, nonatomic) _Bool cellHasFormula;
@property(readonly, nonatomic) int cellValueType;
- (void)reset;
@property(retain, nonatomic) TSTCellFormulaSpec *formulaSpec; // @synthesize formulaSpec=_formulaSpec;
@property(nonatomic) struct TSUCellRect mergeRange; // @synthesize mergeRange=_mergeRange;
@property(retain, nonatomic) TSTCell *cell; // @synthesize cell=_cell;
@property(nonatomic) struct TSUCellCoord cellID; // @synthesize cellID=_cellID;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
