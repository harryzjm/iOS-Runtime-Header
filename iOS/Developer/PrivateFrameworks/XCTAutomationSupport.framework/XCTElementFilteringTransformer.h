//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSPredicate;

@interface XCTElementFilteringTransformer
{
    long long _scope;
    NSPredicate *_predicate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly) long long scope; // @synthesize scope=_scope;
- (void).cxx_destruct;
- (id)iteratorForInput:(id)arg1;
- (id)transform:(id)arg1 relatedElements:(id *)arg2;
- (id)_scopedExpansionOfInput:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requiredKeyPathsOrError:(id *)arg1;
- (_Bool)supportsAttributeKeyPathAnalysis;
- (_Bool)supportsRemoteEvaluation;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithScope:(long long)arg1 predicate:(id)arg2;

@end

