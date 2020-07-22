//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEOwnerFormulaMap : NSObject
{
    struct vector<std::__1::pair<TSUCellCoord, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUCellCoord, TSCEFormula>>> _formulas;
    vector_13f93596 _nonFormulaCells;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchive:(struct OwnerFormulaMapArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct OwnerFormulaMapArchive *)arg1;
- (id)description;
- (struct TSCEFormula *)formulaAtIndex:(unsigned long long)arg1 outCellCoordinate:(struct TSUCellCoord *)arg2;
- (unsigned long long)count;
- (void)addFormula:(struct TSCEFormula *)arg1 atCellCoordinate:(struct TSUCellCoord)arg2;

@end
