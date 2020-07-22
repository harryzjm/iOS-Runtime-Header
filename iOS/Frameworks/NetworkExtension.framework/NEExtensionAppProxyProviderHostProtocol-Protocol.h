//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NEExtensionTunnelProviderHostProtocol-Protocol.h>

@class NEAppRule, NSUUID;

@protocol NEExtensionAppProxyProviderHostProtocol <NEExtensionTunnelProviderHostProtocol>
- (void)openFlowDivertControlSocketWithCompletionHandler:(void (^)(NSFileHandle *))arg1;
- (void)verifyAppWithPID:(long long)arg1 uuid:(NSUUID *)arg2 matchesAppRule:(NEAppRule *)arg3 completionHandler:(void (^)(_Bool))arg4;
@end
