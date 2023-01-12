//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKQuantity;

@interface HKQuantityRange : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isMinimumInclusive;
    _Bool _isMaximumInclusive;
    HKQuantity *_minimum;
    HKQuantity *_maximum;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)areRangesDisjoint:(id)arg1;
+ (id)exclusiveRangeWithMinimum:(id)arg1 maximum:(id)arg2;
+ (id)inclusiveRangeWithMinimum:(id)arg1 maximum:(id)arg2;
+ (id)ATTDGlycemicRangesWithUnit:(id)arg1;
+ (id)ATTDHyperglycemicRangeWithUnit:(id)arg1;
+ (id)ATTDEuglycemicRangeWithUnit:(id)arg1;
+ (id)ATTDLevel1HypoglycemicRangeWithUnit:(id)arg1;
+ (id)ATTDLevel2HypoglycemicRangeWithUnit:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isMaximumInclusive; // @synthesize isMaximumInclusive=_isMaximumInclusive;
@property(nonatomic) _Bool isMinimumInclusive; // @synthesize isMinimumInclusive=_isMinimumInclusive;
@property(copy, nonatomic) HKQuantity *maximum; // @synthesize maximum=_maximum;
@property(copy, nonatomic) HKQuantity *minimum; // @synthesize minimum=_minimum;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)intersectsRange:(id)arg1;
- (_Bool)containsQuantity:(id)arg1;
- (id)initWithMinimum:(id)arg1 maximum:(id)arg2 isMinimumInclusive:(_Bool)arg3 isMaximumInclusive:(_Bool)arg4;

@end
