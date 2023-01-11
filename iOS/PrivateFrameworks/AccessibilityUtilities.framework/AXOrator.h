//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AVSpeechSynthesizerDelegate-Protocol.h>

@class AVSpeechSynthesizer, AVSpeechUtterance, AXDispatchTimer, AXLanguageTag, AXLanguageTaggedContent, NSArray, NSMutableArray, NSString;
@protocol AXOratorDelegate;

@interface AXOrator : NSObject <AVSpeechSynthesizerDelegate>
{
    AVSpeechUtterance *_statusUtterance;
    _Bool _contentIsSpeakable;
    AXDispatchTimer *_audioSessionTimer;
    _Bool _spellOutContent;
    _Bool _shouldSpeakNextItemOnResume;
    _Bool _preferredLanguageWasSpecified;
    _Bool _isAudioSessionActive;
    _Bool _pendingAudioSessionActive;
    _Bool _isInAudioInterruption;
    _Bool _wasSpeakingBeforeAudioInterruption;
    _Bool _didRequestStartSpeakingDuringAudioInterruption;
    _Bool _didRequestPauseSpeakingDuringAudioInterruption;
    _Bool _didRequestResumeSpeakingDuringAudioInterruption;
    id <AXOratorDelegate> _delegate;
    long long _speakingContext;
    AXLanguageTaggedContent *_selectedContent;
    NSString *_voiceIdentifier;
    AXLanguageTaggedContent *_speakingContent;
    NSArray *_speakingContentTokenRanges;
    unsigned long long _numberOfTokensToSkip;
    AVSpeechSynthesizer *_speechSynthesizer;
    NSMutableArray *_speechSequenceItems;
    NSString *_lastUtteranceLanguageCode;
    AVSpeechUtterance *_lastUtterance;
    AXLanguageTag *_lastUtteranceLanguageTag;
    NSString *_currentLanguageCode;
    double _audioInterruptionStartedTime;
    NSString *_requestedLanguageCodeDuringAudioInterruption;
    struct _NSRange _lastSpokenSubstringRange;
    struct _NSRange _lastUtteranceSubstringRange;
}

