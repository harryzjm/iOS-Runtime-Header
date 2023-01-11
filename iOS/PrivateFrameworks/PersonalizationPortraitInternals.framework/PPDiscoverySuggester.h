//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, _PASLock;
@protocol OS_dispatch_queue;

@interface PPDiscoverySuggester
{
    NSObject<OS_dispatch_queue> *_queue;
    _PASLock *_data;
    _Bool _enabled;
}

- (void).cxx_destruct;
- (void)resumeDiscovering;
- (void)stopDiscovering;
- (void)waitForDiscoveriesToProcess;
- (void)_discoveredRecipient:(id)arg1;
- (void)discoveredRecipients:(id)arg1;
- (void)_discoveredEvent:(id)arg1 identifier:(id)arg2 store:(id)arg3;
- (void)discoverEvent:(id)arg1 store:(id)arg2;
- (void)_undiscoverEvent:(id)arg1 identifier:(id)arg2 store:(id)arg3;
- (void)undiscoverEvent:(id)arg1 store:(id)arg2;
- (void)_removeContacts:(id)arg1;
- (void)_addContacts:(id)arg1;
- (void)clearCaches;
- (id)init;

@end

