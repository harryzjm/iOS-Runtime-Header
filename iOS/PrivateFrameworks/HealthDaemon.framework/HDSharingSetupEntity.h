//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDSharingSetupEntity
{
}

+ (_Bool)enumerateSharesWithProfile:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)_sampleTypesForSetupWithPersistentID:(long long)arg1 database:(id)arg2 error:(id *)arg3;
+ (_Bool)createShareWithProfile:(id)arg1 identifier:(id)arg2 predicate:(id)arg3 error:(id *)arg4;
+ (id)privateSubEntities;
+ (long long)protectionClass;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;

@end

