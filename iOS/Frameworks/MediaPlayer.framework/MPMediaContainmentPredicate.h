//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

@interface MPMediaContainmentPredicate
{
    NSString *_property;
    NSSet *_values;
}

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithProperty:(id)arg1 values:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *values; // @synthesize values=_values;
@property(readonly, copy, nonatomic) NSString *property; // @synthesize property=_property;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForEntityClass:(Class)arg1;

@end
