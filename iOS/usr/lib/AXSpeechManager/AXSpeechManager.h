//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXSpeechManager/TTSSpeechSynthesizerDelegate-Protocol.h>

@class AXSpeechThread, NSArray, NSMutableArray, NSNumber, NSString, TTSSpeechSynthesizer;

@interface AXSpeechManager : NSObject <TTSSpeechSynthesizerDelegate>
{
    NSMutableArray *_speechQueue;
    TTSSpeechSynthesizer *_synthesizer;
    AXSpeechThread *_runThread;
    unsigned int _audioQueueFlags;
    _Bool _isSpeaking;
    _Bool _speechEnabled;
    _Bool isPaused;
    _Bool _showControlCenterControls;
    CDUnknownBlockType _requestWillStart;
    NSNumber *_originalSpeechRateForJobOverride;
}

+ (void)test_setAvailableVoices:(id)arg1;
+ (void)test_setUnitTestMode:(_Bool)arg1;
+ (void)test_actionStartTap:(CDUnknownBlockType)arg1;
+ (id)remapLanguageCode:(id)arg1;
+ (id)matchedRangesForString:(id)arg1 withRegularExpression:(struct URegularExpression *)arg2;
+ (struct URegularExpression *)createRegularExpressionFromString:(id)arg1;
+ (id)_resetAvailableVoices;
+ (id)availableVoices;
+ (id)availableLanguageCodes;
+ (id)pauseMarkupString:(id)arg1;
+ (id)spellOutMarkupString:(id)arg1;
+ (id)currentLanguageCode;
@property(retain, nonatomic) NSNumber *originalSpeechRateForJobOverride; // @synthesize originalSpeechRateForJobOverride=_originalSpeechRateForJobOverride;
@property(copy, nonatomic) CDUnknownBlockType requestWillStart; // @synthesize requestWillStart=_requestWillStart;
@property(readonly, nonatomic) _Bool showControlCenterControls; // @synthesize showControlCenterControls=_showControlCenterControls;
@property(nonatomic) _Bool speechEnabled; // @synthesize speechEnabled=_speechEnabled;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused;
- (void).cxx_destruct;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 forRequest:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didContinueSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didPauseSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 withError:(id)arg4;
- (void)__speechJobFinished:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
@property(nonatomic) unsigned int audioQueueFlags;
@property(retain, nonatomic) NSArray *outputChannels;
@property(readonly, nonatomic) _Bool isSpeaking; // @dynamic isSpeaking;
- (void)_isSpeaking:(id)arg1;
- (void)stopSpeaking;
- (void)stopSpeaking:(int)arg1;
- (void)_stopSpeaking:(id)arg1;
- (void)continueSpeaking;
- (void)_continueSpeaking;
- (void)pauseSpeaking:(int)arg1;
- (void)_pauseSpeaking:(id)arg1;
- (void)dispatchSpeechAction:(id)arg1;
- (void)clearSpeechQueue;
- (void)_clearSpeechQueue;
- (void)_dispatchSpeechAction:(id)arg1;
- (void)_startNextSpeechJob;
- (id)_phonemeSubstitutionsForAction:(id)arg1;
- (id)voiceIdentifierUsedForLanguage:(id)arg1;
- (void)_speechJobFinished:(_Bool)arg1 action:(id)arg2;
- (void)_updateUserSubstitutions;
- (void)_initialize;
- (void)_tearDown;
- (void)tearDown;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

