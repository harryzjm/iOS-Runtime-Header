//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFUnfairLock, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface HMITaskServiceServer
{
    int _nextTaskID;
    NSOperationQueue *_operationQueue;
    HMFUnfairLock *_lock;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property int nextTaskID; // @synthesize nextTaskID=_nextTaskID;
@property(readonly) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (id)buildSubmitFeedbackTaskFromOptions:(id)arg1 error:(id *)arg2;
- (id)buildPersonsModelsSummaryTaskFromOptions:(id)arg1 error:(id *)arg2;
- (id)buildTuriTrialUpdateTaskFromOptions:(id)arg1 error:(id *)arg2;
- (id)buildHomePersonClusteringTaskFromOptions:(id)arg1 error:(id *)arg2;
- (id)buildFaceMisclassificationTaskFromOptions:(id)arg1 error:(id *)arg2;
- (id)buildRemovePersonsModelTaskFromOptions:(id)arg1 error:(id *)arg2;
- (id)buildUpdatePersonsModelTaskFromOptions:(id)arg1 error:(id *)arg2;
- (_Bool)cancelTask:(int)arg1;
- (int)submitTask:(id)arg1 completionHander:(CDUnknownBlockType)arg2;
- (int)submitTaskWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (int)getNextTaskID;
- (id)init;

@end
