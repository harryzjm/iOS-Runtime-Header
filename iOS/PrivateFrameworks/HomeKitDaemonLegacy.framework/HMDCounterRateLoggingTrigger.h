//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HMDEWSLogging;

__attribute__((visibility("hidden")))
@interface HMDCounterRateLoggingTrigger : NSObject
{
    _Bool _uploadImmediately;
    unsigned long long _windowSize;
    unsigned long long _windowThreshold;
    NSString *_counterName;
    CDUnknownBlockType _timeSourceBlock;
    id <HMDEWSLogging> _ewsLogger;
    unsigned long long _intervalSize;
    unsigned long long *_intervalCounts;
    unsigned long long _windowCount;
    unsigned long long _maxWindowCount;
    unsigned long long _lastUpdatedInterval;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastUpdatedInterval; // @synthesize lastUpdatedInterval=_lastUpdatedInterval;
@property(nonatomic) unsigned long long maxWindowCount; // @synthesize maxWindowCount=_maxWindowCount;
@property(nonatomic) unsigned long long windowCount; // @synthesize windowCount=_windowCount;
@property(nonatomic) unsigned long long *intervalCounts; // @synthesize intervalCounts=_intervalCounts;
@property(readonly, nonatomic) unsigned long long intervalSize; // @synthesize intervalSize=_intervalSize;
@property(readonly, nonatomic) id <HMDEWSLogging> ewsLogger; // @synthesize ewsLogger=_ewsLogger;
@property(readonly, nonatomic) CDUnknownBlockType timeSourceBlock; // @synthesize timeSourceBlock=_timeSourceBlock;
@property(readonly, nonatomic) _Bool uploadImmediately; // @synthesize uploadImmediately=_uploadImmediately;
@property(readonly, nonatomic) NSString *counterName; // @synthesize counterName=_counterName;
@property(readonly, nonatomic) unsigned long long windowThreshold; // @synthesize windowThreshold=_windowThreshold;
@property(readonly, nonatomic) unsigned long long windowSize; // @synthesize windowSize=_windowSize;
- (void)logRateTrigger:(id)arg1 triggerValue:(unsigned long long)arg2;
- (void)updatedCounterForEventName:(id)arg1 fromOldValue:(unsigned long long)arg2 toNewValue:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithThreshold:(unsigned long long)arg1 windowSize:(unsigned long long)arg2 counterName:(id)arg3 uploadImmediately:(_Bool)arg4 ewsLogger:(id)arg5 timeSourceBlock:(CDUnknownBlockType)arg6;
- (id)initWithThreshold:(unsigned long long)arg1 windowSize:(unsigned long long)arg2 counterName:(id)arg3 uploadImmediately:(_Bool)arg4 ewsLogger:(id)arg5;
- (id)initWithThreshold:(unsigned long long)arg1 windowSize:(unsigned long long)arg2 counterName:(id)arg3 ewsLogger:(id)arg4;

@end

