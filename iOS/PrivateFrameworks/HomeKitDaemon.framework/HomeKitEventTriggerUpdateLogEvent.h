//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class HMDAnalyticsUpdateEventTriggerData;

__attribute__((visibility("hidden")))
@interface HomeKitEventTriggerUpdateLogEvent : HMMLogEvent
{
    HMDAnalyticsUpdateEventTriggerData *_analyticsData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMDAnalyticsUpdateEventTriggerData *analyticsData; // @synthesize analyticsData=_analyticsData;
- (id)init;

@end

