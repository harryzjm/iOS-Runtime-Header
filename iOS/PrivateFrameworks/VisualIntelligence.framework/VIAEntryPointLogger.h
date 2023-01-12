//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, SFFeedbackListener, VIAnalyticsTestingDelegate;

@interface VIAEntryPointLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <SFFeedbackListener> _feedbackListener;
    NSMutableDictionary *_appToQueryIDMap;
    NSMutableDictionary *_appToWaitingEventMap;
    id <VIAnalyticsTestingDelegate> _testingDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <VIAnalyticsTestingDelegate> testingDelegate; // @synthesize testingDelegate=_testingDelegate;
- (_Bool)_preconditionCheckEvent:(id)arg1;
- (void)_logFeedback:(id)arg1 queryID:(unsigned long long)arg2;
- (void)_logEndEvent:(id)arg1;
- (void)_logStartEvent:(id)arg1;
- (void)_cacheEvent:(id)arg1;
- (id)_cachedEventsForEvent:(id)arg1;
- (void)logDependentEvent:(id)arg1;
- (void)logEvent:(id)arg1;
- (id)initWithQueue:(id)arg1 feedbackListener:(id)arg2;

@end
