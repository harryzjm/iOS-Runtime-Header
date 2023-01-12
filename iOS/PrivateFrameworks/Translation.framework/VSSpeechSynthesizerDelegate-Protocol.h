//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Translation/NSObject-Protocol.h>

@class NSArray, NSError, NSString, VSAudioData, VSInstrumentMetrics, VSPresynthesizedAudioRequest, VSPreviewRequest, VSSpeechRequest, VSSpeechSynthesizer;

@protocol VSSpeechSynthesizerDelegate <NSObject>

@optional
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didStartPlayingPreviewRequest:(VSPreviewRequest *)arg2;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishPrewarmRequest:(VSSpeechRequest *)arg2 withError:(NSError *)arg3;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishPresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg2 withInstrumentMetrics:(VSInstrumentMetrics *)arg3 error:(NSError *)arg4;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didStopPresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg2 atEnd:(_Bool)arg3 error:(NSError *)arg4;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didStartPresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg2;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSynthesisRequest:(VSSpeechRequest *)arg2 withInstrumentMetrics:(VSInstrumentMetrics *)arg3 error:(NSError *)arg4;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 withSynthesisRequest:(VSSpeechRequest *)arg2 didGenerateAudioChunk:(VSAudioData *)arg3;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 forRequest:(VSSpeechRequest *)arg3;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didContinueSpeakingRequest:(VSSpeechRequest *)arg2;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didPauseSpeakingRequest:(VSSpeechRequest *)arg2;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSpeakingRequest:(VSSpeechRequest *)arg2 withInstrumentMetrics:(VSInstrumentMetrics *)arg3;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSpeakingRequest:(VSSpeechRequest *)arg2 successfully:(_Bool)arg3 phonemesSpoken:(NSString *)arg4 withError:(NSError *)arg5;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 withRequest:(VSSpeechRequest *)arg2 didReceiveTimingInfo:(NSArray *)arg3;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didStartSpeakingRequest:(VSSpeechRequest *)arg2;
@end

