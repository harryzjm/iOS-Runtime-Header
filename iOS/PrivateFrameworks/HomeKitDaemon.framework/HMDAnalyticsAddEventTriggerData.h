//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAnalyticsEventTriggerData;

__attribute__((visibility("hidden")))
@interface HMDAnalyticsAddEventTriggerData : HMFObject
{
    int _requestOrigin;
    unsigned int _resultErrorCode;
    unsigned long long _timestamp;
    HMDAnalyticsEventTriggerData *_eventTrigger;
}

- (void).cxx_destruct;
@property unsigned int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property int requestOrigin; // @synthesize requestOrigin=_requestOrigin;
@property(retain, nonatomic) HMDAnalyticsEventTriggerData *eventTrigger; // @synthesize eventTrigger=_eventTrigger;
@property unsigned long long timestamp; // @synthesize timestamp=_timestamp;

@end

