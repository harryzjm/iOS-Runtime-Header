//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCoordinationPrimaryElectionLogEvent : HMMLogEvent
{
    _Bool _isPrimary;
    _Bool _didChangePrimary;
}

+ (_Bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property(readonly) _Bool didChangePrimary; // @synthesize didChangePrimary=_didChangePrimary;
@property(readonly) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithIsPrimary:(_Bool)arg1 didChangePrimary:(_Bool)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

