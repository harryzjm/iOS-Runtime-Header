//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMITaskService.h"

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface HMITaskServiceServer : HMITaskService
{
    struct os_unfair_lock_s _lock;
    int _nextTaskID;
    NSOperationQueue *_operationQueue;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property int nextTaskID; // @synthesize nextTaskID=_nextTaskID;
@property(readonly) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (id)buildEmptyTaskFromOptions:(id)arg1 error:(id *)arg2;
- (id)buildUpdateTorsoModelTaskFromOptions:(id)arg1 error:(id *)arg2;
- (id)buildSubmitFeedbackTaskFromOptions:(id)arg1 error:(id *)arg2;
- (id)buildPersonsModelsSummaryTaskFromOptions:(id)arg1 error:(id *)arg2;
- (id)buildHomePersonClusteringTaskFromOptions:(id)arg1 error:(id *)arg2;
- (id)buildFaceMisclassificationTaskFromOptions:(id)arg1 error:(id *)arg2;
- (id)buildRemovePersonsModelTaskFromOptions:(id)arg1 error:(id *)arg2;
- (id)buildUpdatePersonsModelTaskFromOptions:(id)arg1 error:(id *)arg2;
- (_Bool)cancelTask:(int)arg1;
- (int)submitTask:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHander:(CDUnknownBlockType)arg3;
- (int)submitTaskWithOptions:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (int)getNextTaskID;
- (id)init;

@end

