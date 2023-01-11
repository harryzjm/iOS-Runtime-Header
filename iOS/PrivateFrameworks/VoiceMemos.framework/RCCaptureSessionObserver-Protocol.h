//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceMemos/NSObject-Protocol.h>

@class RCCaptureSession;

@protocol RCCaptureSessionObserver <NSObject>
- (void)captureSession:(RCCaptureSession *)arg1 destinationFragmentDurationDidChangeToDuration:(double)arg2 captureTime:(double)arg3 usingDisplayLinkSmoothing:(_Bool)arg4;
- (void)captureSession:(RCCaptureSession *)arg1 rateDidChangeToRate:(float)arg2;
- (void)captureSession:(RCCaptureSession *)arg1 didFinishWithSuccess:(_Bool)arg2;
@end

