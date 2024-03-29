//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKUnit.h"

@class _HKDimension, _HKFactorization;

__attribute__((visibility("hidden")))
@interface _HKCompoundUnit : HKUnit
{
    _HKFactorization *_baseUnits;
    _HKDimension *_dimension;
    struct os_unfair_lock_s _dimensionLock;
}

+ (_Bool)supportsSecureCoding;
+ (id)unitWithBaseUnits:(id)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_computeBaseUnitReductionAndProportionalSize:(double *)arg1 withCycleSet:(id)arg2;
- (id)_baseUnits;
- (id)dimension;
- (id)unitString;
- (id)_initWithBaseUnits:(id)arg1;

@end

