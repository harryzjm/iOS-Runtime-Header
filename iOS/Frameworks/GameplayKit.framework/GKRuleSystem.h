//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary;

@interface GKRuleSystem : NSObject
{
    NSMutableDictionary *_state;
    NSMutableArray *_rules;
    NSMutableArray *_agenda;
    NSMutableArray *_toBeExecuted;
    NSMutableArray *_executed;
    NSMapTable *_gradeByFact;
}

@property(readonly, retain, nonatomic) NSMutableDictionary *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)reset;
- (void)retractFact:(id)arg1 grade:(float)arg2;
- (void)retractFact:(id)arg1;
- (void)assertFact:(id)arg1 grade:(float)arg2;
- (void)assertFact:(id)arg1;
- (float)maximumGradeForFacts:(id)arg1;
- (float)minimumGradeForFacts:(id)arg1;
- (float)gradeForFact:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *facts;
- (void)removeAllRules;
- (void)addRulesFromArray:(id)arg1;
- (void)addRule:(id)arg1;
- (void)_addRuleToAgenda:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *executed;
@property(readonly, retain, nonatomic) NSArray *agenda;
@property(readonly, retain, nonatomic) NSArray *rules;
- (void)evaluate;
- (id)init;

@end

