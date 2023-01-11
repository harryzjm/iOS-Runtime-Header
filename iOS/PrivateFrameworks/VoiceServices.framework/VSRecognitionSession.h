//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, VSKeepAlive, VSRecognitionAction, VSSpeechSynthesizer;
@protocol VSRecognitionSessionDelegate;

@interface VSRecognitionSession : NSObject
{
    NSString *_modelIdentifier;
    VSKeepAlive *_keepAlive;
    id <VSRecognitionSessionDelegate> _delegate;
    VSRecognitionAction *_currentAction;
    NSArray *_topLevelKeywords;
    id _handlingThread;
    VSSpeechSynthesizer *_synthesizer;
    NSString *_languageID;
    NSString *_debugDumpPath;
    NSString *_audioInputPath;
    double _levelInterval;
    unsigned long long _keywordPhase;
    struct {
        unsigned int delegateWillBegin:1;
        unsigned int delegateBegin:1;
        unsigned int delegateOpenURL:1;
        unsigned int delegateFinishedSpeaking:1;
        unsigned int delegateComplete:1;
        unsigned int debugDumpEnabled:1;
        unsigned int preferredEngine:2;
        unsigned int performHandlerActions:1;
        unsigned int allowSensitiveActions:1;
        unsigned int bluetoothAllowed:1;
        unsigned int resetNextAction:1;
        unsigned int isSpeaking:1;
        unsigned int actionBegan:1;
        unsigned int actionBeginning:1;
        unsigned int actionBeginDeferred:1;
        unsigned int invalid:1;
        unsigned int observeKeywordChange:1;
    } _sessionFlags;
}

- (void)setPerformRecognitionHandlerActions:(_Bool)arg1;
- (_Bool)setPreferredEngine:(int)arg1;
- (_Bool)setNextRecognitionRequiresReset:(_Bool)arg1;
- (_Bool)setNextRecognitionAudioInputPath:(id)arg1;
- (id)debugDumpPath;
- (_Bool)setDebugDumpEnabled:(_Bool)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeaking:(_Bool)arg2 withError:(id)arg3;
- (void)_notifyDelegateFinishedSpeakingWithError:(id)arg1;
- (id)_beginSpeakingString:(id)arg1 attributedString:(id)arg2;
- (id)_beginSpeakingAttributedString:(id)arg1;
- (id)beginSpeakingString:(id)arg1;
- (id)beginSpeakingFeedbackString;
- (void)_keywordIndexChanged;
- (id)_keywordsForModelIdentifier:(id)arg1;
- (id)_topLevelKeywords;
- (id)_createPhaseSortedKeywordsFromArray:(id)arg1;
- (struct __CFDictionary *)_createKeywordIndex;
- (long long)keywordCount;
- (id)keywordAtIndex:(long long)arg1;
- (void)setKeywordPhase:(unsigned long long)arg1;
- (float)inputLevelDB;
- (float)inputLevel;
- (void)setInputLevelUpdateInterval:(double)arg1;
- (id)displayStatusString;
- (id)displayResultString;
- (id)spokenFeedbackAttributedString;
- (id)spokenFeedbackString;
- (void)recognitionResultHandlingThread:(id)arg1 didHandleResults:(id)arg2 nextAction:(id)arg3;
- (id)_recognitionResultHandlingThread;
- (id)_currentRecognizeAction;
- (void)_setAction:(id)arg1;
- (id)_notifyDelegateOpenURL:(id)arg1;
- (void)_notifyDelegateActionStarted;
- (_Bool)_actionStarted:(id)arg1;
- (void)_actionCompleted:(id)arg1 nextAction:(id)arg2 error:(id)arg3;
- (id)cancel;
- (id)cancelMaintainingKeepAlive:(_Bool)arg1;
- (_Bool)setBluetoothInputAllowed:(_Bool)arg1;
- (_Bool)sensitiveActionsEnabled;
- (void)setSensitiveActionsEnabled:(_Bool)arg1;
- (_Bool)nextActionWillRecognize;
- (_Bool)nextActionWillTerminateSession;
- (_Bool)isBusy;
- (_Bool)hasDeferredAction;
- (_Bool)isValid;
- (_Bool)isFinished;
- (_Bool)isActivelyRecognizing;
- (_Bool)isRecognizing;
- (id)reset;
- (id)beginNextAction;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithModelIdentifier:(id)arg1;
- (id)init;
- (void)_init;

@end

