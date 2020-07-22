//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCCKPrivateDatabase, NSMutableArray;
@protocol FCCKDatabaseMigrator;

@interface FCCKDatabaseMigrationOperation
{
    FCCKPrivateDatabase *_database;
    id <FCCKDatabaseMigrator> _migrator;
    CDUnknownBlockType _migrationCompletionHandler;
    NSMutableArray *_resultZoneIDsEligibleForDeletion;
    NSMutableArray *_resultRecordIDsEligibleForDeletion;
}

@property(retain, nonatomic) NSMutableArray *resultRecordIDsEligibleForDeletion; // @synthesize resultRecordIDsEligibleForDeletion=_resultRecordIDsEligibleForDeletion;
@property(retain, nonatomic) NSMutableArray *resultZoneIDsEligibleForDeletion; // @synthesize resultZoneIDsEligibleForDeletion=_resultZoneIDsEligibleForDeletion;
@property(copy, nonatomic) CDUnknownBlockType migrationCompletionHandler; // @synthesize migrationCompletionHandler=_migrationCompletionHandler;
@property(retain, nonatomic) id <FCCKDatabaseMigrator> migrator; // @synthesize migrator=_migrator;
@property(retain, nonatomic) FCCKPrivateDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (void)_migrateZoneWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_migrateZoneNames:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)operationWillFinishWithError:(id)arg1;
- (_Bool)canRetryWithError:(id)arg1 retryAfter:(id *)arg2;
- (void)performOperation;
- (void)prepareOperation;
- (_Bool)validateOperation;

@end
