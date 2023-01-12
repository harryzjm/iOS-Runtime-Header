//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSyncEngineDataSource-Protocol.h>

@class CKSchedulerActivity, CKSyncEngine, NSError, NSOperation;

@protocol CKSyncEngineDataSourceInternal <CKSyncEngineDataSource>

@optional
- (void)syncEngine:(CKSyncEngine *)arg1 didHandleSchedulerActivity:(CKSchedulerActivity *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 willEnqueueOperation:(NSOperation *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 didUpdateAccountStatus:(long long)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 didSaveSubscriptionWithError:(NSError *)arg2;
- (void)syncEngineDidScheduleInitialWork:(CKSyncEngine *)arg1;
- (void)syncEngineDidFetchDatabaseChanges:(CKSyncEngine *)arg1;
@end

