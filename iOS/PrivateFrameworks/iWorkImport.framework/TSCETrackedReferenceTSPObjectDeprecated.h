//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSCETrackedReferenceTSPObjectDeprecated
{
    struct TSCEASTNodeArray *mAST;
    CDStruct_ed6d627d mFormulaID;
}

- (void)encodeToArchive:(struct TrackedReferenceArchive *)arg1;
- (void)saveToArchiver:(id)arg1;
- (CDStruct_ed6d627d)formulaID;
- (struct TSCEASTNodeArray *)ast;
- (void)dealloc;
- (_Bool)validatedLoadFromUnarchiver:(id)arg1;

@end

