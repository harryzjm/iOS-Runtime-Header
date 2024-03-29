//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraSnapshotMetrics, HMDCameraSnapshotSessionID, HMDSnapshotCompletionTimer, NSMutableArray, NSString;
@protocol HMDCameraGetSnapshotProtocol;

__attribute__((visibility("hidden")))
@interface HMDSnapshotSession : HMFObject
{
    HMDCameraSnapshotSessionID *_sessionID;
    id <HMDCameraGetSnapshotProtocol> _snapshotGetter;
    HMDSnapshotCompletionTimer *_snapshotCompletionTimer;
    NSMutableArray *_sessionMessages;
    unsigned long long _streamingTierType;
    HMDCameraSnapshotMetrics *_snapshotMetrics;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDCameraSnapshotMetrics *snapshotMetrics; // @synthesize snapshotMetrics=_snapshotMetrics;
@property(readonly, nonatomic) unsigned long long streamingTierType; // @synthesize streamingTierType=_streamingTierType;
@property(readonly, nonatomic) NSMutableArray *sessionMessages; // @synthesize sessionMessages=_sessionMessages;
@property(readonly, nonatomic) HMDSnapshotCompletionTimer *snapshotCompletionTimer; // @synthesize snapshotCompletionTimer=_snapshotCompletionTimer;
@property(readonly, nonatomic) id <HMDCameraGetSnapshotProtocol> snapshotGetter; // @synthesize snapshotGetter=_snapshotGetter;
@property(readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, copy) NSString *description;
- (void)respond:(id)arg1 payload:(id)arg2;
- (void)dealloc;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 accessory:(id)arg2 snapshotGetter:(id)arg3 message:(id)arg4 waitPeriod:(double)arg5 streamingTierType:(unsigned long long)arg6 cameraLocallyReachable:(_Bool)arg7 snapshotForNotification:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

