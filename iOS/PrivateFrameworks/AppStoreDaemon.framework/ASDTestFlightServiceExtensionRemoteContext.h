//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreDaemon/ASDTestFlightServiceExtensionRemoteXPCInterface-Protocol.h>

@class ASDTestFlightServiceExtension, NSString;

@interface ASDTestFlightServiceExtensionRemoteContext <ASDTestFlightServiceExtensionRemoteXPCInterface>
{
    ASDTestFlightServiceExtension *_extensionInstance;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ASDTestFlightServiceExtension *extensionInstance; // @synthesize extensionInstance=_extensionInstance;
- (void)serviceExtensionTimeWillExpire;
- (void)serviceExtensionPerformCleanup;
- (void)reloadAppsFromServerWithReply:(CDUnknownBlockType)arg1;
- (void)didReachTerminalPhaseWithBetaBundleID:(id)arg1 terminalPhase:(long long)arg2 error:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)didReceivePushMessages:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)didReceivePushToken:(id)arg1 reply:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
