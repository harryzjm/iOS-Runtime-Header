//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ML3Predicate;

@interface ML3UnaryPredicate
{
    ML3Predicate *_predicate;
}

+ (id)predicateWithPredicate:(id)arg1;
@property(retain, nonatomic) ML3Predicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (id)databaseStatementParameters;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;

@end
