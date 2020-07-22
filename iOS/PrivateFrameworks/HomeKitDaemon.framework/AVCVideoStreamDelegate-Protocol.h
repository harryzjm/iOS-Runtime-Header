//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class AVCVideoStream, NSArray, NSData, NSDictionary, NSError;

@protocol AVCVideoStreamDelegate <NSObject>
- (void)streamDidServerDie:(AVCVideoStream *)arg1;
- (void)streamDidStop:(AVCVideoStream *)arg1;
- (void)stream:(AVCVideoStream *)arg1 didStart:(_Bool)arg2 error:(NSError *)arg3;

@optional
- (void)stream:(AVCVideoStream *)arg1 uplinkQualityDidChange:(NSDictionary *)arg2;
- (void)stream:(AVCVideoStream *)arg1 downlinkQualityDidChange:(NSDictionary *)arg2;
- (void)stream:(AVCVideoStream *)arg1 didGetLastDecodedFrame:(NSData *)arg2;
- (void)stream:(AVCVideoStream *)arg1 didReceiveRTCPPackets:(NSArray *)arg2;
- (void)streamDidRTCPTimeOut:(AVCVideoStream *)arg1;
- (void)streamDidRTPTimeOut:(AVCVideoStream *)arg1;
- (void)stream:(AVCVideoStream *)arg1 didUpdateVideoConfiguration:(_Bool)arg2 error:(NSError *)arg3;
- (void)stream:(AVCVideoStream *)arg1 didResume:(_Bool)arg2 error:(NSError *)arg3;
- (void)stream:(AVCVideoStream *)arg1 didPause:(_Bool)arg2 error:(NSError *)arg3;
@end

