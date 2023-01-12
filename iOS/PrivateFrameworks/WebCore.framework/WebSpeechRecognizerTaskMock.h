//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface WebSpeechRecognizerTaskMock
{
    ObjectIdentifier_0a27c126 _identifier;
    struct BlockPtr<void (const WebCore::SpeechRecognitionUpdate &)> _delegateCallback;
    _Bool _doMultipleRecognitions;
    _Bool _hasSentSpeechStart;
    _Bool _hasSentSpeechEnd;
    _Bool _completed;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stop;
- (void)abort;
- (void)audioSamplesAvailable:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithIdentifier:(ObjectIdentifier_0a27c126)arg1 locale:(id)arg2 doMultipleRecognitions:(_Bool)arg3 reportInterimResults:(_Bool)arg4 maxAlternatives:(unsigned long long)arg5 delegateCallback:(CDUnknownBlockType)arg6;

@end
