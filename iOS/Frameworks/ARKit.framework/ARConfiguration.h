//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>

@class ARImageSensorSettings, ARReplaySensor, ARVideoFormat, AVCaptureSession, NSArray, NSString;

@interface ARConfiguration : NSObject <NSCopying>
{
    ARVideoFormat *_videoFormat;
    _Bool _providesAudioData;
    _Bool _autoFocusEnabled;
    _Bool _allowCameraInMultipleForegroundAppLayout;
    _Bool _mirroredFrameOutput;
    long long _worldAlignment;
    NSArray *_customSensors;
    unsigned long long _lightEstimation;
    unsigned long long _frameDebugOptions;
    long long _cameraPosition;
    AVCaptureSession *_captureSession;
}

+ (id)replayConfigurationWithConfiguration:(id)arg1 replaySensor:(id)arg2 replayingResultDataClasses:(id)arg3;
+ (id)recordingConfigurationWithConfiguration:(id)arg1 recordingTechnique:(id *)arg2 fileURL:(id)arg3;
+ (id)recordingConfigurationWithConfiguration:(id)arg1 recordingTechnique:(id *)arg2;
+ (id)supportedVideoFormats;
+ (_Bool)isSupported;
@property(nonatomic) _Bool mirroredFrameOutput; // @synthesize mirroredFrameOutput=_mirroredFrameOutput;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) _Bool allowCameraInMultipleForegroundAppLayout; // @synthesize allowCameraInMultipleForegroundAppLayout=_allowCameraInMultipleForegroundAppLayout;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(nonatomic) unsigned long long frameDebugOptions; // @synthesize frameDebugOptions=_frameDebugOptions;
@property(nonatomic) unsigned long long lightEstimation; // @synthesize lightEstimation=_lightEstimation;
@property(retain, nonatomic) NSArray *customSensors; // @synthesize customSensors=_customSensors;
@property(nonatomic, getter=isAutoFocusEnabled) _Bool autoFocusEnabled; // @synthesize autoFocusEnabled=_autoFocusEnabled;
@property(nonatomic) _Bool providesAudioData; // @synthesize providesAudioData=_providesAudioData;
@property(nonatomic) long long worldAlignment; // @synthesize worldAlignment=_worldAlignment;
@property(retain, nonatomic) ARVideoFormat *videoFormat; // @synthesize videoFormat=_videoFormat;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionWithoutBrackets;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)renderingTechnique;
- (void)createTechniquesWithParallelTechniques:(id)arg1 serialTechniques:(id)arg2;
- (id)techniques;
@property(readonly, nonatomic) ARReplaySensor *replaySensor;
@property(readonly, nonatomic) NSString *deviceModel;
@property(nonatomic, getter=isLightEstimationEnabled) _Bool lightEstimationEnabled;
@property(readonly, nonatomic) ARImageSensorSettings *imageSensorSettings;
- (id)initPrivate;
- (id)init;

@end

