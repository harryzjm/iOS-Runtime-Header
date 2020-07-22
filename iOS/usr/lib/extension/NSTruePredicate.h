//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSTruePredicate
{
}

+ (_Bool)_allowsEvaluation;
+ (_Bool)supportsSecureCoding;
+ (id)defaultInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)predicateFormat;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)autorelease;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

