//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, _CDMutablePerfMetric, _DKSync2Policy, _DKSyncHistory, _DKSyncPeer, _DKSyncType;
@protocol _DKKeyValueStore, _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncDownPeerAdditionsOperation
{
    id <_DKSyncLocalKnowledgeStorage> _localStorage;
    id <_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSyncPeer *_peer;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    struct _CDPerfEvent _perfEvent;
    NSArray *_streamNames;
    _Bool _highPriority;
    _DKSyncHistory *_history;
    id <_DKKeyValueStore> _keyValueStore;
    NSDate *_startDate;
    NSDate *_highWaterMark;
    unsigned long long _batchNumber;
    NSArray *_overlappingWindows;
    _Bool _foundAdditions;
}

- (void).cxx_destruct;
- (void)endOperation;
- (void)main;
- (_Bool)isAsynchronous;

@end
