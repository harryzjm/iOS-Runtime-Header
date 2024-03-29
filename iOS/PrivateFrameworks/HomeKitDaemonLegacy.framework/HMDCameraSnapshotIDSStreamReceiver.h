//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDDevice, HMDSnapshotFile, NSObject, NSString;
@protocol HMDCameraSnapshotIDSStreamReceiverDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotIDSStreamReceiver
{
    HMDSnapshotFile *_snapshotFile;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    HMDDevice *_remoteDevice;
    id <HMDCameraSnapshotIDSStreamReceiverDelegate> _delegate;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property __weak id <HMDCameraSnapshotIDSStreamReceiverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) HMDDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(readonly) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly) HMDSnapshotFile *snapshotFile; // @synthesize snapshotFile=_snapshotFile;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (id)logIdentifier;
- (void)_callFileReceivedWithError:(id)arg1;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 proxyService:(id)arg3 snapshotFile:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 remoteDevice:(id)arg7;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 snapshotFile:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 remoteDevice:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

