//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/TILanguageSelectionControllerDelegate-Protocol.h>
#import <TextInputCore/TIRevisionHistoryDelegate-Protocol.h>

@class NSArray, NSCharacterSet, NSMutableArray, NSMutableString, NSString, TIAutoshiftRegularExpressionLoader, TIEmojiCandidateGenerator, TIInputContextHistory, TIKeyboardCandidate, TIKeyboardFeatureSpecialization, TIKeyboardInputManagerConfig, TIKeyboardInputManagerState, TIKeyboardLayout, TIKeyboardLayoutState, TIKeyboardState, TILRUDictionary, TILanguageSelectionController, TIRevisionHistory, TITextCheckerExemptions;

@interface TIKeyboardInputManager <TIRevisionHistoryDelegate, TILanguageSelectionControllerDelegate>
{
    struct TIInputManager *m_impl;
    NSMutableString *m_composedText;
    unsigned long long m_initialSelectedIndex;
    TIKeyboardLayout *_keyLayout;
    TIKeyboardLayoutState *_layoutState;
    TIKeyboardInputManagerState *_currentState;
    TIKeyboardFeatureSpecialization *_keyboardFeatureSpecialization;
    NSCharacterSet *_allowPredictionCharacterSet;
    struct shared_ptr<KB::TypologyLogger> m_typology_recorder;
    shared_ptr_e9f752ce m_lightweight_language_model;
    TILanguageSelectionController *_languageSelectionController;
    TIEmojiCandidateGenerator *_emojiCandidateGenerator;
    TIInputContextHistory *_synchronizedInputContextHistory;
    NSMutableArray *_conversationTurns;
    _Bool _wordLearningEnabled;
    _Bool _isEditingWordPrefix;
    TIKeyboardState *_keyboardState;
    TIKeyboardInputManagerConfig *_config;
    CDUnknownBlockType _candidateGenerationCompletionHandler;
    TIRevisionHistory *_revisionHistory;
    TILRUDictionary *_autocorrectionHistory;
    TILRUDictionary *_recentAutocorrections;
    TILRUDictionary *_recentPredictiveInputSelections;
    TILRUDictionary *_rejectedAutocorrections;
    TILRUDictionary *_autocorrectionForCurrentStem;
    TILRUDictionary *_rejectedDisplayedAutocorrectionsForCurrentStem;
    TILRUDictionary *_autocorrectionListsSuggestedForCurrentInput;
    TILRUDictionary *_autocorrectionListsForWordsInDocument;
    TIAutoshiftRegularExpressionLoader *_autoshiftRegexLoader;
    TITextCheckerExemptions *_textCheckerExemptions;
    long long _userInterfaceIdiom;
    unsigned long long _linguisticResourceStatus;
    long long _deleteKeyCount;
    TIKeyboardCandidate *_hitTestCorrectedInputMatchingCandidate;
    struct _NSRange _candidateRange;
}

