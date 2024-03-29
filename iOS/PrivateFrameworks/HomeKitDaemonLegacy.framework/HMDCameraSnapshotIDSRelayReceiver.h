//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCameraIDSSessionInviterDeviceVerifier, HMFActivity, IDSSession, NSMutableData, NSObject, NSString, NSUUID;
@protocol HMDCameraSnapshotIDSRelayReceiverDelegate, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotIDSRelayReceiver
{
    HMFActivity *_activity;
    IDSSession *_idsSession;
    id <HMDCameraSnapshotIDSRelayReceiverDelegate> _delegate;
    HMDCameraIDSSessionInviterDeviceVerifier *_sessionInviterDeviceVerifier;
    NSUUID *_machOUUID;
    NSMutableData *_relayData;
    NSMutableData *_expectedByteCountData;
    unsigned long long _expectedByteCount;
    unsigned long long _receivedByteCount;
    NSObject<OS_dispatch_source> *_socketSource;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_source> *socketSource; // @synthesize socketSource=_socketSource;
@property unsigned long long receivedByteCount; // @synthesize receivedByteCount=_receivedByteCount;
@property unsigned long long expectedByteCount; // @synthesize expectedByteCount=_expectedByteCount;
@property(readonly) NSMutableData *expectedByteCountData; // @synthesize expectedByteCountData=_expectedByteCountData;
@property(readonly) NSMutableData *relayData; // @synthesize relayData=_relayData;
@property(readonly) NSUUID *machOUUID; // @synthesize machOUUID=_machOUUID;
@property(readonly) HMDCameraIDSSessionInviterDeviceVerifier *sessionInviterDeviceVerifier; // @synthesize sessionInviterDeviceVerifier=_sessionInviterDeviceVerifier;
@property(readonly) __weak id <HMDCameraSnapshotIDSRelayReceiverDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) IDSSession *idsSession; // @synthesize idsSession=_idsSession;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;
- (void)_didReceiveData:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (void)_handleDataFromSocket:(id)arg1;
- (void)_startDataReceive;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 logIdentifier:(id)arg2 machOUUID:(id)arg3 workQueue:(id)arg4 sessionInviterDeviceVerifier:(id)arg5 delegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

