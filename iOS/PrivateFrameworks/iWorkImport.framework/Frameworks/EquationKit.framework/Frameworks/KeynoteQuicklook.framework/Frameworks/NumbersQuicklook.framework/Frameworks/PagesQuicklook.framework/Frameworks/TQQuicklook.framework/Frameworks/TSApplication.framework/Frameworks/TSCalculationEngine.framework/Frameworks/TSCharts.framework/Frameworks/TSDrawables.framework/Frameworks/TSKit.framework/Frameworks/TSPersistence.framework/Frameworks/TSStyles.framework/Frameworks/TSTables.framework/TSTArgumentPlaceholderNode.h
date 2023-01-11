//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TSTArgumentPlaceholderNode
{
    NSString *_detokenizedText;
    short _mode;
}

+ (struct TSCEFunctionArgSpec *)argumentSpecForFunctionIndex:(int)arg1 argumentIndex:(int)arg2;
- (void).cxx_destruct;
@property(nonatomic) short mode; // @synthesize mode=_mode;
- (void)saveToArchive:(struct ArgumentPlaceholderNodeArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ArgumentPlaceholderNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (_Bool)hasMenu;
- (id)exportString;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable *)arg3;
- (id)detokenizedText;
- (id)formulaPlainText;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(_Bool)arg2;
- (id)string;
- (int)tokenType;
- (_Bool)isEqualToExpressionNode:(id)arg1;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (id)bakedValue;
- (void)setArgumentSpec:(struct TSCEFunctionArgSpec *)arg1;
- (id)argumentName;
- (id)modes;
- (void)p_invalidate;
- (id)copyIntoContext:(id)arg1 bakeModes:(_Bool)arg2 children:(id)arg3;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 argumentSpec:(struct TSCEFunctionArgSpec *)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 firstIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3;

@end
