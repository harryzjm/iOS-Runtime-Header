//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Coordination/NSObject-Protocol.h>

@class COClusterMember, COClusterRole, NSString;

@protocol COClusterRoleMonitorServiceInterface <NSObject>
- (void)unregisterForSnapshotChangesInCluster:(NSString *)arg1;
- (void)registerForSnapshotChangesInCluster:(NSString *)arg1;
- (void)unregisterForMemberChangesWithRole:(COClusterRole *)arg1 inCluster:(NSString *)arg2;
- (void)registerForMemberChangesWithRole:(COClusterRole *)arg1 inCluster:(NSString *)arg2;
- (void)unregisterForRoleChangesOfMember:(COClusterMember *)arg1 inCluster:(NSString *)arg2;
- (void)registerForRoleChangesOfMember:(COClusterMember *)arg1 inCluster:(NSString *)arg2;
@end

