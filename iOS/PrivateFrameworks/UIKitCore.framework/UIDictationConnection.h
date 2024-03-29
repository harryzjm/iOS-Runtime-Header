//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFDictationConnection, AFDictationOptions, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol;

__attribute__((visibility("hidden")))
@interface UIDictationConnection : NSObject
{
    _Bool _receivedMultilingualResultsCommand;
    _Bool _offlineOnly;
    _Bool _ignoreSpeechRecognitionResults;
    _Bool _lowConfidenceAboutLanguageDetection;
    unsigned int _charBeforeInsertionPointOnDictationStart;
    unsigned int _charAfterInsertionPointOnDictationStart;
    id <UIDictationConnectionDelegate> _delegate;
    id <UIDictationConnectionTokenFilterProtocol> _tokenFilter;
    AFDictationOptions *_dictationOptions;
    AFDictationConnection *_connection;
    NSObject<OS_dispatch_queue> *_analyticsQueue;
    NSString *_lastUsedPrimaryLanguage;
    NSString *_lastUsedDetectedLanguage;
    NSMutableArray *_lastUsedTopLanguages;
    NSMutableDictionary *_lastReceivedPartials;
}

+ (_Bool)hasSpeechRecognitionPauseAckPhrases:(id)arg1;
+ (id)interpretationFromSpeechTokens:(id)arg1 startIndex:(unsigned long long)arg2 filterBlock:(CDUnknownBlockType)arg3;
+ (void)_updateFromGlobalOptions:(id)arg1;
+ (void)afDelegate:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(_Bool)arg4 final:(_Bool)arg5;
+ (_Bool)dictationRestricted;
+ (void)cacheSupportedDictationLanguages;
+ (_Bool)dictationIsSupportedForLanguageCode:(id)arg1 error:(id *)arg2;
+ (_Bool)isDictationAvailable;
+ (id)analytics;
+ (id)_log;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *lastReceivedPartials; // @synthesize lastReceivedPartials=_lastReceivedPartials;
@property(nonatomic) unsigned int charAfterInsertionPointOnDictationStart; // @synthesize charAfterInsertionPointOnDictationStart=_charAfterInsertionPointOnDictationStart;
@property(nonatomic) unsigned int charBeforeInsertionPointOnDictationStart; // @synthesize charBeforeInsertionPointOnDictationStart=_charBeforeInsertionPointOnDictationStart;
@property(nonatomic) _Bool lowConfidenceAboutLanguageDetection; // @synthesize lowConfidenceAboutLanguageDetection=_lowConfidenceAboutLanguageDetection;
@property(retain, nonatomic) NSMutableArray *lastUsedTopLanguages; // @synthesize lastUsedTopLanguages=_lastUsedTopLanguages;
@property(copy, nonatomic) NSString *lastUsedDetectedLanguage; // @synthesize lastUsedDetectedLanguage=_lastUsedDetectedLanguage;
@property(copy, nonatomic) NSString *lastUsedPrimaryLanguage; // @synthesize lastUsedPrimaryLanguage=_lastUsedPrimaryLanguage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue; // @synthesize analyticsQueue=_analyticsQueue;
@property(nonatomic) _Bool ignoreSpeechRecognitionResults; // @synthesize ignoreSpeechRecognitionResults=_ignoreSpeechRecognitionResults;
@property(nonatomic) _Bool offlineOnly; // @synthesize offlineOnly=_offlineOnly;
@property(retain, nonatomic) AFDictationConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) AFDictationOptions *dictationOptions; // @synthesize dictationOptions=_dictationOptions;
@property(nonatomic) _Bool receivedMultilingualResultsCommand; // @synthesize receivedMultilingualResultsCommand=_receivedMultilingualResultsCommand;
@property(nonatomic) __weak id <UIDictationConnectionTokenFilterProtocol> tokenFilter; // @synthesize tokenFilter=_tokenFilter;
@property(nonatomic) __weak id <UIDictationConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dictationConnection:(id)arg1 didRecognizeVoiceCommandCandidatePackage:(id)arg2 nluResult:(id)arg3;
- (void)dictationConnection:(id)arg1 didRecognizeFinalResultCandidatePackage:(id)arg2;
- (void)dictationConnectionDidPauseRecognition:(id)arg1;
- (void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(_Bool)arg4 final:(_Bool)arg5;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
- (void)dictationConnection:(id)arg1 didRecognizeMultilingualSpeech:(id)arg2;
- (void)dictationConnection:(id)arg1 didRecognizePartialPackage:(id)arg2 nluResult:(id)arg3 languageModel:(id)arg4;
- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
- (id)dictationSerializedResultWithPhrases:(id)arg1 languageModel:(id)arg2;
- (void)dictationConnection:(id)arg1 didRecognizePartialResult:(id)arg2;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 didBeginLocalRecognitionWithModelInfo:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidBeginWithOptions:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)dictationConnection:(id)arg1 languageDetectorFailedWithError:(id)arg2;
- (void)dictationConnection:(id)arg1 didDetectLanguage:(id)arg2 confidenceScores:(id)arg3 isConfident:(_Bool)arg4;
- (_Bool)isSecureInput;
- (void)preheat;
- (void)synthesizeDidRecognizePhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3;
- (void)synthesizeDidRecognizeTokens:(id)arg1 languageModel:(id)arg2;
- (void)logDidAcceptReplacement:(id)arg1 replacementLanguageCode:(id)arg2 originalText:(id)arg3 correctionIdentifier:(id)arg4 interactionIdentifier:(id)arg5;
- (void)logDidAcceptDictationResult:(id)arg1 reason:(id)arg2 result:(id)arg3 correctionIdentifier:(id)arg4;
- (void)logDidSelectAlternative:(id)arg1 correctionIdentifier:(id)arg2 interactionIdentifier:(id)arg3;
- (void)logDidShowAlternatives:(id)arg1 correctionIdentifier:(id)arg2 interactionIdentifier:(id)arg3;
- (void)cancelSpeech;
- (void)stopSpeech:(id)arg1 activationType:(unsigned long long)arg2 result:(id)arg3 suppressAlert:(_Bool)arg4;
- (void)_startWithOptions:(id)arg1;
- (id)_initializeWithOptions:(id)arg1;
- (void)startForFileAtURL:(id)arg1 forLanguage:(id)arg2;
- (void)start;
- (id)_createConnectionOptions;
- (id)_speechOptions:(id)arg1;
- (long long)speechEventTypeForDictationActivationType:(unsigned long long)arg1;
- (id)_dictationOptions:(id)arg1;
- (id)languageDetectionUserContext;
- (void)requestOfflineDictationSupportForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)suppressLowStorageNotificationForLanguage:(id)arg1 suppress:(_Bool)arg2;
- (void)resumeSpeechRecognitionWithPrefixText:(id)arg1 postfixText:(id)arg2 selectedText:(id)arg3;
- (void)pauseSpeechRecognition;
- (void)endSession;
- (float)averagePower;
- (void)sendSpeechCorrection:(id)arg1 interactionIdentifier:(id)arg2;
- (void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2;
- (_Bool)dictationIsAvailableForLanguage:(id)arg1;
- (void)restartDictation;
- (void)cancelAvailabilityMonitoring;
- (void)beginAvailabilityMonitoring;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

