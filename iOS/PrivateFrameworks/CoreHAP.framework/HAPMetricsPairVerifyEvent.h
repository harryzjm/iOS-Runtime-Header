//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSError, NSNumber, NSString;

@interface HAPMetricsPairVerifyEvent : HMMLogEvent
{
    NSString *_accessoryIdentifier;
    NSNumber *_linkType;
    NSNumber *_duration;
    NSString *_reason;
    NSError *_pvError;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *pvError; // @synthesize pvError=_pvError;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSNumber *linkType; // @synthesize linkType=_linkType;
@property(readonly, nonatomic) NSString *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
- (id)initWithAccessory:(id)arg1 forLinkType:(id)arg2 duration:(id)arg3 reason:(id)arg4 pvError:(id)arg5;

@end
