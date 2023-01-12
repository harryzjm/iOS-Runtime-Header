//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSUUID, RTIDocumentState, RTIDocumentTraits, RTIInputSourceState, RTIInputSystemClient, TIKeyboardOutput, UIKeyboardTaskExecutionContext;
@protocol UIKBRTIPartnerDelegate;

__attribute__((visibility("hidden")))
@interface UIKBRTIPartner : NSObject
{
    RTIDocumentTraits *_remoteDocumentTraits;
    struct __CFStringTokenizer *_wkRectTokenizer;
    _Bool _suppressUpdateTextInputTraits;
    UIKeyboardTaskExecutionContext *_waitingRTIOutputOperationResponseContext;
    _Bool _inputSystemClientEnabled;
    _Bool _isNotifyingDelegateOfRemoteOutputOperation;
    _Bool _applicationStateIsActiveForRTI;
    _Bool _viewServiceStateIsActiveForRTI;
    _Bool _isObservingGeometry;
    _Bool _cacheHitTestsAsOpaque;
    _Bool _deactivatedByFullScreenTransientOverlay;
    id <UIKBRTIPartnerDelegate> _partnerDelegate;
    RTIInputSystemClient *_rtiClient;
    RTIDocumentTraits *_rtiDocumentTraits;
    RTIDocumentState *_rtiDocumentState;
    RTIInputSourceState *_rtiInputSourceState;
    TIKeyboardOutput *_pendingOutputOperation;
    NSUUID *_currentSessionIdentifier;
    NSMutableDictionary *_supplementalLexicons;
    NSMutableDictionary *_textSuggestions;
    NSMutableArray *_queuedSupplementalLexiconOperations;
}

