//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BusinessChatService/BCSConfigItemIdentifying-Protocol.h>
#import <BusinessChatService/BCSCoreAnalyticsEventDescribing-Protocol.h>
#import <BusinessChatService/BCSResolutionMetricProtocol-Protocol.h>

@class BCSFlagMeasurement, BCSTimingMeasurement, NSDictionary, NSString;

@interface BCSConfigResolutionMetric <BCSCoreAnalyticsEventDescribing, BCSConfigItemIdentifying, BCSResolutionMetricProtocol>
{
    _Bool errorEncountered;
    BCSFlagMeasurement *cacheHitMeasurement;
    BCSTimingMeasurement *timingMeasurement;
}

+ (id)metricForConfigType:(long long)arg1 postProcessingMetricHandlers:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool errorEncountered; // @synthesize errorEncountered;
@property(retain, nonatomic) BCSTimingMeasurement *timingMeasurement; // @synthesize timingMeasurement;
@property(retain, nonatomic) BCSFlagMeasurement *cacheHitMeasurement; // @synthesize cacheHitMeasurement;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSDictionary *coreAnalyticsPayload;
@property(readonly, nonatomic) NSString *coreAnalyticsEventName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
