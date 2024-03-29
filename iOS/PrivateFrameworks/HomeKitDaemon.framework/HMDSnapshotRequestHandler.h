//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, HMDCameraStreamSnapshotHandler, HMDSnapshotFile, HMFTimer, NSMutableArray, NSObject, NSSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSnapshotRequestHandler : HMFObject
{
    NSString *_imageCacheDirectory;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDAccessory *_accessory;
    NSMutableArray *_pendingRequests;
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;
    HMFTimer *_mostRecentSnapshotInvalidationTimer;
    HMDSnapshotFile *_mostRecentSnapshot;
    NSString *_logIdentifier;
    NSSet *_supportedResolutions;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *supportedResolutions; // @synthesize supportedResolutions=_supportedResolutions;
@property(readonly, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly, nonatomic) NSString *imageCacheDirectory; // @synthesize imageCacheDirectory=_imageCacheDirectory;
- (void)timerDidFire:(id)arg1;
- (void)streamSnapshotHandler:(id)arg1 didGetLastSnapshot:(id)arg2;
- (void)streamSnapshotHandler:(id)arg1 didGetNewSnapshot:(id)arg2;
- (void)requestSnapshot:(id)arg1 streamingTierType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 imageCacheDirectory:(id)arg4 logID:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

