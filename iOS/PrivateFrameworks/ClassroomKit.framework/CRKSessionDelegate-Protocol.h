//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class CATTransport, CRKSession, NSArray;

@protocol CRKSessionDelegate <NSObject>
- (void)sessionDidInvalidate:(CRKSession *)arg1;
- (void)sessionDidDisconnect:(CRKSession *)arg1;
- (void)sessionDidLoseBeacon:(CRKSession *)arg1;
- (void)session:(CRKSession *)arg1 willLoseBeaconAfterTimeInterval:(double)arg2;
- (void)session:(CRKSession *)arg1 didConnectWithTransport:(CATTransport *)arg2;
- (NSArray *)trustedAnchorCertificatesForSession:(CRKSession *)arg1;
- (id)clientIdentityForSession:(CRKSession *)arg1;
- (void)sessionDidBecomeNotConnectable:(CRKSession *)arg1;
- (void)sessionDidBecomeConnectable:(CRKSession *)arg1;
@end

