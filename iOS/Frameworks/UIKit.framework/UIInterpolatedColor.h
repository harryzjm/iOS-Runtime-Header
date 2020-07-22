//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIVectorOperatable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterpolatedColor : NSObject <UIVectorOperatable>
{
    struct {
        double h;
        double s;
        double b;
        double a;
    } _color;
    double _epsilon;
}

+ (id)zero;
+ (id)epsilon;
+ (id)valueWithCGColor:(struct CGColor *)arg1;
+ (id)valueWithUIColor:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (struct CGColor *)getCGColor;
- (id)getUIColor;
- (id)getNSValue;
- (id)getValue;
- (_Bool)isUndefined;
- (_Bool)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2;
- (_Bool)isApproximatelyEqualTo:(id)arg1;
- (id)multiplyByVector:(id)arg1;
- (id)multiplyByScalar:(double)arg1;
- (id)addVector:(id)arg1;
- (void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(CDStruct_9e265dec)arg5 state:(CDStruct_289c5ec3)arg6 delta:(double)arg7;
- (id)interpolateTo:(id)arg1 progress:(double)arg2;
- (void)reinitWithVector:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDecomposedColor:(CDStruct_d2b197d1)arg1 epsilon:(double)arg2;
- (id)initWithDecomposedColor:(CDStruct_d2b197d1)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

