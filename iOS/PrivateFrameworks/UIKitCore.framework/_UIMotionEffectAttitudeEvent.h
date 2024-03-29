//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIMotionEffectAttitudeEvent
{
    struct {
        double x;
        double y;
        double z;
        double w;
    } _attitude;
}

@property(readonly, nonatomic) CDStruct_d2b197d1 attitude; // @synthesize attitude=_attitude;
- (double)velocityRelativeToPreviousEvent:(id)arg1;
- (id)copyWithTimestamp:(double)arg1;
- (id)initWithTimestamp:(double)arg1 attitude:(CDStruct_d2b197d1)arg2;

@end

