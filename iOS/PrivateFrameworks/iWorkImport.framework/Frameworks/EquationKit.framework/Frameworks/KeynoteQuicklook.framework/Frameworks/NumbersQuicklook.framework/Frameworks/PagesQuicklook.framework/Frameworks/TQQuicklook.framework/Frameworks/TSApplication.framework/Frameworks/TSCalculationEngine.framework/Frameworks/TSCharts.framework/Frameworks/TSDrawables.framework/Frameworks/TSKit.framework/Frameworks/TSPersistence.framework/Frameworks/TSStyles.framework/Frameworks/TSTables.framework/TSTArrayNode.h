//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface TSTArrayNode
{
    struct TSCEVectorIndexPair _dimensions;
    NSString *_whitespaceBeforeFirstChild;
    NSArray *_whitespaceAfterDelimiters;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain) NSArray *whitespaceAfterDelimiters; // @synthesize whitespaceAfterDelimiters=_whitespaceAfterDelimiters;
@property(retain) NSString *whitespaceBeforeFirstChild; // @synthesize whitespaceBeforeFirstChild=_whitespaceBeforeFirstChild;
@property(readonly) struct TSCEVectorIndexPair dimensions; // @synthesize dimensions=_dimensions;
- (void)saveToArchive:(struct ArrayNodeArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ArrayNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable *)arg3;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(_Bool)arg2;
- (struct TSCEFunctionArgSpec *)argumentSpec;
- (id)string;
- (int)tokenType;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 firstIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 columns:(unsigned int)arg3 rows:(unsigned int)arg4 firstIndex:(unsigned long long)arg5 lastIndex:(unsigned long long)arg6;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;

@end
