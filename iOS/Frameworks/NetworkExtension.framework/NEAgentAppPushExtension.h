//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NEAgentSessionDelegate-Protocol.h>
#import <NetworkExtension/NEAppPushPluginDriver-Protocol.h>
#import <NetworkExtension/NEExtensionAppPushProviderHostDelegate-Protocol.h>

@class NSArray, NSString, NSXPCInterface;

@interface NEAgentAppPushExtension <NEExtensionAppPushProviderHostDelegate, NEAgentSessionDelegate, NEAppPushPluginDriver>
{
}

- (void)sendExtensionFailed;
- (void)handleProviderStopped;
- (void)reportIncomingCall:(id)arg1;
- (void)handleProviderError:(id)arg1 forMessageID:(id)arg2;
- (void)handleProviderError:(id)arg1;
- (void)sendTimerEvent;
- (void)sendOutgoingCallMessage:(id)arg1 andMessageID:(id)arg2;
- (void)setProviderConfiguration:(id)arg1;
- (void)stopWithReason:(int)arg1;
- (void)startConnectionWithProviderConfig:(id)arg1;
- (void)didReceiveIncomingCallWithUserInfo:(id)arg1;
@property(readonly, nonatomic) NSXPCInterface *driverInterface;
@property(readonly, nonatomic) NSXPCInterface *managerInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSArray *uuids;

@end
