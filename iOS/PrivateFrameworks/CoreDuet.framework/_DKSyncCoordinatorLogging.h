//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKSyncCoordinatorEventNotificationDelegate-Protocol.h>

@protocol OS_dispatch_queue;

@interface _DKSyncCoordinatorLogging : NSObject <_DKSyncCoordinatorEventNotificationDelegate>
{
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

+ (id)sharedInstance;
@property(readonly) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
- (void).cxx_destruct;
- (void)syncCoordinator:(id)arg1 didApplyRemoteDeletionChangeSet:(id)arg2;
- (void)syncCoordinator:(id)arg1 didApplyRemoteAdditionChangeSet:(id)arg2;
- (void)syncCoordinator:(id)arg1 didCreateDeletionChangeSet:(id)arg2;
- (void)syncCoordinator:(id)arg1 didCreateAdditionChangeSet:(id)arg2;
- (void)_syncCoordinatorDidCreateChangeSetOfType:(id)arg1;
- (void)syncCoordinator:(id)arg1 didDeleteRemoteEventsWithCount:(unsigned long long)arg2;
- (void)syncCoordinator:(id)arg1 didAddRemoteEventsWithStreamNameCounts:(id)arg2 events:(id)arg3;
- (void)syncCoordinator:(id)arg1 didInsertLocalDeletionEventsWithCount:(unsigned long long)arg2;
- (void)syncCoordinator:(id)arg1 didInsertLocalAdditionEventsWithStreamNameCounts:(id)arg2;
- (void)_sendDistributedNotificationName:(id)arg1 streamNameCounts:(id)arg2;
- (void)_sendDistributedNotificationName:(id)arg1;
- (void)_sendDistributedNotificationName:(id)arg1 object:(id)arg2 throttledActivityName:(id)arg3;
- (void)_updateSyncCounter:(id)arg1 streamNameCounts:(id)arg2;
- (id)typeValueWithStreamName:(id)arg1;
- (id)portraitStreamNames;
- (id)init;

@end

