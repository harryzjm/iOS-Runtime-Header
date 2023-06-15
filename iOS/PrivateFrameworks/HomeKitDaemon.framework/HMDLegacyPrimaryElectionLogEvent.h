//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDLegacyPrimaryElectionLogEvent : HMMLogEvent
{
    NSString *_reason;
    NSString *_criteria;
    unsigned long long _availableResidentCount;
}

- (void).cxx_destruct;
@property unsigned long long availableResidentCount; // @synthesize availableResidentCount=_availableResidentCount;
@property(copy) NSString *criteria; // @synthesize criteria=_criteria;
@property(copy) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, nonatomic) NSString *coreAnalyticsEventName;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

