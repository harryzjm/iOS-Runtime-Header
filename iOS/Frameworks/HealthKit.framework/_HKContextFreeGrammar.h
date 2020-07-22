//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSMutableSet, _HKCFGNonTerminal;

@interface _HKContextFreeGrammar : NSObject
{
    NSMutableSet *_nonTerminals;
    NSMutableSet *_terminals;
    NSCharacterSet *_terminalCharacters;
    _HKCFGNonTerminal *_rootNonTerminal;
    CDUnknownBlockType _emptyStringEvaluator;
}

+ (id)grammarWithRootNonTerminal:(id)arg1 emptyStringEvaluator:(CDUnknownBlockType)arg2;
+ (id)grammarWithRootNonTerminal:(id)arg1;
@property(readonly, nonatomic) CDUnknownBlockType emptyStringEvaluator; // @synthesize emptyStringEvaluator=_emptyStringEvaluator;
@property(readonly, nonatomic) _HKCFGNonTerminal *rootNonTerminal; // @synthesize rootNonTerminal=_rootNonTerminal;
- (void).cxx_destruct;
- (void)_gatherExpressionsStartingAt:(id)arg1;
- (void)_gatherExpressions;
- (void)invalidate;
- (id)parseTreeForString:(id)arg1;
- (id)initWithRootNonTerminal:(id)arg1 emptyStringEvaluator:(CDUnknownBlockType)arg2;

@end
