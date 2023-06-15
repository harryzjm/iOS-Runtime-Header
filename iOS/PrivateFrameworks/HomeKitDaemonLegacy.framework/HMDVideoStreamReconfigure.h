//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraStreamSessionID, HMFTimer, NSDictionary, NSMutableArray, NSObject, NSString;
@protocol HMDVideoStreamReconfigureDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDVideoStreamReconfigure : HMFObject
{
    _Bool _reconfigurationMode;
    NSDictionary *_downlinkQualityInfo;
    NSMutableArray *_reconfigureEvents;
    HMFTimer *_upgradeDebouceTimer;
    HMFTimer *_downgradeDebouceTimer;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    HMDCameraStreamSessionID *_sessionID;
    id <HMDVideoStreamReconfigureDelegate> _delegate;
}

+ (id)logCategory;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (void)downlinkQualityChanged:(id)arg1;
- (void)updateReconfigurationMode:(_Bool)arg1;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

