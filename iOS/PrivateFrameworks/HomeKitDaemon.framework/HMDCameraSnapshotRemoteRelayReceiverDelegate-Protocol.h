//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraSessionID, HMDCameraSnapshotRemoteRelayReceiver, HMDSnapshotFile, NSError;

@protocol HMDCameraSnapshotRemoteRelayReceiverDelegate <NSObject>
- (void)snapshotRelayReceiver:(HMDCameraSnapshotRemoteRelayReceiver *)arg1 didSaveSnapshotFile:(HMDSnapshotFile *)arg2 error:(NSError *)arg3 sessionID:(HMDCameraSessionID *)arg4;
- (void)snapshotRelayReceiver:(HMDCameraSnapshotRemoteRelayReceiver *)arg1 didStartGettingImage:(NSError *)arg2 sessionID:(HMDCameraSessionID *)arg3;
@end
