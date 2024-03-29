//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMDMPCSessionController, HMDResidentDevice, NSObject, NSString, NSUUID;
@protocol HMDMediaActionRouterDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDMediaActionRouter : HMFObject
{
    _Bool _shouldExecuteOnCurrentDevice;
    id <HMDMediaActionRouterDataSource> _dataSource;
    HMDResidentDevice *_targetResidentDeviceOverride;
    HMDMPCSessionController *_mpcSessionController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMDMPCSessionController *mpcSessionController; // @synthesize mpcSessionController=_mpcSessionController;
@property(nonatomic) __weak HMDResidentDevice *targetResidentDeviceOverride; // @synthesize targetResidentDeviceOverride=_targetResidentDeviceOverride;
@property(readonly, nonatomic) _Bool shouldExecuteOnCurrentDevice; // @synthesize shouldExecuteOnCurrentDevice=_shouldExecuteOnCurrentDevice;
@property(readonly, nonatomic) __weak id <HMDMediaActionRouterDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)mediaProfileWithUUID:(id)arg1;
@property(readonly) __weak HMDHome *home;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)executeMediaActionWithSessionData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)targetResidentDeviceForExecutingMediaActionWithProfiles:(id)arg1 targetSystemMediaApplication:(_Bool)arg2;
- (void)gatherTargetDevicesForExecutingMediaActionWithProfiles:(id)arg1 targetSystemMediaApplication:(_Bool)arg2 outResidentDevicesInMediaAction:(id *)arg3 outHomePodsInMediaAction:(id *)arg4 outResidentDevicesSupportingMediaActions:(id *)arg5 outHomePodsSupportingMediaActions:(id *)arg6 outNonOdeonHomePodsSupportingMediaActions:(id *)arg7 outNonOdeonResidentDevicesSupportingMediaActions:(id *)arg8 outNonOdeonResidentDevicesInMediaAction:(id *)arg9 outNonOdeonHomePodsInMediaAction:(id *)arg10 dataSource:(id)arg11;
- (void)routeMessage:(id)arg1;
- (void)sendMediaActionMessageToDevice:(id)arg1 sessionData:(id)arg2 encodePlaybackArchive:(_Bool)arg3 canForwardMessage:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendMediaActionMessageToCompanionWithSessionData:(id)arg1 encodePlaybackArchive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendMediaActionMessageToResident:(id)arg1 sessionData:(id)arg2 encodePlaybackArchive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleNonResidentMediaActionExecutionWithSessionData:(id)arg1 encodePlaybackArchive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)routeSessionDataForExecution:(id)arg1 encodePlaybackArchive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)routeMediaActionForExecution:(id)arg1 source:(unsigned long long)arg2 clientName:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_registerForMessages;
- (void)dealloc;
- (id)init;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

