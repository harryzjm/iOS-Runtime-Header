//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessorySettingsLegacyMessageReceiver, HMDAccessorySettingsLocalMessageHandler, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol HMDMessageRouter, HMMLogEventSubmitting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessorySettingsMessenger : HMFObject
{
    NSUUID *_messageTargetUUID;
    HMFMessageDispatcher *_messageDispatcher;
    id <HMDMessageRouter> _messageRouter;
    HMDAccessorySettingsLocalMessageHandler *_messageHandler;
    HMDAccessorySettingsLegacyMessageReceiver *_legacyMessageReceiver;
    id <HMMLogEventSubmitting> _logEventSubmitter;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) HMDAccessorySettingsLegacyMessageReceiver *legacyMessageReceiver; // @synthesize legacyMessageReceiver=_legacyMessageReceiver;
@property(readonly) HMDAccessorySettingsLocalMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(readonly) id <HMDMessageRouter> messageRouter; // @synthesize messageRouter=_messageRouter;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (id)legacyMessageForMessage:(id)arg1;
- (void)routeAccessorySettingsUpdateRequestMessage:(id)arg1;
- (void)routeAccessorySettingsFetchRequestMessage:(id)arg1;
- (id)logIdentifier;
- (void)sendUpdateAccessorySettingRequestWithAccessoryUUID:(id)arg1 keyPath:(id)arg2 settingValue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateAndPostFetchSettingsEvent:(id)arg1 responsePayload:(id)arg2 responseError:(id)arg3;
- (id)fetchLogEventFromMessage:(id)arg1;
- (void)sendFetchAccessorySettingsRequestWithAccessoryUUID:(id)arg1 keyPaths:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)registerForMessagesWithHome:(id)arg1;
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 messageRouter:(id)arg3 messageHandler:(id)arg4 logEventSubmitter:(id)arg5 legacyMessageReceiver:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end