+ (void)registerTextOperationCustomInfo;
- (void).cxx_destruct;
@property(nonatomic) _Bool deactivatedByFullScreenTransientOverlay; // @synthesize deactivatedByFullScreenTransientOverlay=_deactivatedByFullScreenTransientOverlay;
@property(retain, nonatomic) NSMutableArray *queuedSupplementalLexiconOperations; // @synthesize queuedSupplementalLexiconOperations=_queuedSupplementalLexiconOperations;
@property(retain, nonatomic) NSMutableDictionary *textSuggestions; // @synthesize textSuggestions=_textSuggestions;
@property(retain, nonatomic) NSMutableDictionary *supplementalLexicons; // @synthesize supplementalLexicons=_supplementalLexicons;
@property(nonatomic) _Bool cacheHitTestsAsOpaque; // @synthesize cacheHitTestsAsOpaque=_cacheHitTestsAsOpaque;
@property(nonatomic) _Bool isObservingGeometry; // @synthesize isObservingGeometry=_isObservingGeometry;
@property(copy, nonatomic) NSUUID *currentSessionIdentifier; // @synthesize currentSessionIdentifier=_currentSessionIdentifier;
@property(retain, nonatomic) TIKeyboardOutput *pendingOutputOperation; // @synthesize pendingOutputOperation=_pendingOutputOperation;
@property(nonatomic) _Bool viewServiceStateIsActiveForRTI; // @synthesize viewServiceStateIsActiveForRTI=_viewServiceStateIsActiveForRTI;
@property(nonatomic) _Bool applicationStateIsActiveForRTI; // @synthesize applicationStateIsActiveForRTI=_applicationStateIsActiveForRTI;
@property(readonly, nonatomic) RTIInputSourceState *rtiInputSourceState; // @synthesize rtiInputSourceState=_rtiInputSourceState;
@property(retain, nonatomic) RTIDocumentState *rtiDocumentState; // @synthesize rtiDocumentState=_rtiDocumentState;
@property(retain, nonatomic) RTIDocumentTraits *rtiDocumentTraits; // @synthesize rtiDocumentTraits=_rtiDocumentTraits;
@property(retain, nonatomic) RTIInputSystemClient *rtiClient; // @synthesize rtiClient=_rtiClient;
@property(readonly, nonatomic) _Bool isNotifyingDelegateOfRemoteOutputOperation; // @synthesize isNotifyingDelegateOfRemoteOutputOperation=_isNotifyingDelegateOfRemoteOutputOperation;
@property(nonatomic) _Bool inputSystemClientEnabled; // @synthesize inputSystemClientEnabled=_inputSystemClientEnabled;
@property(nonatomic) __weak id <UIKBRTIPartnerDelegate> partnerDelegate; // @synthesize partnerDelegate=_partnerDelegate;
- (id)insertionPointColor;
- (void)_geometryChanged:(const CDStruct_f46536fb *)arg1 forAncestor:(id)arg2;
- (void)_updateGeometryObserverIfNecessary;
- (struct CGRect)convertRect:(struct CGRect)arg1 from:(id)arg2;
- (void)_queryUIKitDocumentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queryWKDocumentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_addMergedTextRectsToDocumentState:(id)arg1 forWKContext:(id)arg2 textInputView:(id)arg3 granularity:(long long)arg4;
- (void)_addAutocorrectStylingToDocumentState:(id)arg1;
- (void)_addFirstSelectionRectToDocumentState:(id)arg1;
- (struct CGRect)_selectionClipRect;
- (long long)_uiTextGranularityForRTITextGranularity:(long long)arg1;
- (void)_queryDocumentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performDocumentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)defaultDocumentRequestDidChange:(id)arg1;
- (unsigned int)_performKeyboardOutputOperations:(id)arg1;
- (void)_queued_performTextOperations:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)performTextOperations:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)performTextOperations:(id)arg1;
- (void)connectionInterrupted:(id)arg1;
- (void)connectionInvalidated:(id)arg1;
- (void)finishCompletionHandlersIfNeeded;
- (id)exchangeWaitingRTIOutputOperationResponseContext:(id)arg1;
- (_Bool)compareWaitingRTIOutputOperationResponseContext:(id)arg1 andExchange:(id)arg2;
- (void)inputSession:(id)arg1 didRemoveRTISupplementalLexicon:(id)arg2;
- (void)inputSession:(id)arg1 didAddRTISupplementalLexicon:(id)arg2;
- (void)inputSession:(id)arg1 textSuggestionsChanged:(id)arg2;
- (void)inputSession:(id)arg1 performInputOperation:(id)arg2 withResponse:(CDUnknownBlockType)arg3;
- (void)inputSession:(id)arg1 performInputOperation:(id)arg2;
- (void)inputSession:(id)arg1 documentStateDidChange:(id)arg2;
- (void)inputSession:(id)arg1 documentTraitsDidChange:(id)arg2;
- (void)applyRemoteDocumentStateIfNecessary:(id)arg1 force:(_Bool)arg2;
- (void)applyAssistantItem:(id)arg1;
- (void)applyRemoteDocumentTraitsIfNecessary:(id)arg1 force:(_Bool)arg2;
- (void)_addTextCheckingAnnotatedStringToDocumentState:(id)arg1;
- (void)_addCharacterRectsToDocumentState:(id)arg1 textRange:(id)arg2 offset:(long long)arg3;
- (void)_updateRTIStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)inputDelegateView;
- (id)inputDelegate;
- (_Bool)_updateRTITraitsIfNecessary;
- (void)updateStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)restartCurrentSession;
- (void)endAllowingRemoteTextInput:(id)arg1;
- (void)beginAllowingRemoteTextInput:(id)arg1;
- (void)ensureRTIConnection;
- (void)_createRTIClientIfNecessary;
- (void)_createRTIClient;
- (void)_didCreateRTIClient:(id)arg1;
- (id)_newRTIConnection;
- (id)_newInputSystemUIClient;
- (id)_defaultRTIMachNames;
- (void)_updateRTIAllowedAndNotify:(_Bool)arg1 withReason:(id)arg2;
- (void)_didRemoveSupplementalLexiconWithIdentifier:(unsigned long long)arg1;
- (void)_didAddSupplementalLexicon:(id)arg1;
- (void)didRemoveSupplementalLexicon:(id)arg1;
- (void)didAddSupplementalLexicon:(id)arg1;
- (void)_performQueuedSupplementalLexiconOperations;
- (void)_queueSupplementalLexiconOperation:(unsigned long long)arg1 lexicon:(id)arg2;
- (_Bool)remoteTextInputClientHasActiveSession;
- (void)removeTextSuggestionsForSessionWithID:(id)arg1;
- (void)addTextSuggestions:(id)arg1;
- (void)updateTextSuggestionsIfNecessary:(id)arg1;
- (void)textSuggestionsChanged:(id)arg1;
- (id)textOperation_insertionPointExitedTextWithSupplementalItems;
- (id)textOperation_insertionPointEnteredText:(id)arg1 withSupplementalCandidate:(id)arg2;
- (id)textOperation_cancelChooseSupplementalItemToInsert;
- (id)textOperation_chooseSupplementalItem:(id)arg1 toReplaceText:(id)arg2;
- (id)textOperation_insertSupplementalCandidate:(id)arg1 textToCommit:(id)arg2;
- (void)forwardEventToRemoteSource_canSuggestSupplementalItemsForCurrentSelection:(_Bool)arg1;
- (void)forwardEventCallbackToRemoteSource_didChooseSupplementalItem:(id)arg1 toReplaceText:(id)arg2;
- (void)forwardKeyboardCameraEvent_startCameraInput:(id)arg1;
- (void)forwardSelectorToUIHost:(SEL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)forwardUserInteractionEventToUIHost:(SEL)arg1;
- (void)forwardDictationEventToUIHost:(SEL)arg1 withOptionalObject:(id)arg2;
- (_Bool)synchronousForwardKeyInputMethodCommandEventToUIHost:(id)arg1 canHandleAppKeyCommand:(_Bool)arg2;
- (_Bool)synchronousForwardKeyCommandsToUIHost:(id)arg1;
- (_Bool)synchronousForwardKeyCommandsBeforePublicToUIHost:(id)arg1;
- (void)forwardKeyboardEventToUIHost:(id)arg1;
- (void)forwardClearForwardingInputDelegateAndResign:(_Bool)arg1;
- (void)forwardKeyboardInputMode:(id)arg1;
- (void)forwardKeyboardSuppressionAndSuppressAssistantBar:(_Bool)arg1;
- (void)performInputOperation:(id)arg1;
- (void)documentStateChanged:(_Bool)arg1;
- (void)documentStateChanged;
- (void)endInputSessionWithIdentifier:(id)arg1 shouldResign:(_Bool)arg2;
- (void)endInputSessionWithIdentifier:(id)arg1;
- (void)beginInputSessionWithIdentifier:(id)arg1;
- (void)updateAnimationForOptions:(id)arg1;
- (void)documentTraitsChanged;
- (id)delegate;
- (void)_screenModeDidChange:(id)arg1;
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (void)_viewServiceHostDidBecomeActive:(id)arg1;
- (void)_viewServiceHostWillResignActive:(id)arg1;
- (void)_applicationWillSuspend:(id)arg1;
- (void)_macWindowChangedKey:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

