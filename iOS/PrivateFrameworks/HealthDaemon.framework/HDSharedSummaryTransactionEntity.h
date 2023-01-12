//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDHealthEntitySchema-Protocol.h>

@class NSString;

@interface HDSharedSummaryTransactionEntity <HDHealthEntitySchema>
{
}

+ (id)pruneWithProfile:(id)arg1 nowDate:(id)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
+ (_Bool)deleteAllEntriesWithDatabaseTransaction:(id)arg1 error:(id *)arg2;
+ (id)transactionEntityWithUUID:(id)arg1 databaseTransaction:(id)arg2 error:(id *)arg3;
+ (_Bool)enumerateTransactionsWithDatabaseTransaction:(id)arg1 includeNonCommitted:(_Bool)arg2 error:(id *)arg3 enumerationHandler:(CDUnknownBlockType)arg4;
+ (id)insertWithUUID:(id)arg1 sourceDevice:(id)arg2 databaseTransaction:(id)arg3 error:(id *)arg4;
+ (long long)protectionClass;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;
- (_Bool)unit_testSetCreationDate:(id)arg1 databaseTransaction:(id)arg2 error:(id *)arg3;
- (id)creationDateInDatabaseTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)committedInDatabaseTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setCommitted:(_Bool)arg1 databaseTransaction:(id)arg2 error:(id *)arg3;
- (id)sourceDeviceIdentiferInDatabaseTransaction:(id)arg1 error:(id *)arg2;
- (id)uuidInDatabaseTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)deleteWithDatabaseTransaction:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
