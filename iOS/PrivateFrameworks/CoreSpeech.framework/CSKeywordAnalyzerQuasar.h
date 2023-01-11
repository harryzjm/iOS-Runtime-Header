//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/_EARSpeechRecognitionResultStream-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, _EARSpeechRecognitionAudioBuffer, _EARSpeechRecognizer;
@protocol CSKeywordAnalyzerQuasarScoreDelegate, OS_dispatch_queue;

@interface CSKeywordAnalyzerQuasar : NSObject <_EARSpeechRecognitionResultStream>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_previousUtteranceTokens;
    NSArray *_triggerTokenList;
    _EARSpeechRecognizer *_recognizer;
    _EARSpeechRecognitionAudioBuffer *_recognizerBuffer;
    _Bool _useKeywordSpotting;
    NSDictionary *_ctcKwdToPhraseIdMap;
    double _triggerConfidence;
    unsigned long long _activeChannel;
    id <CSKeywordAnalyzerQuasarScoreDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CSKeywordAnalyzerQuasarScoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property(readonly, nonatomic) double triggerConfidence; // @synthesize triggerConfidence=_triggerConfidence;
@property(retain, nonatomic) NSDictionary *ctcKwdToPhraseIdMap; // @synthesize ctcKwdToPhraseIdMap=_ctcKwdToPhraseIdMap;
- (double)_getConfidence:(id)arg1;
- (void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;
- (id)_phraseIdToCtcScoreMap;
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;
- (void)_recognizeWavData:(const short *)arg1 length:(int)arg2;
- (void)processAudioChunk:(id)arg1;
- (void)endAudio;
- (void)runRecognition;
- (void)dealloc;
- (void)reset;
- (id)initWithConfigPath:(id)arg1 triggerTokens:(id)arg2 useKeywordSpotting:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
