//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNRequestPerformer : NSObject
{
    struct os_unfair_lock_s _requestLock;
    NSMutableArray *_requestsInFlight;
    NSMutableArray *_requestsPending;
    NSMutableDictionary *_sequencedRequestObservations;
}

+ (id)_requestPerformingQueuePriorityGroup2;
+ (id)_requestPerformingQueuePriorityGroup1;
- (void).cxx_destruct;
- (void)cancelAllRequests;
- (id)previousSequencedObservationsForRequest:(id)arg1;
- (void)recordSequencedObservationsForRequest:(id)arg1;
- (_Bool)performDependentRequests:(id)arg1 onBehalfOfRequest:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (_Bool)performRequests:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)orderedRequestsForRequests:(id)arg1;
- (id)dependencyAnalyzedRequestsForRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;
- (_Bool)_performOrderedRequests:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)_groupsRequestsWithTheSameOrdinality:(id)arg1 priorityGroup1:(id)arg2 priorityGroup2:(id)arg3;
- (void)_groupOrderedRequests:(id)arg1 ordinality:(id)arg2 ordinalityAndPriorityGroups:(id)arg3;
- (_Bool)_performRequests:(id)arg1 onBehalfOfRequest:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (_Bool)_validateAndPrepareRequests:(id)arg1 error:(id *)arg2;
- (id)init;

@end

