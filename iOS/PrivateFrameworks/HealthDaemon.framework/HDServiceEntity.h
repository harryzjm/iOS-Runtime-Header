//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDServiceEntity
{
}

+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (id)_servicesInDatabase:(id)arg1 profile:(id)arg2 removals:(id *)arg3;
+ (_Bool)setHealthUpdatesEnabled:(_Bool)arg1 forDevice:(id)arg2 inDatabase:(id)arg3 error:(id *)arg4;
+ (_Bool)healthUpdatesEnabledForDevice:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
+ (id)allServicesWithProfile:(id)arg1 error:(id *)arg2;
+ (_Bool)deleteService:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)insertOrUpdateService:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)_servicePredicate:(id)arg1;
+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)tableAliases;
+ (id)databaseTable;

@end

