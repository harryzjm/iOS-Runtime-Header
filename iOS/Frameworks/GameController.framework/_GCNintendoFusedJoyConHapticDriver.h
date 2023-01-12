//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol _GCDriverClientInterface;

__attribute__((visibility("hidden")))
@interface _GCNintendoFusedJoyConHapticDriver : NSObject
{
    id <_GCDriverClientInterface> _leftDriver;
    id <_GCDriverClientInterface> _rightDriver;
}

- (void).cxx_destruct;
- (void)setHapticMotor:(unsigned long long)arg1 frequency:(float)arg2 amplitude:(float)arg3;
- (void)enqueueTransient:(id)arg1 hapticMotor:(unsigned long long)arg2;
- (void)enableHaptics;
- (id)getDriver:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1;

@end

