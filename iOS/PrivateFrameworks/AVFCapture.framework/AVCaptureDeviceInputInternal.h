//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureDevice, AVWeakReference, NSArray;
@protocol AVCallbackCancellation;

__attribute__((visibility("hidden")))
@interface AVCaptureDeviceInputInternal : NSObject
{
    AVCaptureDevice *device;
    NSArray *ports;
    NSArray *multiCamPorts;
    _Bool unifiedAutoExposureDefaultsEnabled;
    _Bool builtInMicrophoneStereoAudioCaptureEnabled;
    _Bool visionDataDeliveryEnabled;
    _Bool cameraCalibrationDataDeliveryEnabled;
    float simulatedAperture;
    CDStruct_1b6d18a9 videoMinFrameDurationOverride;
    float maxGainOverride;
    _Bool ready;
    float portraitLightingEffectStrength;
    AVWeakReference *weakReference;
    id <AVCallbackCancellation> deviceOpenCallbackInvoker;
}

- (void)dealloc;

@end
