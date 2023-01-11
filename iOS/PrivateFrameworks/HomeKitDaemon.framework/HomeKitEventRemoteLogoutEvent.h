//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>
#import <HomeKitDaemon/HomeKitEventRemoteLoginMetricProtocol-Protocol.h>

@class AWDHomeKitRemoteLogout, NSDate, NSString;

@interface HomeKitEventRemoteLogoutEvent <HMDAWDLogEvent, HomeKitEventRemoteLoginMetricProtocol>
{
    AWDHomeKitRemoteLogout *_metric;
    NSDate *_startTime;
}

+ (id)uuid;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) AWDHomeKitRemoteLogout *metric; // @synthesize metric=_metric;
- (void)setError:(id)arg1;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;
- (id)initWithSessionID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