@property(copy, nonatomic) NSString *requestedLanguageCodeDuringAudioInterruption; // @synthesize requestedLanguageCodeDuringAudioInterruption=_requestedLanguageCodeDuringAudioInterruption;
@property(nonatomic) _Bool didRequestResumeSpeakingDuringAudioInterruption; // @synthesize didRequestResumeSpeakingDuringAudioInterruption=_didRequestResumeSpeakingDuringAudioInterruption;
@property(nonatomic) _Bool didRequestPauseSpeakingDuringAudioInterruption; // @synthesize didRequestPauseSpeakingDuringAudioInterruption=_didRequestPauseSpeakingDuringAudioInterruption;
@property(nonatomic) _Bool didRequestStartSpeakingDuringAudioInterruption; // @synthesize didRequestStartSpeakingDuringAudioInterruption=_didRequestStartSpeakingDuringAudioInterruption;
@property(nonatomic) _Bool wasSpeakingBeforeAudioInterruption; // @synthesize wasSpeakingBeforeAudioInterruption=_wasSpeakingBeforeAudioInterruption;
@property(nonatomic) double audioInterruptionStartedTime; // @synthesize audioInterruptionStartedTime=_audioInterruptionStartedTime;
@property(nonatomic) _Bool isInAudioInterruption; // @synthesize isInAudioInterruption=_isInAudioInterruption;
@property(nonatomic) _Bool pendingAudioSessionActive; // @synthesize pendingAudioSessionActive=_pendingAudioSessionActive;
@property(nonatomic) _Bool isAudioSessionActive; // @synthesize isAudioSessionActive=_isAudioSessionActive;
@property(nonatomic) _Bool preferredLanguageWasSpecified; // @synthesize preferredLanguageWasSpecified=_preferredLanguageWasSpecified;
@property(retain, nonatomic) NSString *currentLanguageCode; // @synthesize currentLanguageCode=_currentLanguageCode;
@property(nonatomic) _Bool shouldSpeakNextItemOnResume; // @synthesize shouldSpeakNextItemOnResume=_shouldSpeakNextItemOnResume;
@property(retain, nonatomic) AXLanguageTag *lastUtteranceLanguageTag; // @synthesize lastUtteranceLanguageTag=_lastUtteranceLanguageTag;
@property(retain, nonatomic) AVSpeechUtterance *lastUtterance; // @synthesize lastUtterance=_lastUtterance;
@property(nonatomic) struct _NSRange lastUtteranceSubstringRange; // @synthesize lastUtteranceSubstringRange=_lastUtteranceSubstringRange;
@property(retain, nonatomic) NSString *lastUtteranceLanguageCode; // @synthesize lastUtteranceLanguageCode=_lastUtteranceLanguageCode;
@property(retain, nonatomic) NSMutableArray *speechSequenceItems; // @synthesize speechSequenceItems=_speechSequenceItems;
@property(retain, nonatomic) AVSpeechSynthesizer *speechSynthesizer; // @synthesize speechSynthesizer=_speechSynthesizer;
@property(nonatomic) unsigned long long numberOfTokensToSkip; // @synthesize numberOfTokensToSkip=_numberOfTokensToSkip;
@property(retain, nonatomic) NSArray *speakingContentTokenRanges; // @synthesize speakingContentTokenRanges=_speakingContentTokenRanges;
@property(retain, nonatomic) AXLanguageTaggedContent *speakingContent; // @synthesize speakingContent=_speakingContent;
@property(retain, nonatomic) NSString *voiceIdentifier; // @synthesize voiceIdentifier=_voiceIdentifier;
@property(nonatomic) _Bool spellOutContent; // @synthesize spellOutContent=_spellOutContent;
@property(retain, nonatomic) AXLanguageTaggedContent *selectedContent; // @synthesize selectedContent=_selectedContent;
@property(nonatomic) long long speakingContext; // @synthesize speakingContext=_speakingContext;
@property(nonatomic) struct _NSRange lastSpokenSubstringRange; // @synthesize lastSpokenSubstringRange=_lastSpokenSubstringRange;
@property(nonatomic) __weak id <AXOratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleMediaServicesWereReset:(id)arg1;
- (void)_handleMediaServicesWereLost:(id)arg1;
- (void)_handleAudioInterruption:(id)arg1;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 utterance:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)_updateAudioSessionCategory;
- (_Bool)_successWithCode:(long long)arg1 error:(id *)arg2;
- (void)_setAudioSessionActive:(_Bool)arg1;
- (void)_didEndInterruption;
- (void)_didBeginInterruption;
- (_Bool)_canSpeakTaggedContent:(id)arg1;
- (void)_clearAllContentState;
- (void)_tokenizeContentIfNeeded;
- (_Bool)_skipByUnit:(_Bool)arg1 boundary:(unsigned long long)arg2;
- (void)_speakNextTokenFromCurrentTokenIndex:(long long)arg1 forward:(_Bool)arg2 boundary:(unsigned long long)arg3;
- (long long)_currentTokenIndex:(_Bool)arg1;
- (void)_respeakUtteranceIfNeeded;
- (id)_speechSequenceItemsStartingAtContentLocation:(unsigned long long)arg1;
- (_Bool)_changeSpeakingSpeed:(_Bool)arg1;
- (void)_speakNextItemInSequence;
- (id)_getLangCodeForItem:(id)arg1;
- (void)_updateSequenceForSpellOutBehavior;
- (void)_startSpeakingSequence;
- (void)clearSelectedContent;
- (_Bool)canResumeWithContent:(id)arg1;
- (_Bool)contentIsSpeakable;
- (void)speakStatusWithLanguage:(id)arg1 rate:(id)arg2;
- (_Bool)rewindWithBoundary:(unsigned long long)arg1;
- (_Bool)fastForwardWithBoundary:(unsigned long long)arg1;
- (_Bool)speakSlower;
- (_Bool)speakFaster;
- (_Bool)isSpeaking;
- (_Bool)isPaused;
- (float)speechRate;
- (_Bool)resumeSpeakingAfterDelay:(double)arg1 error:(id *)arg2;
- (_Bool)resumeSpeaking:(id *)arg1;
- (_Bool)stopSpeaking:(id *)arg1;
- (_Bool)pauseSpeaking:(id *)arg1;
- (_Bool)startSpeakingWithPreferredLanguage:(id)arg1 delayBeforeStart:(double)arg2 error:(id *)arg3;
- (_Bool)startSpeakingWithPreferredLanguage:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSString *content;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

