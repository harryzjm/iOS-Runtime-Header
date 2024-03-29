//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, HMDCameraStreamMetrics, HMDCameraStreamSessionID, HMDCameraStreamSnapshotHandler, HMDService, NSObject, NSString;
@protocol HMDCameraStreamControlManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraStreamControlManager : HMFObject
{
    id <HMDCameraStreamControlManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    HMDAccessory *_accessory;
    HMDService *_streamManagementService;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDCameraStreamSessionID *_sessionID;
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;
    HMDCameraStreamMetrics *_streamMetrics;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDCameraStreamMetrics *streamMetrics; // @synthesize streamMetrics=_streamMetrics;
@property(readonly, nonatomic) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // @synthesize streamSnapshotHandler=_streamSnapshotHandler;
@property(readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMDService *streamManagementService; // @synthesize streamManagementService=_streamManagementService;
@property __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property __weak id <HMDCameraStreamControlManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;
- (void)_callStreamStoppedWithError:(id)arg1;
- (void)_callStreamReconfigured;
- (void)_callStreamFirstFrameReceived;
- (void)_callStreamStarted;
- (void)_callStreamRemoteConnectionSetup;
- (void)_callStreamNegotiated:(id)arg1;
- (id)managerProtocol;
- (void)_reportInternalErrorCode:(long long)arg1;
- (void)_reportErrorCode:(long long)arg1;
- (void)_cleanUpStreamSessionWithError:(id)arg1;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 accessory:(id)arg6 streamManagementService:(id)arg7 isLocal:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

