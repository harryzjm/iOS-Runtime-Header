//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Translation/NSObject-Protocol.h>

@class NSArray, NSError, _EARSpeechRecognition, _EARSpeechRecognitionResult, _EARSpeechRecognitionResultPackage, _EARSpeechRecognizer;

@protocol _EARSpeechRecognitionResultStream <NSObject>
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizeFinalResults:(NSArray *)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didFinishRecognitionWithError:(NSError *)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizePartialResult:(_EARSpeechRecognitionResult *)arg2;

@optional
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizeFinalResultCandidatePackage:(_EARSpeechRecognitionResultPackage *)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didProduceLoggablePackage:(_EARSpeechRecognitionResultPackage *)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizePartialResultNbest:(NSArray *)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didProduceEndpointFeaturesWithWordCount:(long long)arg2 trailingSilenceDuration:(long long)arg3 eosLikelihood:(double)arg4 pauseCounts:(NSArray *)arg5 silencePosterior:(double)arg6 processedAudioDurationInMilliseconds:(long long)arg7;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizeRawEagerRecognitionCandidate:(_EARSpeechRecognition *)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didProcessAudioDuration:(double)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizeFinalResultPackage:(_EARSpeechRecognitionResultPackage *)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizeFinalResults:(NSArray *)arg2 tokenSausage:(NSArray *)arg3 nBestChoices:(NSArray *)arg4;
@end

