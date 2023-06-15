//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCameraSnapshotIDSRelayInitiator, HMDCameraSnapshotLocal, NSString;
@protocol HMDCameraSnapshotRemoteRelaySenderDelegate;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotRemoteRelaySender
{
    HMDCameraSnapshotLocal *_snapshotLocal;
    id <HMDCameraSnapshotRemoteRelaySenderDelegate> _delegate;
    HMDCameraSnapshotIDSRelayInitiator *_relayInitiator;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDCameraSnapshotIDSRelayInitiator *relayInitiator; // @synthesize relayInitiator=_relayInitiator;
@property(readonly, nonatomic) __weak id <HMDCameraSnapshotRemoteRelaySenderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HMDCameraSnapshotLocal *snapshotLocal; // @synthesize snapshotLocal=_snapshotLocal;
- (void)relayInitiatorDidSendIDSInvitation:(id)arg1;
- (void)relayInitiator:(id)arg1 didSendData:(id)arg2;
- (void)relayInitiatorDidStartDataSend:(id)arg1;
- (void)relayInitiatorIDSSessionDidStart:(id)arg1;
- (void)relayInitiatorDidSendDataSuccessfully:(id)arg1;
- (void)relayInitiator:(id)arg1 didEndIDSSessionWithError:(id)arg2;
- (void)snapshotLocal:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;
- (void)_callDidSaveSnapshotFileDelegate:(id)arg1;
- (void)_callDidCompleteSendImageDelegate:(id)arg1;
- (void)_callDidStartCaptureImageDelegate:(id)arg1;
- (void)snapShotTransferComplete;
- (void)getSnapshot:(unsigned long long)arg1;
- (id)logIdentifier;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 device:(id)arg3 accessory:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 uniqueIdentifier:(id)arg7 snapshotRequestHandler:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

