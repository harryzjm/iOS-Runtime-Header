//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSTask.h"

@class AMSPromise, AMSURLSession, NSString;
@protocol AMSBagProtocol, AMSMetricsDataSource;

__attribute__((visibility("hidden")))
@interface AMSMetricsFigaroFlushTask : AMSTask
{
    AMSPromise *_currentCancellableDataTaskPromise;
    struct os_unfair_lock_s _currentCancellableDataTaskPromiseLock;
    AMSURLSession *_URLSession;
    long long _maxBatchSize;
    long long _maxRequestCount;
    NSString *_topic;
    id <AMSBagProtocol> _bag;
    id <AMSMetricsDataSource> _dataSource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <AMSMetricsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) long long maxRequestCount; // @synthesize maxRequestCount=_maxRequestCount;
@property(nonatomic) long long maxBatchSize; // @synthesize maxBatchSize=_maxBatchSize;
- (_Bool)_shouldClearEventsDespiteError:(id)arg1 result:(id)arg2;
- (id)_postBatch:(id)arg1;
- (id)_nextBatchWithConfig:(id)arg1 topic:(id)arg2 maxBatchSize:(long long)arg3;
- (id)_mescalSignatureWithBodyData:(id)arg1 error:(id *)arg2;
- (id)_flushNextBatchWithMaxRequestCount:(unsigned long long)arg1 topic:(id)arg2 maxBatchSize:(long long)arg3 requestCount:(unsigned long long)arg4 flushedEventCount:(unsigned long long)arg5 config:(id)arg6;
- (id)performFlush;
- (_Bool)cancel;
@property(readonly, nonatomic) AMSURLSession *URLSession; // @synthesize URLSession=_URLSession;
- (id)initWithDataSource:(id)arg1 bag:(id)arg2;

// Remaining properties
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;

@end

