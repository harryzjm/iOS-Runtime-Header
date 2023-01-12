//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MTLSimDriver/MTLCommandQueue-Protocol.h>

@class MTLCommandQueueSPIStats, NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@protocol MTLCommandQueueSPI <MTLCommandQueue>
@property(getter=isProfilingEnabled) _Bool profilingEnabled;
@property(readonly) _Bool isOpenGLQueue;
@property _Bool executionEnabled;
@property _Bool skipRender;
@property(readonly) _Bool disableCrossQueueHazardTracking;
@property(readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property(readonly) _Bool commitSynchronously;
@property(readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property(readonly) unsigned long long qosLevel;
@property(readonly) unsigned long long maxCommandBufferCount;
@property int backgroundTrackingPID;
- (void)finish;
- (void)setCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setSubmissionQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (_Bool)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (_Bool)setBackgroundGPUPriority:(unsigned long long)arg1;
- (unsigned long long)getBackgroundGPUPriority;
- (_Bool)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (_Bool)setGPUPriority:(unsigned long long)arg1;
- (unsigned long long)getGPUPriority;

@optional
@property(nonatomic, getter=getStatLocations) unsigned long long StatLocations;
@property(nonatomic, getter=getStatOptions) unsigned long long StatOptions;
@property(nonatomic, getter=isStatEnabled) _Bool StatEnabled;
- (void)dispatchAvailableCompletionNotifications;
- (NSDictionary *)counterInfo;
- (void)addPerfSampleHandler:(void (^)(id <MTLCommandBuffer>, NSData *, unsigned long long))arg1;
- (NSArray *)subdivideCounterList:(NSArray *)arg1;
- (NSArray *)getRequestedCounters;
- (int)requestCounters:(NSArray *)arg1 withIndex:(unsigned long long)arg2;
- (int)requestCounters:(NSArray *)arg1;
- (NSArray *)availableCountersAndDict;
- (NSArray *)availableCounters;
- (MTLCommandQueueSPIStats *)getSPIStats;
@end

