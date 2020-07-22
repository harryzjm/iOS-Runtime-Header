//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIVectorOperatable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterpolatedFloat : NSObject <UIVectorOperatable>
{
    double _number;
    double _epsilon;
}

+ (id)zero;
+ (id)epsilon;
+ (id)valueWithFloat:(double)arg1 epsilon:(double)arg2;
+ (id)valueWithFloat:(double)arg1;
@property(readonly, copy) NSString *debugDescription;
- (void)reinitWithVector:(id)arg1;
- (id)multiplyByVector:(id)arg1;
- (id)multiplyByScalar:(double)arg1;
- (id)addVector:(id)arg1;
- (void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(CDStruct_9e265dec)arg5 state:(CDStruct_289c5ec3)arg6 delta:(double)arg7;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isUndefined;
- (_Bool)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2;
- (_Bool)isApproximatelyEqualTo:(id)arg1;
- (id)getValue;
- (id)getNSValue;
- (id)interpolateTo:(id)arg1 progress:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

