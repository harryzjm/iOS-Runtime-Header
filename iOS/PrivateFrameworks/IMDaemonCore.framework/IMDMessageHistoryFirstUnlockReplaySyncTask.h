//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IMDReplayController;

@interface IMDMessageHistoryFirstUnlockReplaySyncTask
{
    IMDReplayController *_replayController;
}

- (void)_setupAndBeginSync;
- (unsigned long long)syncTaskType;
- (void)dealloc;
- (id)initWithReplayController:(id)arg1 accountController:(id)arg2;

@end
