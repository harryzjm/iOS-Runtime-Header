//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <IMDaemonCore/IMDMessageHistorySyncTaskFactory-Protocol.h>

@class IMDAccountController, IMDCKSyncController, IMDReplayController, NSString;

@interface IMDMessageHistorySyncTaskLiveFactory : NSObject <IMDMessageHistorySyncTaskFactory>
{
    IMDCKSyncController *_ckSyncController;
    IMDAccountController *_accountController;
    IMDReplayController *_replayController;
}

- (id)_newIDSTransactionLogSyncTask;
- (id)_newFirstUnlockReplaySyncTask;
- (id)_newKChatSyncTask;
- (id)newSyncTaskForType:(unsigned long long)arg1;
- (id)_initWithCKSyncController:(id)arg1 accountController:(id)arg2 replayController:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

