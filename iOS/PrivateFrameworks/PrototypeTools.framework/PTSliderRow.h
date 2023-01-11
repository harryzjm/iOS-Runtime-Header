//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PTSliderRow
{
    double _minValue;
    double _maxValue;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)minValue:(double)arg1 maxValue:(double)arg2;

@end
