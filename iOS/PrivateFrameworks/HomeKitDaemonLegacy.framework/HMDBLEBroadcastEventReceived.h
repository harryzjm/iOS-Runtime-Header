//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class HMDAccessory;

__attribute__((visibility("hidden")))
@interface HMDBLEBroadcastEventReceived : HMMLogEvent
{
    _Bool _hasExpectedGSN;
    HMDAccessory *_accessory;
}

+ (id)broadcastEventFromAccessory:(id)arg1 withExpectedGSN:(_Bool)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasExpectedGSN; // @synthesize hasExpectedGSN=_hasExpectedGSN;
@property(readonly, nonatomic) HMDAccessory *accessory; // @synthesize accessory=_accessory;
- (id)initBroadcastEventFromAccessory:(id)arg1 withExpectedGSN:(_Bool)arg2;

@end

