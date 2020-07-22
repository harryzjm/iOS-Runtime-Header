//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class HMDAccessory, NSString;

@interface HMDAccessoryRelaySetupEvent <HMDAWDLogEvent>
{
    HMDAccessory *_hmdAccessory;
    unsigned long long _actionType;
}

+ (id)relaySetupEventWithActionType:(unsigned long long)arg1 hmdAccessory:(id)arg2;
+ (id)stringForActionType:(unsigned long long)arg1;
+ (id)uuid;
+ (void)initialize;
@property(readonly, nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) __weak HMDAccessory *hmdAccessory; // @synthesize hmdAccessory=_hmdAccessory;
- (void).cxx_destruct;
- (id)initWithActionType:(unsigned long long)arg1 hmdAccessory:(id)arg2;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

