//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SKRConversationTurnDataXPC;
@protocol SKRExecutionBridge;

@protocol SKRSharedFlowPluginServiceXPC
- (void)loadFlowPluginWithBundleId:(NSString *)arg1 bundlePath:(NSString *)arg2 reply:(void (^)(id <SKRRemoteConversationXPC>))arg3;
- (void)startTurnWithTurnData:(SKRConversationTurnDataXPC *)arg1 bridge:(id <SKRExecutionBridge>)arg2 reply:(void (^)(NSError *))arg3;
@end

