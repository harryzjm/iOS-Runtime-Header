//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MLModel.h"

@class MLOutputBackingsVerifier, NSMutableArray, NSObject;
@protocol MLModeling, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MLDelegateModel : MLModel
{
    NSObject<OS_dispatch_queue> *_asyncPredictionQueue;
    id <MLModeling> _internalEngine;
    MLOutputBackingsVerifier *_outputBackingsVerifier;
    struct os_unfair_lock_s _asyncPredictionSchedulingLock;
    unsigned long long _currentAsyncPredictionsInFlight;
    struct atomic<bool> _prepared;
    unsigned long long _maxAsyncPredictionsInFlight;
    NSMutableArray *_pendingPredictionQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *pendingPredictionQueue; // @synthesize pendingPredictionQueue=_pendingPredictionQueue;
@property(readonly, nonatomic) unsigned long long maxAsyncPredictionsInFlight; // @synthesize maxAsyncPredictionsInFlight=_maxAsyncPredictionsInFlight;
- (void)cancelPredictionRequest:(id)arg1;
- (void)_finishPredictionAndDispatchPendingPredictions;
- (void)_schedulePredictionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)executionSchedule;
- (id)parameterValueForKey:(id)arg1 error:(id *)arg2;
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_submitPredictionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)submitPredictionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newRequestWithInputFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)pipeline;
- (id)regressor;
- (id)classifier;
- (id)updatable;
- (id)writable;
- (id)neuralNetwork;
- (id)program;
- (id)internalEngine;
- (unsigned long long)predictionTypeForKTrace;
- (void)enableInstrumentsTracing;
- (unsigned long long)signpostID;
@property(readonly, nonatomic) int engine;
- (id)initWithEngine:(id)arg1;

@end

