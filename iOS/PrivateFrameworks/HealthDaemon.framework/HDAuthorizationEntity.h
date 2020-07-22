//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDAuthorizationEntity
{
}

+ (id)propertyForSyncProvenance;
+ (id)uniquedColumns;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)_predicateForTypes:(id)arg1;
+ (id)_predicateForType:(id)arg1;
+ (id)_predicateForSourceEntities:(id)arg1 types:(id)arg2;
+ (id)_predicateForBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)_predicateForSourceEntities:(id)arg1;
+ (void)_addAuthorizationWithRow:(struct HDSQLiteRow *)arg1 toCodableCollection:(id)arg2;
+ (id)_propertiesForCodableAuthorization;
+ (_Bool)_resetAuthorizationStatusesWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)_setAuthorizationStatuses:(id)arg1 authorizationRequests:(id)arg2 sourceEntity:(id)arg3 dateModified:(id)arg4 syncProvenance:(long long)arg5 objectAnchor:(long long)arg6 database:(id)arg7 error:(id *)arg8;
+ (_Bool)_insertAuthorizationWithSourceIdentifier:(long long)arg1 dataTypeCode:(long long)arg2 authorizationStatus:(long long)arg3 authorizationRequest:(long long)arg4 modificationDate:(double)arg5 syncProvenance:(long long)arg6 objectAnchor:(long long)arg7 modificationEpoch:(id)arg8 database:(id)arg9 error:(id *)arg10;
+ (_Bool)_insertCodableAuthorizations:(id)arg1 sourceEntity:(id)arg2 syncProvenance:(long long)arg3 objectAnchor:(unsigned long long)arg4 database:(id)arg5 error:(id *)arg6;
+ (_Bool)_insertCodableSourceAuthorizations:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)resetAllAuthorizationStatusesWithProfile:(id)arg1 error:(id *)arg2;
+ (_Bool)resetAuthorizationStatusesForBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)authorizationRecordsBySourceForType:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)setAuthorizationStatuses:(id)arg1 authorizationRequests:(id)arg2 sourceEntity:(id)arg3 profile:(id)arg4 error:(id *)arg5;
+ (id)_maxObjectPersistentIDForProfile:(id)arg1 error:(id *)arg2;
+ (_Bool)setAuthorizationStatuses:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)modificationDateForSourceEntity:(id)arg1 type:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)authorizationRecordsByTypeForBundleIdentifier:(id)arg1 types:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)authorizationStatusesForBundleIdentifier:(id)arg1 types:(id)arg2 profile:(id)arg3 error:(id *)arg4;

@end

