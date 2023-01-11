//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisualVoicemail/_VMSpeechRecognitionTaskDelegatePrivate-Protocol.h>

@class NSObject, NSString, VMVoicemailTranscript;
@protocol OS_dispatch_semaphore;

@interface VMTranscriptionTranscribeOperation <_VMSpeechRecognitionTaskDelegatePrivate>
{
    double _duration;
    double _timeout;
    CDUnknownBlockType _transcribeOperationCompletion;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    VMVoicemailTranscript *_transcript;
}

@property(retain, nonatomic) VMVoicemailTranscript *transcript; // @synthesize transcript=_transcript;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(copy) CDUnknownBlockType transcribeOperationCompletion; // @synthesize transcribeOperationCompletion=_transcribeOperationCompletion;
@property double timeout; // @synthesize timeout=_timeout;
@property double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)speechRecognitionTask:(id)arg1 didProcessAudioDuration:(double)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(_Bool)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
- (void)speechRecognitionTaskWasCancelled:(id)arg1;
@property _Bool processOnServer;
- (void)main;
- (void)cancel;
- (id)initWithSpeechRecognizer:(id)arg1 speechURLRecognitionRequest:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

