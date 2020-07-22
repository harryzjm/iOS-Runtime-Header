//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKWorkoutRoute, NSObject;
@protocol OS_dispatch_queue;

@interface HDLocationSeriesQueryServer
{
    NSObject<OS_dispatch_queue> *_batchQueue;
    unsigned long long _batchThreshold;
    HKWorkoutRoute *_locationSeries;
}

- (void).cxx_destruct;
- (void)_queue_start;
- (id)requiredEntitlements;
- (void)unitTest_setBatchThreshold:(unsigned long long)arg1;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;

@end

