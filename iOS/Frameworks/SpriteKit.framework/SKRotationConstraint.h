//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKConstraint.h"

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKRotationConstraint : SKConstraint
{
    SKRange *_zRotationRange;
}

+ (id)constraintWithZRotationRange:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) SKRange *zRotationRange; // @synthesize zRotationRange=_zRotationRange;
- (_Bool)isEqualToRotationConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZRotationRange:(id)arg1;

@end

