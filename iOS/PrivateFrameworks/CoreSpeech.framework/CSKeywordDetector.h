//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSKeywordAnalyzerQuasarScoreDelegate-Protocol.h>
#import <CoreSpeech/CSSpeechManagerDelegate-Protocol.h>

@class CSAsset, CSKeywordAnalyzerQuasar, CSSpeechManager, NSString;
@protocol CSVoiceTriggerDelegate, OS_dispatch_queue;

@interface CSKeywordDetector : NSObject <CSKeywordAnalyzerQuasarScoreDelegate, CSSpeechManagerDelegate>
{
    _Bool _isRunningRecognizer;
    float _keywordThreshold;
    id <CSVoiceTriggerDelegate> _delegate;
    CSSpeechManager *_speechManager;
    NSObject<OS_dispatch_queue> *_queue;
    CSAsset *_currentAsset;
    CSKeywordAnalyzerQuasar *_keywordAnalyzer;
    unsigned long long _analyzedSampleCount;
    unsigned long long _decisionWaitSampleCount;
}

@property(nonatomic) _Bool isRunningRecognizer; // @synthesize isRunningRecognizer=_isRunningRecognizer;
@property(nonatomic) unsigned long long decisionWaitSampleCount; // @synthesize decisionWaitSampleCount=_decisionWaitSampleCount;
@property(nonatomic) unsigned long long analyzedSampleCount; // @synthesize analyzedSampleCount=_analyzedSampleCount;
@property(nonatomic) float keywordThreshold; // @synthesize keywordThreshold=_keywordThreshold;
@property(retain, nonatomic) CSKeywordAnalyzerQuasar *keywordAnalyzer; // @synthesize keywordAnalyzer=_keywordAnalyzer;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak CSSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(nonatomic) __weak id <CSVoiceTriggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)keywordAnalyzerQuasar:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)_setAsset:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)_reset;
- (void)reset;
- (void)startDetectKeyword:(id)arg1;
- (id)initWithManager:(id)arg1 asset:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

