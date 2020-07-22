//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDAppSubscriptionEntity
{
}

+ (id)uniquedColumns;
+ (id)columnsDefinition;
+ (id)tableAliases;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)_predicateForBundleIdentifier:(id)arg1;
+ (id)_predicateForDataCode:(long long)arg1;
+ (id)_predicateForBundleID:(id)arg1 dataCode:(long long)arg2;
+ (_Bool)_getSubscriptionsWithArray:(id)arg1 predicate:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)setLaunchTimeHysteresis:(id)arg1 forBundleID:(id)arg2 dataCode:(long long)arg3 profile:(id)arg4 error:(id *)arg5;
+ (_Bool)setLastAnchor:(id)arg1 lastAckTime:(id)arg2 forBundleID:(id)arg3 dataCode:(long long)arg4 profile:(id)arg5 error:(id *)arg6;
+ (id)subscriptionForBundleID:(id)arg1 dataCode:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)allSubscriptionsForBundleID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)allSubscriptionsForType:(long long)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)removeSubscriptionsWithBundleID:(id)arg1 dataCode:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)addSubscriptionWithBundleID:(id)arg1 dataCode:(long long)arg2 updateFrequency:(unsigned long long)arg3 profile:(id)arg4 error:(id *)arg5;

@end

