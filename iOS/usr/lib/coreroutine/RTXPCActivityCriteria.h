//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RTXPCActivityCriteria : NSObject
{
    _Bool _requireNetworkConnectivity;
    _Bool _requireInexpensiveNetworkConnectivity;
    _Bool _allowBattery;
    _Bool _powerNap;
    double _interval;
    double _delay;
    double _gracePeriod;
    unsigned long long _priority;
    unsigned long long _networkTransferDirection;
}

+ (const char *)convertNetworkTransferDirection:(unsigned long long)arg1;
+ (const char *)convertPriority:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool powerNap; // @synthesize powerNap=_powerNap;
@property(readonly, nonatomic) _Bool allowBattery; // @synthesize allowBattery=_allowBattery;
@property(readonly, nonatomic) unsigned long long networkTransferDirection; // @synthesize networkTransferDirection=_networkTransferDirection;
@property(readonly, nonatomic) _Bool requireInexpensiveNetworkConnectivity; // @synthesize requireInexpensiveNetworkConnectivity=_requireInexpensiveNetworkConnectivity;
@property(readonly, nonatomic) _Bool requireNetworkConnectivity; // @synthesize requireNetworkConnectivity=_requireNetworkConnectivity;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) double gracePeriod; // @synthesize gracePeriod=_gracePeriod;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;
- (id)description;
- (id)initWithInterval:(double)arg1 gracePeriod:(double)arg2 priority:(unsigned long long)arg3 requireNetworkConnectivity:(_Bool)arg4 requireInexpensiveNetworkConnectivity:(_Bool)arg5 networkTransferDirection:(unsigned long long)arg6 allowBattery:(_Bool)arg7 powerNap:(_Bool)arg8;
- (id)init;

@end

