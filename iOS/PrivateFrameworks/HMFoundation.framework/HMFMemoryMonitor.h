//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol HMFMemoryMonitorDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HMFMemoryMonitor
{
    _Bool _monitoring;
    long long _memoryState;
    id <HMFMemoryMonitorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSObject<OS_dispatch_source> *_memoryPressure;
}

@property(nonatomic, getter=isMonitoring) _Bool monitoring; // @synthesize monitoring=_monitoring;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *memoryPressure; // @synthesize memoryPressure=_memoryPressure;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property __weak id <HMFMemoryMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleMemoryStateChange:(long long)arg1;
- (void)setMemoryState:(long long)arg1;
@property(readonly, nonatomic) long long memoryState; // @synthesize memoryState=_memoryState;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end
