//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC24RequestDispatcherBridges40AssistantSpeechRecognizerResponseHandler
{
    MISSING_TYPE *myriadMonitor;
    MISSING_TYPE *userId;
    MISSING_TYPE *requestQueue;
    MISSING_TYPE *sessionState;
    MISSING_TYPE *immutableSessionState;
    MISSING_TYPE *resultSelectionGated;
    MISSING_TYPE *isMUXEnabled;
    MISSING_TYPE *isMedocEnabled;
    MISSING_TYPE *resultSelectedMsg;
    MISSING_TYPE *voiceIdScoreCard;
    MISSING_TYPE *speechPartialResultsCache;
    MISSING_TYPE *didStopASR;
    MISSING_TYPE *hasfirstVoiceIdScoreCardArrived;
    MISSING_TYPE *havePostedSpeechPartialDeliveryStartedMessage;
    MISSING_TYPE *homeMembers;
    MISSING_TYPE *isRMVEnabled;
    MISSING_TYPE *isCandidateRequest;
    MISSING_TYPE *isFFRequest;
    MISSING_TYPE *bufferedResultCandidateHandler;
    MISSING_TYPE *isUOS;
    MISSING_TYPE *isIdentityScoreConsumptionEnabled;
    MISSING_TYPE *isIdentityBridgeInstrumentationEnabled;
}

- (void).cxx_destruct;
- (void)localSpeechRecognizerClient:(id)arg1 didCompletionRecognitionWithStatistics:(id)arg2 requestId:(id)arg3 endpointMode:(long long)arg4 error:(id)arg5;
- (void)localSpeechRecognizerClient:(id)arg1 didCompletionRecognitionWithStatistics:(id)arg2 requestId:(id)arg3 error:(id)arg4;
- (void)localSpeechRecognizerClient:(id)arg1 receivedVoiceIdScoreCard:(id)arg2;
- (void)localSpeechRecognizerClient:(id)arg1 didAcceptedEagerResultWithRequestId:(id)arg2 rcId:(unsigned long long)arg3 mitigationSignal:(_Bool)arg4 featuresToLog:(id)arg5;
- (void)localSpeechRecognizerClient:(id)arg1 receivedEagerRecognitionCandidateWithRequestId:(id)arg2 rcId:(unsigned long long)arg3 speechPackage:(id)arg4 duration:(double)arg5;
- (void)localSpeechRecognizerClient:(id)arg1 requestAttentionAssetDownload:(_Bool)arg2;
- (void)localSpeechRecognizerClient:(id)arg1 receivedContinuityEndDetected:(id)arg2;
- (void)localSpeechRecognizerClient:(id)arg1 receivedTRPCandidatePackage:(id)arg2;
- (void)localSpeechRecognizerClient:(id)arg1 receivedTRPDetected:(id)arg2;
- (void)localSpeechRecognizerClient:(id)arg1 receivedFinalResultWithRequestId:(id)arg2 speechPackage:(id)arg3;
- (void)localSpeechRecognizerClient:(id)arg1 receivedPartialResultWithRequestId:(id)arg2 language:(id)arg3 tokens:(id)arg4;

@end

