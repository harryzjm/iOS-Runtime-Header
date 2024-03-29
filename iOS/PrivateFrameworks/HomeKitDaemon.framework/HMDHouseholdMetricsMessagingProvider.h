//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDMessageDispatcher;
@protocol HMFMessageReceiver;

__attribute__((visibility("hidden")))
@interface HMDHouseholdMetricsMessagingProvider : NSObject
{
    id <HMFMessageReceiver> _receiver;
    HMDMessageDispatcher *_messageDispatcher;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, nonatomic) id <HMFMessageReceiver> receiver; // @synthesize receiver=_receiver;
- (void)deregisterForMessage:(id)arg1;
- (void)registerForMessage:(id)arg1 messageHandler:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 toDevice:(id)arg2 withPayload:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (id)initWithReceiver:(id)arg1 messageDispatcher:(id)arg2;
- (id)initWithReceiver:(id)arg1;

@end

