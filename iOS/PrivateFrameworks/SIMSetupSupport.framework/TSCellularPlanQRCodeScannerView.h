//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SIMSetupSupport/AVCaptureMetadataOutputObjectsDelegate-Protocol.h>

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoPreviewLayer, NSObject, NSString;
@protocol OS_dispatch_queue, TSCellularPlanQRCodeScannerCaptureDelegate;

@interface TSCellularPlanQRCodeScannerView : UIView <AVCaptureMetadataOutputObjectsDelegate>
{
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_deviceInput;
    NSObject<OS_dispatch_queue> *_metadataQueue;
    AVCaptureVideoPreviewLayer *_previewLayer;
    _Bool _canUseCamera;
    id <TSCellularPlanQRCodeScannerCaptureDelegate> _delegate;
}

@property(nonatomic) id <TSCellularPlanQRCodeScannerCaptureDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool canUseCamera; // @synthesize canUseCamera=_canUseCamera;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLayoutSubviews;
- (void)_changeCameraConfiguration;
- (void)autoExposeAtPoint:(struct CGPoint)arg1;
- (void)autoFocusAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) _Bool isRunning;
- (void)stopRunning;
- (void)startRunning;
- (void)layoutSubviews;
- (void)setupCameraSession;
- (void)handleRuntimeError:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

