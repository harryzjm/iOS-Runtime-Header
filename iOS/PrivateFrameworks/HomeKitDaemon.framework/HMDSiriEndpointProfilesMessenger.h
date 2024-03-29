//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDSiriEndpointProfileMessageHandler, HMFMessageDispatcher, NSString, NSUUID;
@protocol HMDMessageRouter, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSiriEndpointProfilesMessenger : NSObject
{
    NSUUID *_messageTargetUUID;
    HMFMessageDispatcher *_messageDispatcher;
    id <HMDMessageRouter> _messageRouter;
    HMDSiriEndpointProfileMessageHandler *_messageHandler;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) HMDSiriEndpointProfileMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(readonly) id <HMDMessageRouter> messageRouter; // @synthesize messageRouter=_messageRouter;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (id)logIdentifier;
- (id)intermediateApplyOnboardingSelectionsRequestMessageForMessage:(id)arg1 error:(id *)arg2;
- (void)routeSiriEndpointDeleteSiriHistoryMessage:(id)arg1;
- (void)routeSiriEndpointApplyOnboardingSelectionsRequestMessage:(id)arg1;
- (void)registerForMessagesWithHome:(id)arg1;
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 messageRouter:(id)arg3 messageHandler:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end

