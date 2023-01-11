//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OpusFoundation/OFAudioRecorderDelegate-Protocol.h>

@class AVCaptureDeviceInput, AVCaptureSession, NSURL, OFAudioRecorder;
@protocol OFAudioCaptureManagerDelegate;

@interface OFAudioCaptureManager : NSObject <OFAudioRecorderDelegate>
{
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_audioInput;
    OFAudioRecorder *_recorder;
    NSURL *_outputFileURL;
    id _deviceConnectedObserver;
    id _deviceDisconnectedObserver;
    unsigned long long _backgroundRecordingID;
    _Bool _isCancelled;
    id <OFAudioCaptureManagerDelegate> _delegate;
}

@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) unsigned long long backgroundRecordingID; // @synthesize backgroundRecordingID=_backgroundRecordingID;
@property(nonatomic) id deviceDisconnectedObserver; // @synthesize deviceDisconnectedObserver=_deviceDisconnectedObserver;
@property(nonatomic) id deviceConnectedObserver; // @synthesize deviceConnectedObserver=_deviceConnectedObserver;
@property(copy, nonatomic) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
@property(retain, nonatomic) OFAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) AVCaptureDeviceInput *audioInput; // @synthesize audioInput=_audioInput;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
- (void)recorder:(id)arg1 recordingDidFinishToOutputFileURL:(id)arg2 error:(id)arg3;
- (void)recorderRecordingDidBegin:(id)arg1;
- (void)_removeFile:(id)arg1;
- (id)_tempFileURL;
- (id)_audioDevice;
- (float)meanAudioLevel;
- (unsigned long long)micCount;
- (_Bool)isRecording;
- (void)cancelRecording;
- (void)stopRecording;
- (void)startRecording;
- (_Bool)openSession;
@property(nonatomic) id <OFAudioCaptureManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithOutputFileURL:(id)arg1;

@end

