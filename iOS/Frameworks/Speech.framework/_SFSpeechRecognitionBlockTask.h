//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _SFSpeechRecognitionBlockTask
{
    CDUnknownBlockType _resultHandler;
    _Bool _hasFiredFinalResult;
}

- (void).cxx_destruct;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)_finalizeResultHandler;
- (void)_fireResultHandlerWithResult:(id)arg1 error:(id)arg2;
- (id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4 resultHandler:(CDUnknownBlockType)arg5;

@end

