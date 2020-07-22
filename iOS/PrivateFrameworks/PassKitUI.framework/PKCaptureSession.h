//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/AVCaptureMetadataOutputObjectsDelegate-Protocol.h>

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoPreviewLayer, NSString;
@protocol OS_dispatch_queue, PKCaptureDelegate;

@interface PKCaptureSession : NSObject <AVCaptureMetadataOutputObjectsDelegate>
{
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_deviceInput;
    NSObject<OS_dispatch_queue> *_metadataQueue;
    AVCaptureVideoPreviewLayer *_previewLayer;
    id <PKCaptureDelegate> _delegate;
}

@property(nonatomic) id <PKCaptureDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_changeCameraConfiguration;
- (void)autoExposeAtPoint:(struct CGPoint)arg1;
- (void)autoFocusAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) _Bool isRunning;
- (void)stopRunning;
- (void)startRunning;
- (void)setupCameraSession;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
