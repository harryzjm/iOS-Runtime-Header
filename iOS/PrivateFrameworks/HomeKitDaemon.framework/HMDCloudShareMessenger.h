//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol HMDCloudShareMessengerDelegate, OS_dispatch_queue;

@interface HMDCloudShareMessenger : HMFObject <HMFLogging, HMFMessageReceiver>
{
    NSUUID *_messageTargetUUID;
    id <HMDCloudShareMessengerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_messageDispatcher;
    CDUnknownBlockType _shareInvitationRetryHandler;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType shareInvitationRetryHandler; // @synthesize shareInvitationRetryHandler=_shareInvitationRetryHandler;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDCloudShareMessengerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (id)logIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (void)handleRequestInviteMessage:(id)arg1;
- (void)handleInviteMessage:(id)arg1;
- (void)_sendShareInvitationData:(id)arg1 toUser:(id)arg2 minimumHomeKitVersion:(id)arg3 requiredSupportedFeatures:(id)arg4 retryCount:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)requestShareInvitationDataFromUser:(id)arg1;
- (void)sendShareInvitationData:(id)arg1 toUser:(id)arg2 minimumHomeKitVersion:(id)arg3 requiredSupportedFeatures:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)unconfigure;
- (void)configureWithHome:(id)arg1;
- (id)initWithMessageTargetUUID:(id)arg1 workQueue:(id)arg2 messageDispatcher:(id)arg3;
- (id)initWithMessageTargetUUID:(id)arg1 workQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
