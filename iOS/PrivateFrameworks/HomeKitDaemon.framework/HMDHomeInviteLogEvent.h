//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHomeInviteLogEvent : HMMLogEvent
{
    _Bool _received;
    _Bool _filtered;
    _Bool _suppressedNotification;
    _Bool _accepted;
    _Bool _declined;
    _Bool _ignored;
    _Bool _expired;
    _Bool _isFMFDevice;
}

+ (id)updateWithInvitationState:(long long)arg1 isFMFDevice:(_Bool)arg2;
+ (id)updateWithState:(long long)arg1 isFMFDevice:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isFMFDevice; // @synthesize isFMFDevice=_isFMFDevice;
@property(readonly, nonatomic) _Bool expired; // @synthesize expired=_expired;
@property(readonly, nonatomic) _Bool ignored; // @synthesize ignored=_ignored;
@property(readonly, nonatomic) _Bool declined; // @synthesize declined=_declined;
@property(readonly, nonatomic) _Bool accepted; // @synthesize accepted=_accepted;
@property(readonly, nonatomic) _Bool suppressedNotification; // @synthesize suppressedNotification=_suppressedNotification;
@property(readonly, nonatomic) _Bool filtered; // @synthesize filtered=_filtered;
@property(readonly, nonatomic) _Bool received; // @synthesize received=_received;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithHomeInviteLogEventState:(long long)arg1 isFMFDevice:(_Bool)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

