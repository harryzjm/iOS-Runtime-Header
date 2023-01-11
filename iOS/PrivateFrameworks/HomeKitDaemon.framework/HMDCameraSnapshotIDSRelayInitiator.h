//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSSessionDelegate-Protocol.h>

@class HMDDevice, HMDSnapshotFile, IDSSession, NSMutableData, NSObject, NSString;
@protocol HMDCameraSnapshotIDSRelayInitiatorDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HMDCameraSnapshotIDSRelayInitiator <IDSSessionDelegate, HMFLogging>
{
    _Bool _idsSessionStarted;
    HMDSnapshotFile *_snapshotFile;
    HMDDevice *_device;
    NSMutableData *_fileLengthAndData;
    NSObject<OS_dispatch_source> *_socketSource;
    IDSSession *_idsSession;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <HMDCameraSnapshotIDSRelayInitiatorDelegate> _delegate;
}

+ (id)logCategory;
@property(nonatomic) _Bool idsSessionStarted; // @synthesize idsSessionStarted=_idsSessionStarted;
@property(readonly, nonatomic) __weak id <HMDCameraSnapshotIDSRelayInitiatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) IDSSession *idsSession; // @synthesize idsSession=_idsSession;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *socketSource; // @synthesize socketSource=_socketSource;
@property(retain, nonatomic) NSMutableData *fileLengthAndData; // @synthesize fileLengthAndData=_fileLengthAndData;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) HMDSnapshotFile *snapshotFile; // @synthesize snapshotFile=_snapshotFile;
- (void).cxx_destruct;
- (void)_callFileTransferFailed:(id)arg1;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;
- (void)dealloc;
- (void)_startFileTransfer;
- (id)_smallData;
- (void)_sendInvitation;
- (void)sendInvitation;
- (void)_sendFile;
- (void)sendFile:(id)arg1;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 device:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

