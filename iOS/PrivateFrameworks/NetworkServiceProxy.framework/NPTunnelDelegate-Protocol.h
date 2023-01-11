//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkServiceProxy/NSObject-Protocol.h>

@class NPTunnel;

@protocol NPTunnelDelegate <NSObject>
@property(readonly) _Bool isFirstTunnel;
- (void)tunnel:(NPTunnel *)arg1 flowDidFallbackWithReason:(long long)arg2;
- (void)tunnelIsReady:(NPTunnel *)arg1;
- (void)tunnelDidConnect:(NPTunnel *)arg1;
- (void)tunnelDidCancel:(NPTunnel *)arg1;
@end
