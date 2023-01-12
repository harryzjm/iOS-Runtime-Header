//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKXPCProcessScopedDaemon-Protocol.h>

@interface CKDProcessScopedStateManager : NSObject <CKXPCProcessScopedDaemon>
{
}

+ (id)sharedManager;
- (void)kickOffPendingLongLivedOperations;
- (void)flushOperationMetricsToPowerLog;
- (void)updatePushTokens;
- (void)wipeServerConfigurationsAndDie;
- (void)wipeAllCachesAndDie;
- (void)accountWithID:(id)arg1 changedWithChangeType:(long long)arg2;
- (void)accountsWillDeleteAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)clearPCSCachesForKnownContainersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dumpAllClientsStatusReportToFileHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_init;

@end
