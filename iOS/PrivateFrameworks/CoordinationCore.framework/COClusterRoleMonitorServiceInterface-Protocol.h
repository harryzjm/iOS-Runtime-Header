//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoordinationCore/NSObject-Protocol.h>

@class COCluster, COClusterMember, COClusterRole;

@protocol COClusterRoleMonitorServiceInterface <NSObject>
- (void)unregisterForSnapshotChangesInCluster:(COCluster *)arg1;
- (void)registerForSnapshotChangesInCluster:(COCluster *)arg1;
- (void)unregisterForMemberChangesWithRole:(COClusterRole *)arg1 inCluster:(COCluster *)arg2;
- (void)registerForMemberChangesWithRole:(COClusterRole *)arg1 inCluster:(COCluster *)arg2;
- (void)unregisterForRoleChangesOfMember:(COClusterMember *)arg1 inCluster:(COCluster *)arg2;
- (void)registerForRoleChangesOfMember:(COClusterMember *)arg1 inCluster:(COCluster *)arg2;
@end

