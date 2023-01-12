//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKConstraint.h"

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKPositionConstraint : SKConstraint
{
    SKRange *_xRange;
    SKRange *_yRange;
}

+ (id)constraintWithYRange:(id)arg1;
+ (id)constraintWithXRange:(id)arg1;
+ (id)constraintWithXRange:(id)arg1 YRange:(id)arg2;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) SKRange *yRange; // @synthesize yRange=_yRange;
@property(copy) SKRange *xRange; // @synthesize xRange=_xRange;
- (_Bool)isEqualToPositionConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXRange:(id)arg1 YRange:(id)arg2;

@end

