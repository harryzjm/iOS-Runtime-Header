//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDEventRouterEventSizeLogEvent : HMMLogEvent
{
    _Bool _isCached;
    NSString *_topic;
    unsigned long long _size;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isCached; // @synthesize isCached=_isCached;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
- (id)initWithTopic:(id)arg1 eventSize:(unsigned long long)arg2 isCached:(_Bool)arg3;
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

