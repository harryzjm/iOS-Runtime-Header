//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <ChatKit/CKVoiceControllerDelegate-Protocol.h>

@class CKVoiceController, NSDate, NSString, NSURL;
@protocol CKAudioRecorderDelegate;

@interface CKAudioRecorder : NSObject <CKVoiceControllerDelegate>
{
    _Bool _recording;
    _Bool _recordingEmpty;
    _Bool _cancelled;
    _Bool _shouldPlayStartSound;
    _Bool _shouldPlayStopSound;
    id <CKAudioRecorderDelegate> _delegate;
    CKVoiceController *_voiceController;
    NSURL *_fileURL;
    NSDate *_startDate;
    CDUnknownBlockType _completion;
    struct OpaqueAudioFileID *_fileID;
    long long _totalPacketsCount;
}

@property(nonatomic) long long totalPacketsCount; // @synthesize totalPacketsCount=_totalPacketsCount;
@property(nonatomic) struct OpaqueAudioFileID *fileID; // @synthesize fileID=_fileID;
@property(nonatomic) _Bool shouldPlayStopSound; // @synthesize shouldPlayStopSound=_shouldPlayStopSound;
@property(nonatomic) _Bool shouldPlayStartSound; // @synthesize shouldPlayStartSound=_shouldPlayStartSound;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) CKVoiceController *voiceController; // @synthesize voiceController=_voiceController;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isRecordingEmpty) _Bool recordingEmpty; // @synthesize recordingEmpty=_recordingEmpty;
@property(nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
@property(nonatomic) __weak id <CKAudioRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)resetState;
- (void)voiceController:(id)arg1 didUpdateAveragePower:(float)arg2;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)voiceControllerDidFinishRecording:(id)arg1 successfully:(_Bool)arg2;
- (void)voiceControllerDidStartRecording:(id)arg1;
- (void)voiceControllerDidDetectStartpoint:(id)arg1;
- (void)cancelRecording;
- (void)stopRecordingAndPlaySound:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopRecording:(CDUnknownBlockType)arg1;
- (void)startRecordingForRaiseGesture:(_Bool)arg1 shouldPlaySound:(_Bool)arg2;
- (void)startRecordingAndPlaySound:(_Bool)arg1;
- (void)startRecordingForRaiseGesture;
@property(readonly, nonatomic) double duration;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

