//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventCountersManager;

@interface HMDLogEventReachabilityEventsAnalyzer
{
    HMDEventCountersManager *_eventCountersManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
- (void)_handleCameraRecordingReachabilityLogEvent:(id)arg1;
- (void)_handleRemoteDeviceReachabilityChangedLogEvent:(id)arg1;
- (void)processLogEvent:(id)arg1;
- (id)initWithSupportedEventTypes:(id)arg1 context:(id)arg2 eventCountersManager:(id)arg3;
- (id)initWithSupportedEventTypes:(id)arg1 context:(id)arg2;

@end
