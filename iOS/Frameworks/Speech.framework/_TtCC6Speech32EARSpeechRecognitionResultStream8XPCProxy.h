//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtCC6Speech32EARSpeechRecognitionResultStream8XPCProxy : NSObject
{
    MISSING_TYPE *enqueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)speechRecognizerDidProcessAudioDuration:(double)arg1;
- (void)speechRecognizerDidProduceEndpointFeaturesWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 processedAudioDurationInMilliseconds:(long long)arg6;
- (void)speechRecognizerDidProduceLoggablePackage:(id)arg1;
- (void)speechRecognizerDidRecognizeFinalResultCandidatePackage:(id)arg1;
- (void)speechRecognizerDidRecognizePartialResultNbest:(id)arg1;
- (void)speechRecognizerDidRecognizeFinalResultPackage:(id)arg1;
- (void)speechRecognizerDidFinishRecognitionWithError:(id)arg1;

@end

