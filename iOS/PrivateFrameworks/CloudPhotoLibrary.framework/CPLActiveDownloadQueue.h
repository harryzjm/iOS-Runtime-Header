//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface CPLActiveDownloadQueue : NSObject
{
    NSMutableArray *_transferTasks;
    NSMutableArray *_transportTasks;
    _Bool _FIFOQueue;
    NSString *_name;
    unsigned long long _maximumBatchSize;
    unsigned long long _maximumConcurrentTransportTasks;
}

@property(readonly, nonatomic) unsigned long long maximumConcurrentTransportTasks; // @synthesize maximumConcurrentTransportTasks=_maximumConcurrentTransportTasks;
@property(readonly, nonatomic) unsigned long long maximumBatchSize; // @synthesize maximumBatchSize=_maximumBatchSize;
@property(readonly, nonatomic, getter=isFIFOQueue) _Bool FIFOQueue; // @synthesize FIFOQueue=_FIFOQueue;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)status;
- (id)dequeueLastTransportTask;
@property(readonly, nonatomic) unsigned long long countOfTransferTasksInTransportTasks;
@property(readonly, nonatomic) unsigned long long countOfTransportTasks;
- (void)removeTransportTask:(id)arg1;
- (void)addTransportTask:(id)arg1;
- (void)removeAllTransferTasks;
@property(readonly, nonatomic) NSArray *allTransferTasks;
- (id)dequeueBatchOfTransferTasksDequeuedSize:(unsigned long long *)arg1;
@property(readonly, nonatomic) unsigned long long countOfTransferTasks;
- (void)removeTransferTask:(id)arg1;
- (void)addTransferTask:(id)arg1;
- (id)initWithName:(id)arg1 FIFOQueue:(_Bool)arg2 maximumBatchSize:(unsigned long long)arg3 maximumConcurrentTransportTasks:(unsigned long long)arg4;

@end

