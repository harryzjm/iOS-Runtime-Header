//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HMDSnapshotFile, NSObject, NSString;
@protocol HMDCameraSnapshotIDSStreamInitiatorDelegate, OS_dispatch_queue;

@interface HMDCameraSnapshotIDSStreamInitiator <IDSServiceDelegate, HMFLogging>
{
    HMDSnapshotFile *_snapshotFile;
    NSString *_destinationID;
    NSString *_sendFileIdentifier;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <HMDCameraSnapshotIDSStreamInitiatorDelegate> _delegate;
}

+ (id)logCategory;
@property(readonly, nonatomic) __weak id <HMDCameraSnapshotIDSStreamInitiatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSString *sendFileIdentifier; // @synthesize sendFileIdentifier=_sendFileIdentifier;
@property(retain, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(retain, nonatomic) HMDSnapshotFile *snapshotFile; // @synthesize snapshotFile=_snapshotFile;
- (void).cxx_destruct;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)_callFileTransferFailed:(id)arg1;
- (void)dealloc;
- (void)_sendFile:(id)arg1;
- (void)sendFile:(id)arg1;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 destinationID:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
