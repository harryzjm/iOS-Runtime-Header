//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCaptureDevice, AVCaptureDeviceInputInternal;

@interface AVCaptureDeviceInput
{
    AVCaptureDeviceInputInternal *_internal;
}

+ (id)deviceInputWithDevice:(id)arg1 error:(id *)arg2;
+ (void)initialize;
- (void)_sourceFormatDidChange:(struct opaqueCMFormatDescription *)arg1;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (int)_requestCameraRecordPermissionForDevice:(id)arg1;
- (_Bool)_authorizedToUseDevice:(id)arg1;
- (struct OpaqueCMClock *)clock;
- (id)ports;
- (id)notReadyError;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
@property(readonly, nonatomic) AVCaptureDevice *device;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithDevice:(id)arg1 error:(id *)arg2;

@end

