//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NEExtensionTunnelProviderProtocol-Protocol.h>

@class NSFileHandle;

@protocol NEExtensionAppProxyProviderProtocol <NEExtensionTunnelProviderProtocol>
- (void)setInitialFlowDivertControlSocket:(NSFileHandle *)arg1 extraValidation:(_Bool)arg2;
- (void)setInitialFlowDivertControlSocket:(NSFileHandle *)arg1;
- (void)setDelegateInterface:(unsigned int)arg1;
@end