+ (id)offlineLearningHandleForInputMode:(id)arg1;
+ (int)shiftContextForShiftState:(int)arg1 autocapitalizationType:(unsigned long long)arg2;
+ (void)clearRecentsFileForIdentifier:(id)arg1;
+ (id)recentsFilePathForIdentifier:(id)arg1;
+ (void)removeAllDynamicDictionaries;
+ (void)removeDynamicDictionaryForInputMode:(id)arg1;
+ (id)dynamicDictionaryFilePathForInputMode:(id)arg1;
+ (id)userDictionaryWordKeyPairsFilePath;
+ (id)keyboardUserDirectory;
+ (void)resetResponseKit;
@property(retain, nonatomic) TIKeyboardCandidate *hitTestCorrectedInputMatchingCandidate; // @synthesize hitTestCorrectedInputMatchingCandidate=_hitTestCorrectedInputMatchingCandidate;
@property(nonatomic) long long deleteKeyCount; // @synthesize deleteKeyCount=_deleteKeyCount;
@property(nonatomic) unsigned long long linguisticResourceStatus; // @synthesize linguisticResourceStatus=_linguisticResourceStatus;
@property(nonatomic) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(readonly, nonatomic) TITextCheckerExemptions *textCheckerExemptions; // @synthesize textCheckerExemptions=_textCheckerExemptions;
@property(retain, nonatomic) TIAutoshiftRegularExpressionLoader *autoshiftRegexLoader; // @synthesize autoshiftRegexLoader=_autoshiftRegexLoader;
@property(nonatomic) _Bool isEditingWordPrefix; // @synthesize isEditingWordPrefix=_isEditingWordPrefix;
@property(readonly, nonatomic) TILRUDictionary *autocorrectionListsForWordsInDocument; // @synthesize autocorrectionListsForWordsInDocument=_autocorrectionListsForWordsInDocument;
@property(readonly, nonatomic) TILRUDictionary *autocorrectionListsSuggestedForCurrentInput; // @synthesize autocorrectionListsSuggestedForCurrentInput=_autocorrectionListsSuggestedForCurrentInput;
@property(retain, nonatomic) TILRUDictionary *rejectedDisplayedAutocorrectionsForCurrentStem; // @synthesize rejectedDisplayedAutocorrectionsForCurrentStem=_rejectedDisplayedAutocorrectionsForCurrentStem;
@property(retain, nonatomic) TILRUDictionary *autocorrectionForCurrentStem; // @synthesize autocorrectionForCurrentStem=_autocorrectionForCurrentStem;
@property(readonly, nonatomic) TILRUDictionary *rejectedAutocorrections; // @synthesize rejectedAutocorrections=_rejectedAutocorrections;
@property(readonly, nonatomic) TILRUDictionary *recentPredictiveInputSelections; // @synthesize recentPredictiveInputSelections=_recentPredictiveInputSelections;
@property(readonly, nonatomic) TILRUDictionary *recentAutocorrections; // @synthesize recentAutocorrections=_recentAutocorrections;
@property(readonly, nonatomic) TILRUDictionary *autocorrectionHistory; // @synthesize autocorrectionHistory=_autocorrectionHistory;
@property(readonly, nonatomic) TIRevisionHistory *revisionHistory; // @synthesize revisionHistory=_revisionHistory;
@property(copy, nonatomic) CDUnknownBlockType candidateGenerationCompletionHandler; // @synthesize candidateGenerationCompletionHandler=_candidateGenerationCompletionHandler;
@property(nonatomic) struct _NSRange candidateRange; // @synthesize candidateRange=_candidateRange;
@property(nonatomic, getter=isWordLearningEnabled) _Bool wordLearningEnabled; // @synthesize wordLearningEnabled=_wordLearningEnabled;
@property(readonly, nonatomic) TIKeyboardInputManagerConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) TIEmojiCandidateGenerator *emojiCandidateGenerator;
- (void)didUpdateInputModeProbabilities:(id)arg1;
- (void)didUpdateInputModes:(id)arg1;
- (id)primaryInputMode;
@property(readonly, nonatomic) TILanguageSelectionController *languageSelectionController;
- (id)resourceInputModes;
- (void)installTypologyTraceLogger;
- (_Bool)acceptsRange:(struct _NSRange)arg1 inString:(id)arg2;
- (_Bool)acceptsCharacter:(unsigned int)arg1;
- (id)candidateResultSet;
- (_Bool)doesSelectedTextGenerateEmojiCandidates;
- (id)typedStringForEmptyAutocorrection;
- (_Bool)shouldGeneratePredictionsForCurrentContext;
@property(readonly, nonatomic) NSCharacterSet *allowPredictionCharacterSet;
- (id)extendedAutocorrection:(id)arg1 spanningInputsForCandidates:(id)arg2 emojis:(id)arg3;
- (id)completionCandidates:(unsigned long long)arg1;
- (int)shiftContext;
- (id)autocorrectionListForEmptyInputWithDesiredCandidateCount:(unsigned long long)arg1;
- (id)indexesOfDuplicatesInCandidates:(id)arg1;
- (id)predictionCandidates:(unsigned long long)arg1;
- (_Bool)shouldInsertSpaceBeforePredictions;
- (_Bool)shouldAutocapitalizePredictionAfterSpace;
- (_Bool)shouldGenerateSuggestionsForSelectedText;
- (void)reconcileCandidates:(struct CandidateCollection *)arg1 forTypedString:(struct String *)arg2 withPhraseCandidate:(struct Candidate *)arg3 replacing:(const struct String *)arg4;
- (id)autocorrectionListForSelectedText;
- (id)cannedResponseCandidatesForString:(id)arg1;
- (id)rewriteMoneyAttributes:(id)arg1;
- (id)_responseKitResponseCandidatesForString:(id)arg1;
- (void)updateResponseModelForKeyboardState:(id)arg1;
- (_Bool)shouldAllowContextTokenID:(struct TITokenID)arg1;
- (_Bool)shouldDropInputStem;
- (_Bool)suggestionBlacklistMatchesStrings:(id)arg1;
- (_Bool)usesRetrocorrection;
- (id)shortcutConversionForInput:(id)arg1 andExistingString:(id)arg2 existingStringStartsInMiddleOfWord:(_Bool)arg3;
- (id)shortcutConversionForString:(id)arg1 stringStartsInMiddleOfWord:(_Bool)arg2;
- (struct _NSRange)shortcutSearchRangeForString:(id)arg1;
- (_Bool)shouldSkipShortcutConversionForDocumentState:(id)arg1;
- (void)enumerateWordSuffixesOfString:(id)arg1 inRange:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)supportsShortcutConversion;
- (id)autocorrectionCandidateForInput:(id)arg1 withCandidate:(const struct Candidate *)arg2 insertingSpace:(_Bool)arg3 sharedPrefixLength:(unsigned long long)arg4;
- (id)autocorrectionCandidateForInput:(id)arg1 withCandidate:(const struct Candidate *)arg2;
- (_Bool)isEditingExistingWord;
- (id)phraseCandidateCompletedByWord:(const struct String *)arg1 allowNoSuggest:(_Bool)arg2;
- (unsigned long long)prefixLengthOfInput:(id)arg1 sharedWithCandidates:(const struct CandidateCollection *)arg2;
- (unsigned long long)prefixLengthOfInput:(id)arg1 sharedWithCandidate:(const struct Candidate *)arg2;
- (void)checkAutocorrectionDictionaries;
- (void)setAutoshiftFromInputContext;
- (_Bool)canStartSentenceAfterString:(id)arg1;
- (_Bool)_canStartSentenceAfterString:(id)arg1 maxRecursionDepth:(unsigned long long)arg2;
- (_Bool)spaceAndNextInputWouldStartSentence;
- (_Bool)nextInputWouldStartSentenceAfterInput:(id)arg1;
- (id)sentenceTrailingCharacters;
- (id)sentenceDelimitingCharacters;
- (id)sentencePrefixingCharacters;
- (id)wordCharacters;
- (const struct USet *)precomposedCharacterSet;
- (id)nonstopPunctuationCharacters;
- (void)updateForRevisitedString:(id)arg1;
- (id)autocorrectionRecordForWord:(id)arg1;
- (void)recordRejectedAutocorrectionForAcceptedText:(id)arg1;
- (void)recordAcceptedAutocorrection:(id)arg1 fromPredictiveInputBar:(_Bool)arg2;
- (id)revisionListFromAutocorrectionList:(id)arg1 afterAcceptingCandidate:(id)arg2;
- (void)recordSuggestedAutocorrectionList:(id)arg1;
- (void)candidateRejected:(id)arg1;
- (_Bool)shouldExpectSentenceBoundaryAfterContext:(const struct TITokenID *)arg1 contextLength:(unsigned long long)arg2;
- (struct TITokenID)tokenIDForWordSeparator:(unsigned short)arg1;
- (struct TITokenID)addWord:(id)arg1 context:(const struct TITokenID *)arg2 contextLength:(unsigned long long)arg3 surfaceFormPtr:(id *)arg4;
- (struct TITokenID)findTokenIDForWord:(id)arg1 context:(const struct TITokenID *)arg2 contextLength:(unsigned long long)arg3 tokenLookupMode:(unsigned int)arg4;
- (struct TITokenID)findTokenIDForWord:(id)arg1 context:(const struct TITokenID *)arg2 contextLength:(unsigned long long)arg3 tokenLookupMode:(unsigned int)arg4 surfaceFormPtr:(id *)arg5 hasCaseInsensitiveStaticVariant:(_Bool *)arg6;
- (void)learnRecentMessageUserIsRespondingTo;
- (void)synchronizeConversationHistoryWithInputContextHistory:(id)arg1;
- (void)resetConversationHistory;
- (void)addItemToConversationHistoryWithText:(id)arg1 timestamp:(id)arg2 senderID:(id)arg3;
- (void)registerNegativeEvidence:(id)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID *)arg3 contextLength:(unsigned long long)arg4 intendedTokenID:(struct TITokenID *)arg5 hint:(int)arg6;
- (void)decrementLanguageModelCount:(id)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID *)arg3 contextLength:(unsigned long long)arg4;
- (void)incrementLanguageModelCount:(id)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID *)arg3 contextLength:(unsigned long long)arg4 saveToDifferentialPrivacy:(_Bool)arg5;
- (_Bool)shouldLearnWord:(id)arg1;
- (_Bool)shouldSuppressLanguageSelectionEvidence;
- (_Bool)shouldSuppressLearning;
- (_Bool)shouldSuppressTokenIDLookups;
- (_Bool)shouldAllowCorrectionOfAcceptedCandidate:(id)arg1;
- (void)displayedCandidateRejected;
- (void)setOriginalInput:(id)arg1;
- (id)currentWordStem;
- (id)inputStem;
- (id)inputString;
- (unsigned int)inputCount;
- (unsigned int)inputIndex;
- (void)setInputIndex:(unsigned int)arg1;
- (void)updateInputContext;
- (id)internalInputContext;
- (id)inputContext;
- (void)acceptInput;
- (void)clearIgnoredSuggestionForCurrentInput;
- (void)clearInput;
- (id)deleteFromInput:(unsigned long long *)arg1;
- (void)setInput:(id)arg1;
- (void)didDropInputStem;
- (void)willDropInputStem;
- (void)dropInput;
- (void)dropInputPrefix:(unsigned int)arg1;
- (void)trimInput;
- (_Bool)canRetrocorrectInputAtIndex:(unsigned int)arg1;
- (_Bool)canTrimInputAtIndex:(unsigned int)arg1;
- (unsigned long long)internalIndexOfInputStemSuffix:(id)arg1;
- (unsigned long long)countOfWordsIninputStem:(id)arg1;
- (id)trimmedInputStem;
- (unsigned long long)maxPriorWordTokensAfterTrimming;
- (struct LanguageModelContext)sentenceContextForInputStem:(id)arg1;
- (_Bool)canComputeSentenceContextForInputStem:(id)arg1;
- (void)setInputStringFromDocumentState:(id)arg1;
- (struct _NSRange)inputStringRangeFromRevisionHistory;
- (struct _NSRange)acceptableRangeFromRange:(struct _NSRange)arg1 inText:(id)arg2 withSelectionLocation:(unsigned long long)arg3;
- (struct _NSRange)legacyInputRangeForTokenRange:(struct _NSRange)arg1;
- (unsigned int)simulateAutoshiftIfNecessaryForFlags:(unsigned int)arg1;
- (_Bool)hasLegacyInputString;
- (_Bool)hasLegacyInputStem;
- (id)addInput:(id)arg1 flags:(unsigned int)arg2 point:(struct CGPoint)arg3 firstDelete:(unsigned long long *)arg4 fromVariantKey:(_Bool)arg5;
- (void)mobileAssetsChanged:(id)arg1;
- (shared_ptr_e9f752ce)loadedLightweightLanguageModel;
- (void)loadFavoniusLanguageModel;
- (_Bool)updateLanguageModelForKeyboardState;
- (id)dynamicResourcePath;
- (id)pathToDynamicDictionary;
@property(readonly, nonatomic) NSArray *languageModelAssets;
- (id)languageModelAssetsForInputMode:(id)arg1;
- (id)dynamicDictionaryPathForInputMode:(id)arg1;
- (id)pathToPhraseDictionary;
- (id)phraseDictionaryPathForInputMode:(id)arg1;
- (id)pathToDeltaStaticDictionary;
- (id)deltaDictionaryPathForInputMode:(id)arg1;
- (id)pathToStaticDictionary;
- (id)staticDictionaryPathForInputMode:(id)arg1;
- (id)dictionaryPathForContentType:(id)arg1 inputMode:(id)arg2;
- (void)loadDictionaries;
- (CDStruct_69b8fb94)lexiconInformation;
- (id)dictionaryInputMode;
- (struct TIInputManager *)initImplementation;
- (id)externalStringForDictionaryString:(id)arg1;
- (id)dictionaryStringForExternalString:(id)arg1;
- (_Bool)dictionaryUsesExternalEncoding;
- (unsigned int)externalIndexToInternal:(unsigned int)arg1;
- (unsigned int)internalIndexToExternal:(unsigned int)arg1;
- (id)internalStringToExternal:(id)arg1;
- (id)externalStringToInternal:(id)arg1;
- (void)updateComposedText;
- (_Bool)deletesComposedTextByComposedCharacterSequence;
- (_Bool)acceptInputString:(id)arg1;
- (_Bool)stringEndsWord:(id)arg1;
- (id)remainingInput;
- (id)didAcceptCandidate:(id)arg1;
- (void)clearInputContext;
- (_Bool)removeSuffixOfInputContext:(id)arg1;
- (void)appendToInputContext:(id)arg1;
- (void)inputLocationChanged;
- (id)deletedSuffixOfInputContext:(id)arg1 whenDeletingFromInputString:(id)arg2 withInputIndex:(unsigned long long)arg3 deletionCount:(unsigned long long)arg4;
- (id)suffixOfDesiredString:(id)arg1 toAppendToInputString:(id)arg2 withInputIndex:(unsigned long long)arg3 afterDeletionCount:(unsigned long long *)arg4;
- (void)lastAcceptedCandidateCorrected;
- (void)textAccepted:(id)arg1 fromPredictiveInputBar:(_Bool)arg2;
- (void)adjustPhraseBoundaryInForwardDirection:(_Bool)arg1 granularity:(int)arg2;
- (void)adjustPhraseBoundaryInForwardDirection:(_Bool)arg1;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (long long)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
@property(retain, nonatomic) TIKeyboardLayout *keyLayout;
- (id)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2;
- (id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)generateAutocorrectionsWithKeyboardState:(id)arg1;
- (id)generateAutofillFormWithKeyboardState:(id)arg1;
- (void)trackProactiveMetrics:(id)arg1 keyboardState:(id)arg2;
- (id)generateProactiveAutocompletionsWithDocumentState:(id)arg1;
- (void)deleteFromInputWithContext:(id)arg1;
- (void)addInput:(id)arg1 withContext:(id)arg2;
- (id)handleKeyboardInput:(id)arg1;
- (id)keyboardConfiguration;
- (void)syncToKeyboardState:(id)arg1;
- (_Bool)documentState:(id)arg1 matchesDocumentState:(id)arg2;
- (void)resume;
- (void)suspend;
- (id)currentInputModeIdentifier;
- (void)acceptCurrentCandidateIfSelectedWithContext:(id)arg1;
- (void)acceptCurrentCandidateWithContext:(id)arg1;
- (id)candidateResultSetFromCandidates:(id)arg1 proactiveTriggers:(id)arg2;
- (id)candidateResultSetFromCandidates:(id)arg1;
- (id)sortMethodsShowExtensionCandidates;
- (id)sortMethodIndexes;
- (id)sortMethodsGroupsForCandidates:(id)arg1;
- (id)sortMethodTitles;
- (_Bool)shouldSkipCandidateSelection;
- (id)markedText;
- (void)setMarkedText;
- (void)setPhraseBoundaryIfNecessary;
- (id)contextBeforeWithDesiredLength:(unsigned long long)arg1;
- (id)inputStringFromDocumentState:(id)arg1;
- (id)inputsToReject;
- (_Bool)shouldAddModifierSymbolsToWordCharacters;
- (id)keyboardBehaviors;
- (id)rawInputString;
- (_Bool)shouldCommitInputString;
- (_Bool)keyboardConfigurationAssertDefaultKeyPlane;
- (id)keyboardConfigurationAccentKeyString;
- (id)keyboardConfigurationLayoutTag;
- (void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(_Bool)arg3;
- (_Bool)updateAdaptationContextToKeyboardState:(id)arg1 from:(id)arg2;
- (void)willChangeToKeyboardState:(id)arg1 afterContextChange:(_Bool)arg2;
- (void)syncInputStringToKeyboardState:(id)arg1 afterContextChange:(_Bool)arg2;
- (void)syncMarkedTextForKeyboardState:(id)arg1 afterContextChange:(_Bool)arg2;
- (void)syncToLayoutState:(id)arg1;
- (void)incrementUsageTrackingKeysForDeleteFromInput;
- (void)incrementUsageTrackingKey:(id)arg1;
- (void)incrementUsageTrackingKeyForAutocorrectionStatistic:(id)arg1 autocorrectionTypes:(unsigned int)arg2;
- (id)usageTrackingKeyForStatistic:(id)arg1;
- (void)closeCandidateGenerationContextWithResults:(id)arg1;
- (void)openCandidateGenerationContextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)shouldUpdateLanguageModel;
- (_Bool)shouldUpdateDictionary;
- (void)updateDictionaryAndLanguageModel;
- (_Bool)isLinguisticResourceUpdateScheduled;
- (void)scheduleLinguisticResourceUpdate;
- (void)refreshInputManagerState;
@property(readonly, nonatomic) TIKeyboardInputManagerState *currentState;
- (id)newInputManagerState;
@property(readonly, nonatomic) TIKeyboardFeatureSpecialization *keyboardFeatureSpecialization;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;
- (id)initWithInputMode:(id)arg1;
- (_Bool)supportsNumberKeySelection;
- (id)indexTitlesForGroupTitles:(id)arg1 sortingMethod:(id)arg2;
- (void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2;
- (_Bool)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1;
- (id)titleForSortingMethod:(id)arg1;
- (id)sortingMethods;
- (id)terminatorsPrecedingAutospace;
- (id)terminatorsDeletingAutospace;
- (id)terminatorsPreventingAutocorrection;
- (_Bool)nextInputWouldStartSentence;
- (id)wordSeparator;
- (id)replacementForDoubleSpace;
- (_Bool)suppressCompletionsForFieldEditor;
- (_Bool)suppliesCompletions;
- (id)searchStringForMarkedText;
- (id)shadowTyping;
- (unsigned long long)initialCandidateBatchCount;
- (unsigned long long)initialSelectedIndex;
- (id)defaultCandidate;
- (_Bool)suppressPlaceholderCandidate;
- (unsigned long long)autoquoteType;
- (_Bool)usesAutoDeleteWord;
- (_Bool)commitsAcceptedCandidate;
- (_Bool)usesCandidateSelection;
- (_Bool)supportsSetPhraseBoundary;
- (unsigned long long)phraseBoundary;
- (void)setPhraseBoundary:(unsigned long long)arg1;
- (id)candidatesForString:(id)arg1;
- (id)candidates;
- (id)autocorrectionListWithCandidateCount:(unsigned long long)arg1;
- (id)autocorrectionList;
- (void)transferErrorCorrectionFlagsToInputCandidate:(struct Candidate *)arg1;
- (id)autocorrection;
- (void)setLearnsCorrection:(_Bool)arg1;
- (void)setInSplitKeyboardMode:(_Bool)arg1;
- (_Bool)inHardwareKeyboardMode;
- (void)setInHardwareKeyboardMode:(_Bool)arg1;
- (void)setKeyboardEventsLagging:(_Bool)arg1;
- (void)setAutocapitalizationType:(unsigned long long)arg1;
- (void)setAutocapitalizationEnabled:(_Bool)arg1;
- (void)setAutoCorrects:(_Bool)arg1;
- (_Bool)ignoresDeadKeys;
- (_Bool)supportsLearning;
- (_Bool)shouldExtendPriorWord;
- (_Bool)doesComposeText;
- (void)dynamicDictionariesRemoved:(id)arg1;
- (void)releaseDynamicLanguageModel;
- (void)clearDynamicDictionary;
- (id)keyEventMap;
- (long long)keyHitTest:(id)arg1;
- (void)setLayoutUsesTwoHands:(_Bool)arg1;
- (void)registerKeyArea:(struct CGRect)arg1 keyCode:(short)arg2 keyString:(const char *)arg3;
- (void)clearKeyAreas;
- (_Bool)canHandleKeyHitTest;
- (id)shortcutConversionForDocumentState:(id)arg1;
- (id)shortcutCompletionsForDocumentState:(id)arg1;
- (unsigned long long)maximumShortcutLengthAllowed;
- (void)addSynthesizedTouchToInput:(id)arg1;
- (_Bool)isHardwareKeyboardAutocorrectionEnabled;
- (id)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withAdditionalPredictions:(id)arg2 withInput:(id)arg3;
- (_Bool)enablesProactiveQuickType;
- (unsigned long long)userFrequencyOfWord:(id)arg1 lexiconID:(unsigned int)arg2;
- (unsigned long long)userFrequencyOfWord:(id)arg1;
- (RefPtr_9bddf3b2)getDictionary;
- (_Bool)dictionaryContainsWord:(id)arg1;
- (id)configurationPropertyList;
- (void)logToTypologyRecorderWithString:(id)arg1;
- (_Bool)isTypologyEnabled;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (void)clearHumanReadableTrace;
- (id)humanReadableTrace;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

