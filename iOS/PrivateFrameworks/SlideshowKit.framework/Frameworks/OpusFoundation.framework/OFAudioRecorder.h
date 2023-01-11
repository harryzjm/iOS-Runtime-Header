//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OpusFoundation/AVCaptureFileOutputRecordingDelegate-Protocol.h>

@class AVCaptureMovieFileOutput, AVCaptureSession, NSString, NSURL;
@protocol OFAudioRecorderDelegate;

@interface OFAudioRecorder : NSObject <AVCaptureFileOutputRecordingDelegate>
{
    AVCaptureSession *_session;
    AVCaptureMovieFileOutput *_movieFileOutput;
    NSURL *_outputFileURL;
    NSObject<OFAudioRecorderDelegate> *_delegate;
}

@property(copy, nonatomic) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
@property(retain, nonatomic) AVCaptureMovieFileOutput *movieFileOutput; // @synthesize movieFileOutput=_movieFileOutput;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
- (id)_connectionWithMediaType:(id)arg1;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)stopRecording;
- (void)startRecording;
@property(readonly, nonatomic, getter=isRecording) _Bool recording;
@property(readonly, nonatomic) _Bool recordsAudio;
@property(nonatomic) NSObject<OFAudioRecorderDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithSession:(id)arg1 outputFileURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
