//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class REScriptASTNode;

@interface REScriptASTSubscriptExpressionNode
{
    REScriptASTNode *_expression;
    REScriptASTNode *_startIndex;
    REScriptASTNode *_endIndex;
}

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) REScriptASTNode *endIndex; // @synthesize endIndex=_endIndex;
@property(readonly, nonatomic) REScriptASTNode *startIndex; // @synthesize startIndex=_startIndex;
@property(readonly, nonatomic) REScriptASTNode *expression; // @synthesize expression=_expression;
- (void).cxx_destruct;
- (id)dependencies;
- (id)initWithExpression:(id)arg1 startIndex:(id)arg2 endIndex:(id)arg3;

@end
