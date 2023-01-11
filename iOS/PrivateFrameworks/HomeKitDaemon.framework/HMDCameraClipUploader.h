//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMBLocalZone, HMCameraClipEncryptionManager, NAFuture, NSDate, NSMutableArray, NSObject, NSString, NSUUID;
@protocol HMDCameraClipUploaderDelegate, HMDCameraClipUploaderFactory, OS_dispatch_queue;

@interface HMDCameraClipUploader : HMFObject <HMFLogging>
{
    NSUUID *_clipUUID;
    id <HMDCameraClipUploaderDelegate> _delegate;
    NSDate *_startDate;
    double _targetFragmentDuration;
    HMBLocalZone *_localZone;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_logIdentifier;
    HMCameraClipEncryptionManager *_encryptionManager;
    id <HMDCameraClipUploaderFactory> _factory;
    NSMutableArray *_operations;
    NAFuture *_didCreateClipFuture;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain) NAFuture *didCreateClipFuture; // @synthesize didCreateClipFuture=_didCreateClipFuture;
@property(readonly) NSMutableArray *operations; // @synthesize operations=_operations;
@property(readonly) id <HMDCameraClipUploaderFactory> factory; // @synthesize factory=_factory;
@property(readonly) HMCameraClipEncryptionManager *encryptionManager; // @synthesize encryptionManager=_encryptionManager;
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly) double targetFragmentDuration; // @synthesize targetFragmentDuration=_targetFragmentDuration;
@property(readonly, copy) NSDate *startDate; // @synthesize startDate=_startDate;
@property __weak id <HMDCameraClipUploaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSUUID *clipUUID; // @synthesize clipUUID=_clipUUID;
- (id)attributeDescriptions;
- (_Bool)_isCancelledError:(id)arg1;
- (void)_handleFatalOperationFailure;
- (void)_startNextOperation;
- (void)_operationCompleted:(id)arg1 finalizeOnError:(_Bool)arg2 future:(id)arg3;
- (id)_addOperation:(id)arg1 finalizeClipOnError:(_Bool)arg2;
- (id)_createClipWithSignificantEvent:(id)arg1 homePresenceByPairingIdentity:(id)arg2;
- (_Bool)hasAddedCreateClipOperation;
- (id)finish;
- (id)addPosterFrameData:(id)arg1 timeOffsetWithinClip:(double)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (id)addVideoSegmentData:(id)arg1 duration:(double)arg2 timeOffsetWithinClip:(double)arg3 clipFinalizedBecauseMaxDurationExceeded:(_Bool)arg4;
- (id)addVideoInitData:(id)arg1;
- (id)addNotificationForSignificantEvent:(id)arg1 homePresenceByPairingIdentity:(id)arg2;
- (id)initWithClipUUID:(id)arg1 startDate:(id)arg2 targetFragmentDuration:(double)arg3 localZone:(id)arg4 workQueue:(id)arg5 logIdentifier:(id)arg6 encryptionManager:(id)arg7 factory:(id)arg8;
- (id)initWithClipUUID:(id)arg1 startDate:(id)arg2 targetFragmentDuration:(double)arg3 localZone:(id)arg4 workQueue:(id)arg5 logIdentifier:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
