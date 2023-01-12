//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMeshAddOn.h"

@class COClusterMemberRoleSnapshot, CORoleDefaultsMonitor, NSObject, NSSet, NSString;
@protocol CORoleAddOnDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CORoleAddOn : COMeshAddOn
{
    struct os_unfair_lock_s _lock;
    _Bool _pendingChanges;
    id <CORoleAddOnDelegate> _delegate;
    CORoleDefaultsMonitor *_defaultsMonitor;
    COClusterMemberRoleSnapshot *_currentDeviceSnapshot;
    NSSet *_nodeCache;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic, getter=havePendingChanges) _Bool pendingChanges; // @synthesize pendingChanges=_pendingChanges;
@property(retain, nonatomic) NSSet *nodeCache; // @synthesize nodeCache=_nodeCache;
@property(retain, nonatomic) COClusterMemberRoleSnapshot *currentDeviceSnapshot; // @synthesize currentDeviceSnapshot=_currentDeviceSnapshot;
@property(readonly, nonatomic) CORoleDefaultsMonitor *defaultsMonitor; // @synthesize defaultsMonitor=_defaultsMonitor;
- (void)_notifyDelegate;
- (void)_withLock:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <CORoleAddOnDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_isLegacyStereoPairPeer:(id)arg1;
- (_Bool)_isLegacyStereoPair;
- (id)_roleForNode:(id)arg1;
- (id)_roleForCurrentDevice;
- (id)_memberForNode:(id)arg1;
- (id)_memberForCurrentDevice;
- (void)_updateCurrentDeviceState;
- (void)_updateState;
- (void)monitor:(id)arg1 defaultChanged:(unsigned long long)arg2;
- (void)didChangeNodesForMeshController:(id)arg1;
- (void)meshController:(id)arg1 didTransitionToState:(unsigned long long)arg2;
- (void)_enableForPairLegacySupport;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

