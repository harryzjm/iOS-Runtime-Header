//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLock, NSMutableDictionary, NSObject, _HKDelayedOperation;
@protocol OS_dispatch_queue;

@interface HDActiveDataAggregator
{
    NSLock *_aggregationLock;
    NSMutableDictionary *_unaggregatedDataByCollector;
    _HKDelayedOperation *_delayedAggregationOperation;
    NSObject<OS_dispatch_queue> *_delayedAggregationQueue;
}

- (void).cxx_destruct;
- (void)recomputeCollectorConfiguration;
- (void)requestAggregationThroughDate:(id)arg1 mode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_requestAggregationThroughDate:(id)arg1 mode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_aggregateForAllDevicesForCollector:(id)arg1 date:(id)arg2 mode:(long long)arg3;
- (double)aggregationInterval;
- (id)aggregateSensorData:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 error:(id *)arg6;
- (Class)sensorDatumClass;
- (_Bool)didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id *)arg4;
- (id)configurationForCollector:(id)arg1;
- (void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3;
- (void)_reconsiderDelayedAggregation;
- (void)_aggregateForCollector:(id)arg1 device:(id)arg2 requestedAggregationDate:(id)arg3 mode:(long long)arg4;
- (id)initWithDataCollectionManager:(id)arg1;

@end

