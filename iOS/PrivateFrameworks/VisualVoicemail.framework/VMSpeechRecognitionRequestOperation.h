//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VMSpeechRecognitionRequest;

@interface VMSpeechRecognitionRequestOperation
{
    _Bool _forceOfflineRecognition;
    id <VMSpeechRecognitionRequest> _speechRecognitionRequest;
}

@property(retain) id <VMSpeechRecognitionRequest> speechRecognitionRequest; // @synthesize speechRecognitionRequest=_speechRecognitionRequest;
@property _Bool forceOfflineRecognition; // @synthesize forceOfflineRecognition=_forceOfflineRecognition;
- (void).cxx_destruct;
- (id)initWithSpeechRecognizer:(id)arg1 speechRecognitionRequest:(id)arg2;
- (id)initWithSpeechRecognizer:(id)arg1;

@end
