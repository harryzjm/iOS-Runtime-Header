//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraSessionID, HMDCameraSnapshotRemoteStreamSender, NSError;

@protocol HMDCameraSnapshotRemoteStreamSenderDelegate <NSObject>
- (void)snapshotStreamSender:(HMDCameraSnapshotRemoteStreamSender *)arg1 didCompleteSendImage:(NSError *)arg2 sessionID:(HMDCameraSessionID *)arg3;
- (void)snapshotStreamSender:(HMDCameraSnapshotRemoteStreamSender *)arg1 didStartCaptureImage:(NSError *)arg2 sessionID:(HMDCameraSessionID *)arg3;
@end
