//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PLCompoundPropertyValidationRule
{
    long long _compoundType;
    NSArray *_rules;
}

+ (id)orCompoundPropertyValidationRuleWithRules:(id)arg1;
+ (id)andCompoundPropertyValidationRuleWithRules:(id)arg1;
@property(retain, nonatomic) NSArray *rules; // @synthesize rules=_rules;
@property(nonatomic) long long compoundType; // @synthesize compoundType=_compoundType;
- (void).cxx_destruct;
- (id)currentValuesOfObject:(id)arg1;
- (id)keyPaths;
- (id)predicate;
- (id)initWithType:(long long)arg1 rules:(id)arg2;

@end
