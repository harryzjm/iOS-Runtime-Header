//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/FBApplicationProcessLaunchTransactionObserver-Protocol.h>

@class NSMapTable, NSMutableSet, NSString;

@interface SBSuspendedWorkspaceTransaction <FBApplicationProcessLaunchTransactionObserver>
{
    NSMapTable *_launchTransactionToSceneEntityMap;
    NSMutableSet *_outstandingProcessLaunchTransactions;
    NSMutableSet *_incompleteProcessLaunchTransactions;
    _Bool _anyLaunchFailed;
}

- (void).cxx_destruct;
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
- (void)_didComplete;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_begin;
- (void)_sendActivationResultWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
