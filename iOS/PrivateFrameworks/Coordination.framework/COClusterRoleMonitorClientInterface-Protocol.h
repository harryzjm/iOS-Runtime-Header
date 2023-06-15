//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Coordination/NSObject-Protocol.h>

@class COCluster, COClusterMember, COClusterRole, NSSet;

@protocol COClusterRoleMonitorClientInterface <NSObject>
- (void)snapshotOfCluster:(COCluster *)arg1 didChangeTo:(NSSet *)arg2;
- (void)membersWithRole:(COClusterRole *)arg1 inCluster:(COCluster *)arg2 didChangeTo:(NSSet *)arg3;
- (void)roleOfMember:(COClusterMember *)arg1 inCluster:(COCluster *)arg2 didChangeTo:(COClusterRole *)arg3;
@end

