//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CORoleService
{
    NSDictionary *_snapshotState;
    NSDictionary *_roleObservers;
    NSDictionary *_memberObservers;
    NSDictionary *_snapshotObservers;
}

+ (id)serviceWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *snapshotObservers; // @synthesize snapshotObservers=_snapshotObservers;
@property(retain, nonatomic) NSDictionary *memberObservers; // @synthesize memberObservers=_memberObservers;
@property(retain, nonatomic) NSDictionary *roleObservers; // @synthesize roleObservers=_roleObservers;
@property(retain, nonatomic) NSDictionary *snapshotState; // @synthesize snapshotState=_snapshotState;
- (id)_remoteInterfaceForClient:(id)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
- (void)_removeSnapshotObserverForClient:(id)arg1 inCluster:(id)arg2;
- (void)_addSnapshotObserverForClient:(id)arg1 inCluster:(id)arg2;
- (void)_removeMemberObserverForClient:(id)arg1 ofRole:(id)arg2 inCluster:(id)arg3;
- (void)_addMemberObserverForClient:(id)arg1 ofRole:(id)arg2 inCluster:(id)arg3;
- (void)_removeRoleObserverForClient:(id)arg1 ofMember:(id)arg2 inCluster:(id)arg3;
- (void)_addRoleObserverForClient:(id)arg1 ofMember:(id)arg2 inCluster:(id)arg3;
- (void)_notifySnapshotObserver:(id)arg1 snapshotOfCluster:(id)arg2 didChangeTo:(id)arg3;
- (void)_notifyMemberObserver:(id)arg1 membersWithRole:(id)arg2 inCluster:(id)arg3 didChangeTo:(id)arg4;
- (void)_notifyRoleObserver:(id)arg1 roleOfMember:(id)arg2 inCluster:(id)arg3 didChangeTo:(id)arg4;
- (void)_notifySnapshotObserversSnapshotOfCluster:(id)arg1 didChangeTo:(id)arg2;
- (void)_notifyMemberObserversMembersWithRole:(id)arg1 inCluster:(id)arg2 didChangeTo:(id)arg3;
- (void)_notifyRoleObserversRoleOfMember:(id)arg1 inCluster:(id)arg2 didChangeTo:(id)arg3;
- (id)_snapshotsForCluster:(id)arg1;
- (id)_membersWithRole:(id)arg1 inSnapshots:(id)arg2;
- (id)_membersWithRole:(id)arg1 inCluster:(id)arg2;
- (id)_roleOfMember:(id)arg1 inSnapshots:(id)arg2;
- (id)_roleOfMember:(id)arg1 inCluster:(id)arg2;
- (void)_identifyAndNotifyMemberChangesFromSnapshot:(id)arg1 inCluster:(id)arg2;
- (void)_identifyAndNotifyRoleChangesFromSnapshot:(id)arg1 inCluster:(id)arg2;
- (void)_updateSnapshots:(id)arg1 inCluster:(id)arg2;
- (void)addOn:(id)arg1 stateChanged:(id)arg2;
- (void)unregisterForSnapshotChangesInCluster:(id)arg1;
- (void)registerForSnapshotChangesInCluster:(id)arg1;
- (void)unregisterForMemberChangesWithRole:(id)arg1 inCluster:(id)arg2;
- (void)registerForMemberChangesWithRole:(id)arg1 inCluster:(id)arg2;
- (void)unregisterForRoleChangesOfMember:(id)arg1 inCluster:(id)arg2;
- (void)registerForRoleChangesOfMember:(id)arg1 inCluster:(id)arg2;
- (_Bool)_applicableToCluster:(id)arg1;
- (void)_addOnRemoved:(id)arg1;
- (void)_addOnAdded:(id)arg1;
- (void)_clientLost:(id)arg1;
- (void)_configureServiceInterfacesOnConnection:(id)arg1;
- (id)initWithListenerProvider:(id)arg1 addOnProvider:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

