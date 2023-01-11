//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSTListNode
{
    NSString *_whitespaceAfterLeftParen;
    NSArray *_whitespaceAfterDelimiters;
}

@property(retain, nonatomic) NSArray *whitespaceAfterDelimiters; // @synthesize whitespaceAfterDelimiters=_whitespaceAfterDelimiters;
@property(retain) NSString *whitespaceAfterLeftParen; // @synthesize whitespaceAfterLeftParen=_whitespaceAfterLeftParen;
- (void).cxx_destruct;
- (void)saveToArchive:(struct ListNodeArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ListNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable *)arg3;
- (struct TSCEFunctionArgSpec *)argumentSpec;
- (id)string;
- (int)tokenType;
- (_Bool)isEqualToExpressionNode:(id)arg1;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (id)mostSpecificNodeContainingIndex:(unsigned long long)arg1 correspondingIndex:(unsigned long long)arg2;
- (id)description;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 firstIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;

@end

