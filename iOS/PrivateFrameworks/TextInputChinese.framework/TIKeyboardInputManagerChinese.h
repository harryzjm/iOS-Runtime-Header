//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/TIKeyboardInputManager_zh_ja.h>

@class CIMCandidateData, NSOperationQueue, NSString, TIMathSymbolPunctuationController, TIWordSearch;

@interface TIKeyboardInputManagerChinese : TIKeyboardInputManager_zh_ja
{
    TIWordSearch *_wordSearch;
    _Bool _isInCompletionMode;
    _Bool _shouldLearnAcceptedCandidate;
    _Bool _isAlphabeticPlane;
    _Bool _duringDeleteFromInputWithContext;
    NSString *_language;
    NSString *_modeName;
    CIMCandidateData *_candidateData;
    NSOperationQueue *_operationQueue;
    NSString *_pairedPunctuationOpenQuote;
    NSString *_pairedPunctuationSelectedText;
    NSString *_currentKeyHint;
    TIMathSymbolPunctuationController *_mathSymbolPunctuationController;
}

+ (id)pairedPunctuationDictionary;
+ (Class)wordSearchClass;
+ (_Bool)shouldEnableHalfWidthPunctuationForDocumentContext:(id)arg1 composedText:(id)arg2;
+ (id)unicodeCandidateFromString:(id)arg1;
+ (id)GB18030CandidateFromString:(id)arg1;
+ (id)punctuationPredictionsForString:(id)arg1;
@property _Bool duringDeleteFromInputWithContext; // @synthesize duringDeleteFromInputWithContext=_duringDeleteFromInputWithContext;
@property(readonly) TIMathSymbolPunctuationController *mathSymbolPunctuationController; // @synthesize mathSymbolPunctuationController=_mathSymbolPunctuationController;
@property(copy, nonatomic) NSString *currentKeyHint; // @synthesize currentKeyHint=_currentKeyHint;
@property(copy, nonatomic) NSString *pairedPunctuationSelectedText; // @synthesize pairedPunctuationSelectedText=_pairedPunctuationSelectedText;
@property(copy, nonatomic) NSString *pairedPunctuationOpenQuote; // @synthesize pairedPunctuationOpenQuote=_pairedPunctuationOpenQuote;
@property(nonatomic) _Bool isAlphabeticPlane; // @synthesize isAlphabeticPlane=_isAlphabeticPlane;
@property(nonatomic) _Bool shouldLearnAcceptedCandidate; // @synthesize shouldLearnAcceptedCandidate=_shouldLearnAcceptedCandidate;
@property(nonatomic) _Bool isInCompletionMode; // @synthesize isInCompletionMode=_isInCompletionMode;
@property(copy, nonatomic) NSString *modeName; // @synthesize modeName=_modeName;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
- (id)wordSearch;
- (void).cxx_destruct;
- (id)searchStringForMarkedText;
- (_Bool)handlePairedPunctuationInput:(id)arg1 context:(id)arg2;
- (_Bool)supportsPairedPunctutationInput;
- (void)acceptFirstCandidateWithContext:(id)arg1;
- (id)firstCandidate;
- (void)setLearnsCorrection:(_Bool)arg1;
- (id)outputByConvertingDecimalPointForInput:(id)arg1;
- (_Bool)shouldSearchCompletionForSubstrings;
@property(readonly) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly) CIMCandidateData *candidateData; // @synthesize candidateData=_candidateData;
- (void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2;
- (id)sortMethodsGroupsForCandidates:(id)arg1;
- (id)titleForSortingMethod:(id)arg1;
- (_Bool)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1;
- (id)sortingMethods;
- (unsigned long long)initialSelectedIndex;
- (id)completionCandidateResultSetForKeyHint:(id)arg1;
- (void)wordSearchEngineDidFindPredictionCandidates:(id)arg1;
- (_Bool)updateCompletionCandidatesIfAppropriate;
- (id)generateCompletions;
@property(readonly, nonatomic) unsigned long long predictionOptions;
- (void *)mecabraCandidateRefFromPointerValue:(id)arg1;
- (_Bool)hasIdeographicCandidates;
- (_Bool)showingFacemarkCandidates;
- (_Bool)isFacemarkInput:(id)arg1;
- (id)candidateResultSetUsedForCompletionQuery;
- (void)willExitCompletionMode;
- (_Bool)shouldEnableHalfWidthPunctuationForCurrentInputContext;
- (id)wordCharacters;
- (id)replacementForDoubleSpace;
- (void)deleteFromInputWithContext:(id)arg1;
- (id)deleteFromInput:(unsigned long long *)arg1;
- (void)setInput:(id)arg1;
- (void)clearInput;
- (void)inputLocationChanged;
- (id)didAcceptCandidate:(id)arg1;
- (void)loadFavoniusTypingModel;
- (void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(_Bool)arg3;
- (void)syncToLayoutState:(id)arg1;
- (struct TIInputManager *)initImplementationWithMode:(id)arg1 andLanguage:(id)arg2;
- (void)resetCommitHistory;
- (id)initWithConfig:(id)arg1 keyboardState:(id)arg2;

@end
