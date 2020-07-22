//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>

@class CMAttitude;

@interface CMDeviceMotionInternal : NSObject <NSCopying>
{
    CDStruct_31142d93 fGravity;
    CDStruct_31142d93 fUserAcceleration;
    CDStruct_31142d93 fRotationRate;
    CMAttitude *fAttitude;
    CDStruct_31142d93 fMagneticField;
    int fMagneticFieldCalibrationLevel;
    _Bool fDoingYawCorrection;
    _Bool fDoingBiasEstimation;
    float fHeading;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDeviceMotion:(CDStruct_981b33bd)arg1;
- (void)setDeviceMotion:(CDStruct_981b33bd)arg1;

@end

