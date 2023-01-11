//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDWorkoutSessionEntity
{
}

+ (id)privateSubEntities;
+ (long long)protectionClass;
+ (id)foreignKeys;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;
+ (id)sessionIdentifierForRecoveryInProfile:(id)arg1 error:(id *)arg2;
+ (id)sessionsExcludingIdentifiers:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)sessionsForSource:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)createSessionWithIdentifier:(id)arg1 source:(id)arg2 configuration:(id)arg3 state:(long long)arg4 profile:(id)arg5 error:(id *)arg6;
+ (id)lookupSessionWithIdentifier:(id)arg1 profile:(id)arg2 error:(id *)arg3;
- (_Bool)finishWithTransaction:(id)arg1 error:(id *)arg2;
- (id)workoutEventsInTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)insertWorkoutEvent:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (_Bool)setRequestedTargetState:(long long)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)requestedTargetStateWithTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setState:(long long)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)stateWithTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setAssociatedBuilder:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)associatedBuilderWithTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setSource:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)sourceWithTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setClientApplicationIdentifier:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)clientApplicationIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)setClientBundleIdentifier:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)clientBundleIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)setHasFailed:(_Bool)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)hasFailedInTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setEndDate:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)endDateInTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setStartDate:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)startDateInTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setWorkoutConfiguration:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)workoutConfigurationWithTransaction:(id)arg1 error:(id *)arg2;

@end

