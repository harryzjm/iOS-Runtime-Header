//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDPrimaryResidentMessageRouterFailureEvent : HMMLogEvent
{
    NSString *_messageName;
    NSNumber *_failureType;
}

- (void).cxx_destruct;
@property(readonly, copy) NSNumber *failureType; // @synthesize failureType=_failureType;
@property(readonly, copy) NSString *messageName; // @synthesize messageName=_messageName;
- (id)attributeDescriptions;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithMessageName:(id)arg1 failureType:(long long)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

