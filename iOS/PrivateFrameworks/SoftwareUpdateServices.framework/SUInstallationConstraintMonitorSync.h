//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SUInstallationConstraintMonitorSync
{
    _Bool _queue_isSyncing;
}

- (void)_queue_setSyncing:(_Bool)arg1;
- (unsigned long long)unsatisfiedConstraints;
- (void)dealloc;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;

@end
