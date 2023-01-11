//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSPersistentContainer.h>

@class NSArray, NSCloudKitMirroringDelegateOptions, NSDate, NSMutableArray, NSPersistentHistoryToken, NSPersistentStore, NSSet, NSString, RCDatabaseMetadata;

__attribute__((visibility("hidden")))
@interface RCPersistentContainer : NSPersistentContainer
{
    NSPersistentStore *_cloudStore;
    NSArray *_cloudStores;
    NSString *_cloudStoreIdentifier;
    NSString *_transactionAuthor;
    NSSet *_relevantProperties;
    RCDatabaseMetadata *_metadata;
    NSCloudKitMirroringDelegateOptions *_mirroringOptions;
    NSPersistentHistoryToken *_currentHistoryToken;
    NSPersistentHistoryToken *_latestHistoryToken;
    NSMutableArray *_transactionsBuffer;
    NSArray *_contextsToNotify;
    NSDate *_changeNotificationDate;
}

+ (id)newObjectModel;
+ (id)mirroringContainer;
+ (id)sharedContainer;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSCloudKitMirroringDelegateOptions *mirroringOptions; // @synthesize mirroringOptions=_mirroringOptions;
@property(readonly, nonatomic) RCDatabaseMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSPersistentStore *cloudStore; // @synthesize cloudStore=_cloudStore;
- (void)_migrateDatabaseIfNecessary:(id)arg1;
- (id)_legacyRecordingWithUniqueID:(id)arg1 context:(id)arg2;
- (id)_cloudRecordingsInContext:(id)arg1;
- (id)_fetchLegacyRecordingsForMigrationWithContext:(id)arg1;
- (void)_deleteOrphanedEntityRevisionsWithContext:(id)arg1;
- (id)_valueForDatabaseProperty:(id)arg1 context:(id)arg2;
- (void)_handleRemoteChangeNotification:(id)arg1;
- (void)_handleRemoteChangeNotificationOnMainQueue:(id)arg1;
- (_Bool)_isRelevantTransaction:(id)arg1;
- (id)_nextTransactionAfterToken:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)newContextWithConcurrencyType:(unsigned long long)arg1;
- (id)_initWithMirroring:(_Bool)arg1 useXPCStore:(_Bool)arg2;

@end
