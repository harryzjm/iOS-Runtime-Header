//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebSpeechRecognizerTaskImpl : NSObject
{
    ObjectIdentifier_0a27c126 _identifier;
    struct BlockPtr<void (const WebCore::SpeechRecognitionUpdate &)> _delegateCallback;
    _Bool _doMultipleRecognitions;
    unsigned long long _maxAlternatives;
    struct RetainPtr<SFSpeechRecognizer> _recognizer;
    struct RetainPtr<SFSpeechAudioBufferRecognitionRequest> _request;
    struct WeakObjCPtr<SFSpeechRecognitionTask> _task;
    _Bool _hasSentSpeechStart;
    _Bool _hasSentSpeechEnd;
    _Bool _hasSentEnd;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(_Bool)arg2;
- (void)speechRecognitionTaskWasCancelled:(id)arg1;
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
- (void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
- (void)speechRecognizer:(id)arg1 availabilityDidChange:(_Bool)arg2;
- (void)sendEndIfNeeded;
- (void)sendSpeechEndIfNeeded;
- (void)sendSpeechStartIfNeeded;
- (void)stop;
- (void)abort;
- (void)audioSamplesAvailable:(struct opaqueCMSampleBuffer *)arg1;
- (void)callbackWithTranscriptions:(id)arg1 isFinal:(_Bool)arg2;
- (id)initWithIdentifier:(ObjectIdentifier_0a27c126)arg1 locale:(id)arg2 doMultipleRecognitions:(_Bool)arg3 reportInterimResults:(_Bool)arg4 maxAlternatives:(unsigned long long)arg5 delegateCallback:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

