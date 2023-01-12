//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterpolatedColorMatrix : NSObject
{
    struct CAColorMatrix _colorMatrix;
}

+ (id)zeroCompatibleWithVector:(id)arg1;
+ (id)epsilonCompatibleWithVector:(id)arg1;
+ (id)valueWithColorMatrix:(struct CAColorMatrix)arg1;
@property(readonly, copy) NSString *debugDescription;
- (id)getValue;
- (_Bool)isUndefined;
- (_Bool)isCompatibleWith:(id)arg1;
- (_Bool)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2;
- (id)multiplyByVector:(id)arg1;
- (id)multiplyByScalar:(double)arg1;
- (id)addVector:(id)arg1;
- (void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(CDStruct_500c0369)arg5 state:(CDStruct_289c5ec3)arg6 delta:(double)arg7;
- (id)interpolateTo:(id)arg1 progress:(double)arg2;
- (void)reinitWithVector:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColorMatrix:(struct CAColorMatrix)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

