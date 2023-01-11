//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class REScriptSymbolTable;

@interface REScriptASTObjectBuilder : NSObject
{
    REScriptSymbolTable *_table;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) REScriptSymbolTable *table; // @synthesize table=_table;
- (id)_errorForUnsupportedNode:(id)arg1;
- (id)buildObjectWithBinaryExpressionListNode:(id)arg1 previousExpression:(id)arg2 error:(id *)arg3;
- (id)buildObjectWithTopLevelBinaryExpressionListNode:(id)arg1 error:(id *)arg2;
- (id)buildObjectWithTopLevelBinaryExpression:(id)arg1 error:(id *)arg2;
- (id)buildObjectWithExpressionNode:(id)arg1 error:(id *)arg2;
- (id)buildObjectWithNode:(id)arg1 error:(id *)arg2;
- (id)initWithTable:(id)arg1;
- (id)buildObjectWithSubscriptExpressionNode:(id)arg1 error:(id *)arg2;
- (id)buildObjectWithMemberExpressionNode:(id)arg1 error:(id *)arg2;
- (id)buildObjectWithFunctionNode:(id)arg1 error:(id *)arg2;
- (id)buildObjectWithBinaryExpressionNode:(id)arg1 previousExpression:(id)arg2 error:(id *)arg3;
- (id)buildObjectWithPrefixExpressionNode:(id)arg1 error:(id *)arg2;
- (id)buildObjectWithLiteralNode:(id)arg1 error:(id *)arg2;
- (id)buildObjectWithIdentifierNode:(id)arg1 error:(id *)arg2;
- (id)objectTypeErrorDescription;

@end
