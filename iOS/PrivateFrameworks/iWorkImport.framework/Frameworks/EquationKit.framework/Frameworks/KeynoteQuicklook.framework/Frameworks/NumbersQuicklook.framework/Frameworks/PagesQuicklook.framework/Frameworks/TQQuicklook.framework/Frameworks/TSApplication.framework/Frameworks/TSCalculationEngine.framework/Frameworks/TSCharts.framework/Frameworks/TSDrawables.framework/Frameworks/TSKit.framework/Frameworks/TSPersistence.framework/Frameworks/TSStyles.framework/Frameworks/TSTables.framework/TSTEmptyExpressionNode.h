//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSTEmptyExpressionNode
{
}

- (id)description;
- (void)saveToArchive:(struct EmptyExpressionNodeArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct EmptyExpressionNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable *)arg3;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(_Bool)arg2;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (id)string;
- (int)tokenType;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;

@end
