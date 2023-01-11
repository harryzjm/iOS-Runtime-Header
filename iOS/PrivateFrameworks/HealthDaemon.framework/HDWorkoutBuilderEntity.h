//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDWorkoutBuilderEntity
{
}

+ (id)privateSubEntities;
+ (long long)protectionClass;
+ (id)foreignKeys;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;
+ (id)finishWorkoutBuilderWithIdentifier:(id)arg1 dateInterval:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)discardBuilderWithIdentifier:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)createEntityForBuilderConfiguration:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)workoutBuilderEntitiesExcludingSessions:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)workoutBuilderEntitiesForSource:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)_workoutBuilderEntitiesForPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)workoutBuilderEntityWithIdentifier:(id)arg1 profile:(id)arg2 error:(id *)arg3;
- (_Bool)enumerateDataSourcesForProfile:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)removeDataSourceWithIdentifier:(id)arg1 profile:(id)arg2 error:(id *)arg3;
- (_Bool)setArchivedState:(id)arg1 forDataSourceIdentifier:(id)arg2 profile:(id)arg3 error:(id *)arg4;
- (_Bool)enumerateStatisticsInTransaction:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)storeStatisticsCalculator:(id)arg1 anchor:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
- (_Bool)deleteStatisticsForType:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)workoutEventsInTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)insertWorkoutEvent:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)_queryForAssociatedSamplePropertyEnumerationInTransaction:(id)arg1 predicate:(id)arg2;
- (_Bool)_enumerateAssociatedSamplePropertiesInTransaction:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)pruneAssociatedSamplesToDateInterval:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (_Bool)_setupForEnumerationOfType:(id)arg1 interval:(id)arg2 profile:(id)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;
- (_Bool)_setupForEnumerationOfType:(id)arg1 interval:(id)arg2 transaction:(id)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;
- (id)_predicateForAssociatedSamplesOfType:(id)arg1 interval:(id)arg2 associatedSampleTableName:(id)arg3 transaction:(id)arg4 error:(id *)arg5;
- (id)_createTemporaryProtectedAssociatedSampleListInTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)enumerateAssociatedSamplesOfType:(id)arg1 interval:(id)arg2 profile:(id)arg3 error:(id *)arg4 sampleHandler:(CDUnknownBlockType)arg5;
- (_Bool)enumerateAssociatedSampleValuesOfType:(id)arg1 interval:(id)arg2 profile:(id)arg3 error:(id *)arg4 sampleHandler:(CDUnknownBlockType)arg5;
- (_Bool)enumerateAssociatedUUIDsWithTransaction:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (long long)associateObject:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (_Bool)setWorkoutConfiguration:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (_Bool)setDeviceEntity:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)metadataWithTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setMetadata:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (_Bool)setQuantityTypesIncludedWhilePaused:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)quantityTypesIncludedWhilePausedInTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setDataInterval:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)dataIntervalInTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setEndDate:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)endDateInTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setStartDate:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)startDateInTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setSessionIdentifier:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)sessionIdentifierWithTransaction:(id)arg1 error:(id *)arg2;
- (id)configurationWithTransaction:(id)arg1 error:(id *)arg2;

@end
