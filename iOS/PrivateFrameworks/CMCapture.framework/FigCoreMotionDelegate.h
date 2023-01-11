//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FigCoreMotionDelegate : NSObject
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } ringMutex;
    _Bool manageFusedMotion;
    _Bool manageAccel;
    _Bool manageGravity;
    int accelRingIndex;
    float accelRingX[256];
    float accelRingY[256];
    float accelRingZ[256];
    double accelRingTime[256];
    int fusedRingIndex;
    double fusedRingTime[256];
    _Bool fusedRingDoingBiasEstimation[256];
    CDStruct_03942939 fusedRingAccel[256];
    CDStruct_bf7dff04 fusedRingQuaternion[256];
    CDStruct_03942939 fusedRingPosition[256];
    struct OpaqueFigSemaphore *dataSemaphore;
    double latestMotionDataTime;
    double latestGravityDataTime;
    _Bool copyingAllData;
    double dLatestFusedMotionCopied;
    double dLatestTimestamp;
    double dGyroUpdateInterval;
    double timestampLatency;
    double dStartOfLogging;
    _Bool gettingAttitudeChange;
    CDStruct_bf7dff04 previousQuaternion;
    CDStruct_bf7dff04 currentQuaternion;
    _Bool computingPosition;
    CDStruct_f31118bd position;
    CDStruct_f31118bd velocity;
}

- (_Bool)isCopyingAllData;
- (_Bool)managingGravity;
- (_Bool)managingAccel;
- (_Bool)managingFusedMotion;
- (int)getLatestMotionDataTime:(double *)arg1;
- (void)getPositionX:(float *)arg1 y:(float *)arg2 z:(float *)arg3 forTimeStamp:(double)arg4;
- (void)getCurrentDeltaAttitudeRoll:(double *)arg1 pitch:(double *)arg2 yaw:(double *)arg3;
- (void)getCurrentAttitudeRoll:(double *)arg1 pitch:(double *)arg2 yaw:(double *)arg3;
- (void)getCurrentDeltaQuaternion:(CDStruct_bf7dff04 *)arg1;
- (void)getCurrentQuaternion:(CDStruct_bf7dff04 *)arg1;
- (int)updateCurrentQuaternionForTimeStamps:(double)arg1 withEnd:(double)arg2;
- (int)updateCurrentQuaternionForTimeStamp:(double)arg1;
- (id)copyFusedMotionData:(double)arg1 endTime:(double)arg2 timeoutValue:(double)arg3 errOut:(int *)arg4;
- (id)copyNewFusedMotionData;
- (id)copyAllFusedMotionData;
- (void)didUpdatePositionWithTimeStamp:(double)arg1;
- (void)didUpdateVelocityWithAcceleration:(CDStruct_03942939 *)arg1 forTimeStamp:(double)arg2;
- (void)didUpdatePositionWithAcceleration:(CDStruct_03942939 *)arg1 forTimeStamp:(double)arg2;
- (void)didUpdateFusedMotionWithDeviceMotion:(CDStruct_69e6d857)arg1 time:(double)arg2 ifsync:(_Bool)arg3;
- (int)getFusedVectorX:(float *)arg1 y:(float *)arg2 z:(float *)arg3 forTimeStamp:(double)arg4;
- (int)getGravityX:(float *)arg1 y:(float *)arg2 z:(float *)arg3 forTimeStamp:(double)arg4;
- (int)getVectorX:(float *)arg1 y:(float *)arg2 z:(float *)arg3 forTimeStamp:(double)arg4;
- (void)didUpdateGravity:(CDStruct_03942939)arg1 time:(double)arg2;
- (void)didUpdateAcceleration:(CDStruct_03942939)arg1 time:(double)arg2;
- (void)dealloc;
- (id)init;
- (void)updateGyroInterval:(float)arg1;
- (void)updateDeviceCallback:(_Bool)arg1 fusedMotionUpdateInterval:(float)arg2;
- (id)initWithAccelerometer:(_Bool)arg1 gravityZ:(_Bool)arg2 fusedMotion:(_Bool)arg3 accelUpdateInterval:(float)arg4 fusedMotionUpdateInterval:(float)arg5 motionCallbackThreadPriority:(id)arg6;

@end
