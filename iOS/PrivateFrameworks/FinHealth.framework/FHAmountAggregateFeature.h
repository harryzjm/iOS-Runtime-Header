//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface FHAmountAggregateFeature
{
    NSString *_comparator;
    unsigned long long _amount;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *comparator; // @synthesize comparator=_comparator;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAmount:(unsigned long long)arg1 comparator:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
