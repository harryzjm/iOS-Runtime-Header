//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMCameraStream, NSString;
@protocol _HMCameraStreamControlDelegate;

@interface _HMCameraStreamControl
{
    unsigned long long _streamState;
    HMCameraStream *_cameraStream;
    id <_HMCameraStreamControlDelegate> _delegate;
    NSString *_streamSessionID;
}

- (void).cxx_destruct;
- (void)_callVideoStoppedDelegate:(id)arg1;
- (void)_callVideoStartedDelegate;
- (void)_handleVideoStopResponse:(id)arg1 error:(id)arg2 sessionID:(id)arg3;
- (void)_stopStream;
- (void)stopStream;
- (void)_handleVideoStreamStartResponse:(id)arg1 error:(id)arg2 sessionID:(id)arg3;
- (void)_handleNegotiateStreamResponse:(id)arg1 error:(id)arg2 sessionID:(id)arg3;
- (void)_startStreamWithPraeferences:(id)arg1;
- (void)startStreamWithPreferences:(id)arg1;
- (void)_handleVideoStreamStopped:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_resetState:(id)arg1;
@property(retain, nonatomic) NSString *streamSessionID; // @synthesize streamSessionID=_streamSessionID;
@property(nonatomic) unsigned long long streamState; // @synthesize streamState=_streamState;
- (void)setCameraStream:(id)arg1;
@property(readonly, nonatomic) HMCameraStream *cameraStream; // @synthesize cameraStream=_cameraStream;
@property(nonatomic) __weak id <_HMCameraStreamControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)homedRestarted;
- (id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3;

@end

