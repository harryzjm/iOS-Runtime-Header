//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ECFormulaProcessor : NSObject
{
    struct XlFormulaProcessor *mXlFormulaProcessorLasso;
    struct XlFormulaProcessor *mXlFormulaProcessorXl;
    struct XlNameTable *mXlNameTable;
    ChVector_be6372b9 *mLassoSheetNames;
    ChVector_be6372b9 *mXlSheetNames;
    struct XlLinkTable *mXlLinkTable;
}

+ (id)formulaStringForEDFormula:(id)arg1 edWorksheet:(id)arg2 xlFormulaProcessor:(struct XlFormulaProcessor *)arg3;
- (struct XlFormulaProcessor *)xlFormulaProcessorXl;
- (struct XlFormulaProcessor *)xlFormulaProcessorLasso;
- (void)setupWithWorkbook:(id)arg1;
- (void)dealloc;
- (id)init;
- (ChVector_be6372b9 *)sheetNamesFromWorkbook:(id)arg1;
- (struct XlFormulaProcessor *)setupWithWorkbook:(id)arg1 xlNameTable:(struct XlNameTable *)arg2 sheetNames:(ChVector_be6372b9 *)arg3 xlLinkTable:(struct XlLinkTable *)arg4 lassoSyntax:(_Bool)arg5;

@end

