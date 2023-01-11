//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSServiceFacility.h>

@class FBServiceClientAuthenticator;

@interface FBSystemAppProxyServiceServer : FBSServiceFacility
{
    FBServiceClientAuthenticator *_shutdownAuthenticator;
    FBServiceClientAuthenticator *_keyboardFocusAuthenticator;
}

+ (id)targetQueue;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (void)_handleSetKeyboardFocusApplication:(id)arg1 forClient:(id)arg2;
- (void)_handleShutdown:(id)arg1 forClient:(id)arg2;
- (void)_handleTerminateApplicationGroup:(id)arg1 forClient:(id)arg2;
- (void)_handleTerminateApplication:(id)arg1 forClient:(id)arg2;
- (void)_handleActions:(id)arg1 forClient:(id)arg2;
- (void)_handleGetProcessHandle:(id)arg1 forClient:(id)arg2;
- (void)_handleGetPasscodeLockedOrBlockedStatus:(id)arg1 forClient:(id)arg2;
- (void)_handleSystemApplicationBundleIdentifier:(id)arg1 forClient:(id)arg2;
- (id)_initWithQueue:(id)arg1;

@end
