//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisualPairing/NSObject-Protocol.h>

@class AVCaptureConnection, AVCaptureOutput;

@protocol AVCaptureVideoDataOutputSampleBufferDelegate <NSObject>

@optional
- (void)captureOutput:(AVCaptureOutput *)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(AVCaptureConnection *)arg3;
- (void)captureOutput:(AVCaptureOutput *)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(AVCaptureConnection *)arg3;
@end

