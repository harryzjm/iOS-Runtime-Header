//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDDataTypeSourceOrderEntity
{
}

+ (id)propertyForSyncProvenance;
+ (id)orderedSourceIDsForType:(id)arg1 userOrdered:(_Bool *)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)_saveOrderedSourceIDs:(id)arg1 dataTypeCode:(long long)arg2 userOrdered:(_Bool)arg3 syncProvenance:(long long)arg4 database:(id)arg5 error:(id *)arg6;
+ (_Bool)saveOrderedSourceIDs:(id)arg1 type:(id)arg2 userOrdered:(_Bool)arg3 profile:(id)arg4 error:(id *)arg5;
+ (id)joinClausesForProperty:(id)arg1;
+ (long long)protectionClass;
+ (id)columnsDefinition;
+ (id)tableAliases;
+ (id)databaseTable;

@end
