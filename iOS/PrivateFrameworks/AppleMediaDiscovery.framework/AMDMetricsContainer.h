//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMetricsEvent, NSMutableDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface AMDMetricsContainer : NSObject
{
    BOOL _verbosity;
    AMSMetricsEvent *_metricEvent;
    NSMutableDictionary *_logData;
    NSNumber *_loggingProbability;
}

- (void).cxx_destruct;
@property(retain) NSNumber *loggingProbability; // @synthesize loggingProbability=_loggingProbability;
@property BOOL verbosity; // @synthesize verbosity=_verbosity;
@property(retain) NSMutableDictionary *logData; // @synthesize logData=_logData;
@property(retain, nonatomic) AMSMetricsEvent *metricEvent; // @synthesize metricEvent=_metricEvent;
- (id)initWithLevel:(BOOL)arg1 andAction:(id)arg2 andVersion:(id)arg3 andBuild:(id)arg4 andStorefrontId:(id)arg5 withLoggingProbability:(id)arg6;

@end

