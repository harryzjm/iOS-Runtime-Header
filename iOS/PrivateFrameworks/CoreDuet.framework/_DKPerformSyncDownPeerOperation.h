//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, _CDMutablePerfMetric, _DKSync2Policy, _DKSyncPeer, _DKSyncType;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncDownPeerOperation
{
    id <_DKSyncLocalKnowledgeStorage> _localStorage;
    id <_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSyncPeer *_peer;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    struct _CDPerfEvent _perfEvent;
    NSMutableArray *_operations;
}

- (void).cxx_destruct;
- (void)endOperation;
- (void)main;
- (_Bool)isAsynchronous;

@end
