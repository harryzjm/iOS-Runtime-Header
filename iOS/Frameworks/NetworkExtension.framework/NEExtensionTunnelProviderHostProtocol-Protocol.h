//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NEExtensionProviderHostProtocol-Protocol.h>

@class NETunnelNetworkSettings;

@protocol NEExtensionTunnelProviderHostProtocol <NEExtensionProviderHostProtocol>
- (void)handleIPCDetached;
- (void)setTunnelConfiguration:(NETunnelNetworkSettings *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)didSetReasserting:(_Bool)arg1;
@end

