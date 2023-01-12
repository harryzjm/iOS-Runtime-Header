//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSHBacklightStateMachine, BLSHBacklightTransitionStateMachine, BLSHDiagnosticsServer, BLSHWatchdogTester, BLSHXPCBacklightProxyHostServer;

__attribute__((visibility("hidden")))
@interface BLSHBacklightService : NSObject
{
    BLSHBacklightStateMachine *_stateMachine;
    BLSHBacklightTransitionStateMachine *_transitionStateMachine;
    BLSHXPCBacklightProxyHostServer *_backlightXPCServer;
    BLSHDiagnosticsServer *_diagnosticsServer;
    BLSHWatchdogTester *_watchdogTester;
}

+ (id)serviceForService:(id)arg1 withPlatformProvider:(id)arg2 osInterfaceProvider:(id)arg3 inactiveBudgetPolicy:(id)arg4;
- (void).cxx_destruct;
- (id)initForService:(id)arg1 withPlatformProvider:(id)arg2 osInterfaceProvider:(id)arg3 inactiveBudgetPolicy:(id)arg4;

@end

