//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookDataStore/NSObject-Protocol.h>

@class NSArray;
@protocol BCCloudDataSyncProvider;

@protocol BCCloudDataSyncProviderDelegate <NSObject>
- (void)syncProvider:(id <BCCloudDataSyncProvider>)arg1 failedRecordIDs:(NSArray *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)syncProvider:(id <BCCloudDataSyncProvider>)arg1 resolveConflictsForRecords:(NSArray *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)syncProvider:(id <BCCloudDataSyncProvider>)arg1 updateSyncGenerationFromCloudData:(NSArray *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)syncProvider:(id <BCCloudDataSyncProvider>)arg1 removeCloudDataForIDs:(NSArray *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

