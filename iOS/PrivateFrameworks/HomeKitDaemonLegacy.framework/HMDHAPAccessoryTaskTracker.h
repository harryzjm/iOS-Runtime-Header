//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HMDHAPAccessoryTaskTracker : NSObject
{
    struct os_unfair_lock_s _lock;
    unsigned long long _currentTaskIdentifier;
    NSMutableDictionary *_pendingTasks;
}

- (void).cxx_destruct;
@property(readonly) NSMutableDictionary *pendingTasks; // @synthesize pendingTasks=_pendingTasks;
- (id)pendingRemoteTasks;
@property(readonly) unsigned long long nextTaskIdentifier;
- (void)removePendingTaskWithIdentifier:(id)arg1;
- (void)executeTask:(id)arg1;
- (id)init;

@end

