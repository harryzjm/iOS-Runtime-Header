//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCaptureDeviceInput, AVCaptureSession, NSObject, NSString, OKWidgetCameraPreviewView;
@protocol OS_dispatch_queue;

@interface OKWidgetCameraView
{
    NSObject<OS_dispatch_queue> *_sessionQueue;
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_videoDeviceInput;
    AVCaptureDeviceInput *_audioDeviceInput;
    _Bool _deviceAuthorized;
    id _runtimeErrorHandlingObserver;
    id _deviceConnectedObserver;
    id _deviceDisconnectedObserver;
    OKWidgetCameraPreviewView *_previewView;
    long long _inputType;
    NSString *_inputDeviceName;
    float _volume;
}

+ (id)deviceWithInputType:(long long)arg1 inputDeviceName:(id)arg2;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
+ (id)keyPathsForValuesAffectingSessionRunningAndDeviceAuthorized;
@property(nonatomic) id deviceDisconnectedObserver; // @synthesize deviceDisconnectedObserver=_deviceDisconnectedObserver;
@property(nonatomic) id deviceConnectedObserver; // @synthesize deviceConnectedObserver=_deviceConnectedObserver;
@property(nonatomic, getter=isDeviceAuthorized) _Bool deviceAuthorized; // @synthesize deviceAuthorized=_deviceAuthorized;
- (void)checkDeviceAuthorizationStatus;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (void)_stopRunning;
- (void)__stopRunning;
- (void)_startRunning;
- (void)_prepareSessionIfNeeded;
- (void)setSettingVolume:(float)arg1;
- (void)setSettingInputDeviceName:(id)arg1;
- (void)setSettingInput:(long long)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithWidget:(id)arg1;
@property(readonly, nonatomic, getter=isSessionRunningAndDeviceAuthorized) _Bool sessionRunningAndDeviceAuthorized;

@end

