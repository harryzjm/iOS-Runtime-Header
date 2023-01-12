//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VKImageAnalyzerInProcessMadInterface
{
    int _queueRequestID;
    NSObject<OS_dispatch_queue> *_housekeepingQueue;
    NSObject<OS_dispatch_queue> *_tempMadProcessingQueue;
    NSMutableOrderedSet *_tempMadRequestQueueWaiting;
    NSMutableOrderedSet *_tempMadRequestQueueProcessing;
    NSMutableSet *_tempMadRequestQueueCancelling;
    NSMutableDictionary *_idsToRequests;
}

+ (id)sharedInterface;
- (void).cxx_destruct;
@property(nonatomic) int queueRequestID; // @synthesize queueRequestID=_queueRequestID;
@property(retain, nonatomic) NSMutableDictionary *idsToRequests; // @synthesize idsToRequests=_idsToRequests;
@property(retain, nonatomic) NSMutableSet *tempMadRequestQueueCancelling; // @synthesize tempMadRequestQueueCancelling=_tempMadRequestQueueCancelling;
@property(retain, nonatomic) NSMutableOrderedSet *tempMadRequestQueueProcessing; // @synthesize tempMadRequestQueueProcessing=_tempMadRequestQueueProcessing;
@property(retain, nonatomic) NSMutableOrderedSet *tempMadRequestQueueWaiting; // @synthesize tempMadRequestQueueWaiting=_tempMadRequestQueueWaiting;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *tempMadProcessingQueue; // @synthesize tempMadProcessingQueue=_tempMadProcessingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *housekeepingQueue; // @synthesize housekeepingQueue=_housekeepingQueue;
- (id)mrcElementsFromImage:(struct CGImage *)arg1 symbologies:(id)arg2;
- (void)didFinishRequest:(id)arg1 withAnalysisResult:(id)arg2 error:(id)arg3;
- (void)_processRequest:(id)arg1;
- (void)request:(id)arg1 didCompleteWithAnalysis:(id)arg2 error:(id)arg3;
- (void)addRequestForProcessing:(id)arg1;
- (id)cancelledError;
- (void)clearCompletedRequest:(id)arg1;
- (unsigned long long)_statusForRequestID:(int)arg1;
- (void)removeAndNotifyOfCancelledRequest:(id)arg1;
- (void)_cancelRequest:(id)arg1;
- (void)cancelAllRequests;
- (void)cancelRequestID:(int)arg1;
- (unsigned long long)statusForRequestID:(int)arg1;
- (void)processNextItemIfNecessary;
- (int)nextRequestID;
- (int)processRequest:(id)arg1;
@property(readonly, nonatomic) NSString *errorDomain;
- (id)init;

@end
