//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class AVCRemoteVideoClient, VideoAttributes;

@protocol AVCRemoteVideoClientDelegate <NSObject>

@optional
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 remoteVideoAttributesDidChange:(VideoAttributes *)arg2;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 remoteScreenAttributesDidChange:(VideoAttributes *)arg2;
- (void)remoteVideoServerDidDie:(AVCRemoteVideoClient *)arg1;
- (void)remoteVideoClientDidReceiveLastFrame:(AVCRemoteVideoClient *)arg1;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 videoDidDegrade:(_Bool)arg2;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 remoteMediaDidStall:(_Bool)arg2;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 remoteVideoDidPause:(_Bool)arg2;
- (void)remoteVideoClientDidReceiveFirstFrame:(AVCRemoteVideoClient *)arg1;
@end

