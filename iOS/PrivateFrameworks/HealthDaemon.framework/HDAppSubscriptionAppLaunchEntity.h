//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDAppSubscriptionAppLaunchEntity
{
}

+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)tableAliases;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)_predicateForBundleID:(id)arg1;
+ (id)_launchTimesWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)removeBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)launchTimeForBundleID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)setLaunchTime:(id)arg1 forBundleID:(id)arg2 profile:(id)arg3 error:(id *)arg4;

@end

