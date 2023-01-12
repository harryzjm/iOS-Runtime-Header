//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMMCoreAnalyticsLogging-Protocol.h>

@class NSNumber, NSString;

@interface HMDHAPMetricsReachabilityAddRemoveEvent <HMMCoreAnalyticsLogging>
{
    unsigned long long _addRemoveEvent;
    NSNumber *_linkType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *linkType; // @synthesize linkType=_linkType;
@property(readonly, nonatomic) unsigned long long addRemoveEvent; // @synthesize addRemoveEvent=_addRemoveEvent;
- (id)initWithAccessory:(id)arg1 hmdAddRemoveEvent:(unsigned long long)arg2 forLinkType:(id)arg3;
- (id)serializedEvent;
- (id)eventName;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end
