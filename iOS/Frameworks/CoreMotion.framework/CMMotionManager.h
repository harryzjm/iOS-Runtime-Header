//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMAccelerometerData, CMDeviceMotion, CMGyroData, CMMagnetometerData;

@interface CMMotionManager : NSObject
{
    id _internal;
}

+ (id)sharedManager;
+ (unsigned long long)availableAttitudeReferenceFrames;
- (void)stopDeviceMotionLiteUpdatesForDeviceID:(id)arg1;
- (void)startDeviceMotionLiteFusedUpdatesForDeviceID:(id)arg1 toQueue:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)startDeviceMotionLiteUpdatesForDeviceID:(id)arg1 usingConfiguration:(CDStruct_fcaf9308)arg2 toQueue:(id)arg3 withFusedHandler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic, getter=isDeviceMotionLiteAvailable) _Bool isDeviceMotionLiteAvailable;
- (void)stopMagnetometerUpdates;
- (void)startMagnetometerUpdates;
- (void)startMagnetometerUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
@property(readonly) CMMagnetometerData *magnetometerData;
@property(nonatomic) double magnetometerUpdateInterval;
@property(readonly, nonatomic, getter=isMagnetometerActive) _Bool magnetometerActive;
@property(readonly, nonatomic, getter=isMagnetometerAvailable) _Bool magnetometerAvailable;
- (void)dismissDeviceMovementDisplay;
@property(nonatomic) _Bool showsDeviceMovementDisplay;
- (void)stopDeviceMotionUpdates;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)arg1 toQueue:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)arg1;
- (void)startDeviceMotionUpdates;
- (void)startDeviceMotionUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
@property(readonly) CMDeviceMotion *deviceMotion; // @dynamic deviceMotion;
@property(readonly, nonatomic) unsigned long long attitudeReferenceFrame; // @dynamic attitudeReferenceFrame;
@property(nonatomic) double deviceMotionUpdateInterval; // @dynamic deviceMotionUpdateInterval;
@property(readonly, nonatomic, getter=isDeviceMotionActive) _Bool deviceMotionActive; // @dynamic deviceMotionActive;
@property(readonly, nonatomic, getter=isDeviceMotionAvailable) _Bool deviceMotionAvailable; // @dynamic deviceMotionAvailable;
- (void)stopGyroUpdates;
- (void)startGyroUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)startGyroUpdates;
@property(readonly) CMGyroData *gyroData; // @dynamic gyroData;
@property(nonatomic) double gyroUpdateInterval; // @dynamic gyroUpdateInterval;
@property(readonly, nonatomic, getter=isGyroActive) _Bool gyroActive; // @dynamic gyroActive;
@property(readonly, nonatomic, getter=isGyroAvailable) _Bool gyroAvailable; // @dynamic gyroAvailable;
- (void)stopAccelerometerUpdates;
- (void)startAccelerometerUpdates;
- (void)startAccelerometerUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
@property(readonly) CMAccelerometerData *accelerometerData; // @dynamic accelerometerData;
@property(nonatomic) double accelerometerUpdateInterval; // @dynamic accelerometerUpdateInterval;
@property(readonly, nonatomic, getter=isAccelerometerActive) _Bool accelerometerActive; // @dynamic accelerometerActive;
@property(readonly, nonatomic, getter=isAccelerometerAvailable) _Bool accelerometerAvailable; // @dynamic accelerometerAvailable;
- (void)dealloc;
- (id)init;

@end
