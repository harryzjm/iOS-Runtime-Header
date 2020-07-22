//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCaptureFileOutputInternal, NSURL;

@interface AVCaptureFileOutput
{
    AVCaptureFileOutputInternal *_fileOutputInternal;
}

+ (void)initialize;
@property(nonatomic) long long minFreeDiskSpaceLimit;
@property(nonatomic) long long maxRecordedFileSize;
@property(nonatomic) CDStruct_1b6d18a9 maxRecordedDuration;
@property(readonly, nonatomic) long long recordedFileSize;
@property(readonly, nonatomic) CDStruct_1b6d18a9 recordedDuration;
- (void)setPausesRecordingOnInterruption:(_Bool)arg1;
- (_Bool)pausesRecordingOnInterruption;
- (void)resumeRecording;
- (void)pauseRecording;
- (_Bool)isRecordingPaused;
- (void)stopRecording;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
@property(readonly, nonatomic, getter=isRecording) _Bool recording;
@property(readonly, nonatomic) NSURL *outputFileURL;
- (void)dealloc;
- (id)initSubclass;

@end

