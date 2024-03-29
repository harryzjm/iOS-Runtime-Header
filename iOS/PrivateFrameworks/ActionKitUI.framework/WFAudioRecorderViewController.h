//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIButton, WFAudioRecorder;

__attribute__((visibility("hidden")))
@interface WFAudioRecorderViewController
{
    _Bool _startImmediately;
    _Bool _isFinishing;
    CDUnknownBlockType _completionHandler;
    double _recordingDuration;
    WFAudioRecorder *_audioRecorder;
    UIButton *_inputButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFinishing; // @synthesize isFinishing=_isFinishing;
@property(nonatomic) __weak UIButton *inputButton; // @synthesize inputButton=_inputButton;
@property(retain, nonatomic) WFAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(nonatomic) double recordingDuration; // @synthesize recordingDuration=_recordingDuration;
@property(nonatomic) _Bool startImmediately; // @synthesize startImmediately=_startImmediately;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)audioRecorder:(id)arg1 didFinishWithDestinationURL:(id)arg2 error:(id)arg3;
- (void)audioRecorder:(id)arg1 didProgressToTime:(double)arg2;
- (void)inputButtonTapped;
- (void)finishRecording;
- (void)startRecording;
- (void)viewWillAppear:(_Bool)arg1;
- (void)handleTap;
- (void)viewDidLoad;
- (id)initWithOutputFormat:(long long)arg1 destinationURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

