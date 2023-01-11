//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AFAnalyticsService, OS_dispatch_group, OS_dispatch_queue;

@interface AFAnalytics : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    id <AFAnalyticsService> _service;
}

+ (id)sharedAnalytics;
- (void).cxx_destruct;
- (id)_service:(_Bool)arg1;
- (void)_stageEvents:(id)arg1;
- (void)_stageEvent:(id)arg1;
- (void)barrier:(CDUnknownBlockType)arg1;
- (void)logEvents:(id)arg1;
- (void)logEvent:(id)arg1;
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextProvider:(CDUnknownBlockType)arg3 contextProvidingQueue:(id)arg4;
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 contextNoCopy:(_Bool)arg4;
- (void)setService:(id)arg1;
- (void)endEventsGrouping;
- (void)beginEventsGrouping;
- (void)logEventWithType:(long long)arg1 contextProvider:(CDUnknownBlockType)arg2 contextProvidingQueue:(id)arg3;
- (void)logEventWithType:(long long)arg1 contextProvider:(CDUnknownBlockType)arg2;
- (void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(_Bool)arg3;
- (void)logEventWithType:(long long)arg1 context:(id)arg2;
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3;
- (id)_init;
- (id)init;
- (void)logClientFeedbackPresented:(id)arg1;

@end

