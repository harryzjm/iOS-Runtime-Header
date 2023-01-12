//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDCachedSecureCKRecordEntity
{
}

+ (_Bool)synchronizeRecordsWithProfile:(id)arg1 error:(id *)arg2;
+ (_Bool)deleteRecordWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 zoneName:(id)arg3 ownerName:(id)arg4 recordName:(id)arg5 profile:(id)arg6 error:(id *)arg7;
+ (id)protectedRecordDataForUnprotectedEntity:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
+ (_Bool)insertOrUpdateWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 zoneName:(id)arg3 ownerName:(id)arg4 recordData:(id)arg5 recordName:(id)arg6 profile:(id)arg7 error:(id *)arg8;
+ (_Bool)insertOrUpdateWithRecordID:(long long)arg1 recordData:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)updateWithRecordData:(id)arg1 recordID:(long long)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (id)insertWithRecordID:(long long)arg1 recordData:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (long long)protectionClass;
+ (id)databaseTable;

@end
