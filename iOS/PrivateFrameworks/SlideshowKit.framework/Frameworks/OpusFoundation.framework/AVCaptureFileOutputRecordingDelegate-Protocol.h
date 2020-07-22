//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OpusFoundation/NSObject-Protocol.h>

@class AVCaptureFileOutput, NSArray, NSError, NSURL;

@protocol AVCaptureFileOutputRecordingDelegate <NSObject>
- (void)captureOutput:(AVCaptureFileOutput *)arg1 didFinishRecordingToOutputFileAtURL:(NSURL *)arg2 fromConnections:(NSArray *)arg3 error:(NSError *)arg4;

@optional
- (void)captureOutput:(AVCaptureFileOutput *)arg1 willFinishRecordingToOutputFileAtURL:(NSURL *)arg2 fromConnections:(NSArray *)arg3 error:(NSError *)arg4;
- (void)captureOutput:(AVCaptureFileOutput *)arg1 didResumeRecordingToOutputFileAtURL:(NSURL *)arg2 fromConnections:(NSArray *)arg3;
- (void)captureOutput:(AVCaptureFileOutput *)arg1 didPauseRecordingToOutputFileAtURL:(NSURL *)arg2 fromConnections:(NSArray *)arg3;
- (void)captureOutput:(AVCaptureFileOutput *)arg1 didStartRecordingToOutputFileAtURL:(NSURL *)arg2 fromConnections:(NSArray *)arg3;
@end

