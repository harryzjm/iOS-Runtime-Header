//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableArray;
@protocol COStateAddOnDelegate;

@interface COStateAddOn
{
    struct os_unfair_lock_s _lock;
    unsigned long long _outstandingMeshContructions;
    NSMutableArray *_outstandingUpdateRequests;
    id <COStateAddOnDelegate> _delegate;
    NSDictionary *_meshState;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *meshState; // @synthesize meshState=_meshState;
- (void)_handleStateUpdateRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_handleStateReadRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_handleStateUpdateNotification:(id)arg1;
- (void)_handleStateNotification:(id)arg1;
- (void)_broadcastMeshState:(id)arg1;
- (void)_processOutstandingUpdateRequests;
- (void)_constructMeshState;
- (void)didChangeNodesForMeshController:(id)arg1;
- (void)willRemoveFromMeshController:(id)arg1;
- (void)didAddToMeshController:(id)arg1;
- (void)meshController:(id)arg1 didTransitionToState:(unsigned long long)arg2;
- (void)_handleUpdates:(id)arg1 removals:(id)arg2;
- (void)_sendRequest:(id)arg1 withRetryCount:(long long)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)sendStateUpdates:(id)arg1 removals:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)removeKeyPaths:(id)arg1 suite:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)setDictionary:(id)arg1 suite:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
@property __weak id <COStateAddOnDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (id)init;

@end
