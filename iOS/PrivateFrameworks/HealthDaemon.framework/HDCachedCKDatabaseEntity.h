//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDCachedCKDatabaseEntity
{
}

+ (_Bool)deleteDatabaseWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)serverChangeTokenForContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)insertIfDoesNotExistWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 userRecordName:(id)arg3 serverChangeToken:(id)arg4 profile:(id)arg5 error:(id *)arg6;
+ (_Bool)insertOrUpdateWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 userRecordName:(id)arg3 serverChangeToken:(id)arg4 profile:(id)arg5 error:(id *)arg6;
+ (_Bool)deleteDatabasesNotMatchingUserRecordName:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)entityForContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 userRecordName:(id)arg3 transaction:(id)arg4 shouldCreate:(_Bool)arg5 error:(id *)arg6;
+ (_Bool)updateServerChangeToken:(id)arg1 containerIdentifier:(id)arg2 databaseScope:(long long)arg3 transaction:(id)arg4 error:(id *)arg5;
+ (id)insertWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 userRecordName:(id)arg3 serverChangeToken:(id)arg4 transaction:(id)arg5 error:(id *)arg6;
+ (id)uniquedColumns;
+ (long long)protectionClass;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;

@end
