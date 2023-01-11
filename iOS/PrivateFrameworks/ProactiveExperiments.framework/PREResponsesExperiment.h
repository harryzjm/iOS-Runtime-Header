//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PREResponsesGeneratedEvent, RKMessageResponseManager, _PASLRUCache;
@protocol PREResponsesMetricsProtocol, PREResponsesProtocol, PREResponsesTrialProtocol;

@interface PREResponsesExperiment : NSObject
{
    NSObject<PREResponsesTrialProtocol> *_trial;
    NSObject<PREResponsesMetricsProtocol> *_metrics;
    NSObject<PREResponsesProtocol> *_xpcClient;
    RKMessageResponseManager *_rkClient;
    _PASLRUCache *_cache;
    PREResponsesGeneratedEvent *_cachedResponsesGeneratedEvent;
    _Bool _registerDisplayed;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(nonatomic) _Bool registerDisplayed; // @synthesize registerDisplayed=_registerDisplayed;
- (_Bool)isStringEmpty:(id)arg1;
- (int)preInputMethodFrom:(id)arg1;
- (id)inputMethodStringFrom:(int)arg1;
- (_Bool)shouldUseDefaultRKTreatment;
- (id)handlesFromRecipients:(id)arg1;
- (id)stringArrayFromPreResponseItems:(id)arg1;
- (id)stringArrayFromConversationTurns:(id)arg1;
- (id)waitForPreResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 recipientHandles:(id)arg7 options:(unsigned long long)arg8;
- (void)registerImpressionWithPreResponseItems:(id)arg1 language:(id)arg2 isCached:(_Bool)arg3 responseTimePerf:(unsigned long long)arg4 promptMessage:(id)arg5 generationStatus:(int)arg6;
- (id)responsesCache;
- (void)primeResponsesExperimentsIfNeeded;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 time:(id)arg3 metadata:(id)arg4 withLanguage:(id)arg5;
- (void)preResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 recipientHandles:(id)arg7 options:(unsigned long long)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 recipientHandles:(id)arg7 options:(unsigned long long)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 recipients:(id)arg7 options:(unsigned long long)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 recipientHandles:(id)arg7 options:(unsigned long long)arg8;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 recipients:(id)arg7 options:(unsigned long long)arg8;
- (id)activeExperimentName;
- (id)cacheKeyForMessage:(id)arg1 maxResponses:(unsigned long long)arg2 time:(id)arg3 language:(id)arg4;
- (id)clippedMessageIfNecessary:(id)arg1;
- (id)init;
- (id)initWithTrialClient:(id)arg1 metricsClient:(id)arg2 xpcClient:(id)arg3 rkClient:(id)arg4;

@end
