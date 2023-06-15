//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADInMemoryChangeTimestamp, CADObjectID, CADSequenceToken, NSArray, NSDictionary, NSString;

@protocol CADDatabaseInterface
- (void)CADAnalyticsSendEvent:(NSString *)arg1 appendingClientBundleIDToPayload:(NSDictionary *)arg2;
- (void)CADDatabaseGetDefaultAlarmOffsetForAllDay:(_Bool)arg1 reply:(void (^)(int, NSNumber *))arg2;
- (void)CADDatabaseMigrateSubscribedCalendar:(CADObjectID *)arg1 toSource:(CADObjectID *)arg2 reply:(void (^)(int, CADObjectID *))arg3;
- (void)CADDatabaseLastConfirmedSplashScreenVersion:(void (^)(int, unsigned long long))arg1;
- (void)CADDatabaseCanModifyCalendarDatabase:(void (^)(int, _Bool))arg1;
- (void)CADDatabaseCommitDeletes:(NSArray *)arg1 updatesAndInserts:(NSDictionary *)arg2 andFetchChangesSinceTimestamp:(CADInMemoryChangeTimestamp *)arg3 withReply:(void (^)(int, NSDictionary *, NSDictionary *, NSDictionary *, CADInMemoryChangeTimestamp *, _Bool))arg4;
- (void)CADDatabaseRebuildOccurrenceCacheWithReply:(void (^)(int))arg1;
- (void)CADDatabaseSetShowsDeclinedEvents:(_Bool)arg1 reply:(void (^)(int))arg2;
- (void)CADDatabaseExportICSDataForCalendar:(CADObjectID *)arg1 options:(unsigned long long)arg2 reply:(void (^)(int, NSData *))arg3;
- (void)CADDatabaseExportICSDataForCalendarItems:(NSArray *)arg1 options:(unsigned long long)arg2 reply:(void (^)(int, NSData *))arg3;
- (void)CADDatabaseImportEvents:(NSArray *)arg1 fromICSData:(NSArray *)arg2 intoCalendarsWithIDs:(NSArray *)arg3 optionsMask:(unsigned long long)arg4 batchSize:(int)arg5 reply:(void (^)(int, NSArray *))arg6;
- (void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(CADInMemoryChangeTimestamp *)arg1 reply:(void (^)(int, NSDictionary *, NSDictionary *, CADInMemoryChangeTimestamp *, _Bool))arg2;
- (void)CADDatabaseGetChangesSinceSequenceToken:(CADSequenceToken *)arg1 reply:(void (^)(int, NSDictionary *, CADSequenceToken *))arg2;
- (void)CADDatabaseGetSequenceToken:(void (^)(int, CADSequenceToken *))arg1;
- (void)CADDatabaseMarkIndividualChangesConsumed:(NSDictionary *)arg1 reply:(void (^)(int))arg2;
- (void)CADDatabaseConsumeAllChangesUpToToken:(CADSequenceToken *)arg1 except:(NSDictionary *)arg2 reply:(void (^)(int))arg3;
- (void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceToken:(CADSequenceToken *)arg1 reply:(void (^)(int))arg2;
- (void)CADDatabaseFetchObjectChangesForEntityTypes:(NSArray *)arg1 insideObject:(CADObjectID *)arg2 reply:(void (^)(int, _Bool, CADSequenceToken *, NSArray *))arg3;
- (void)CADDatabaseFetchChangedObjectIDs:(void (^)(int, _Bool, CADSequenceToken *, NSDictionary *))arg1;
- (void)CADDatabaseUnregisterForDetailedChangeTracking:(void (^)(int))arg1;
- (void)CADDatabaseRegisterForDetailedChangeTrackingInSource:(CADObjectID *)arg1 reply:(void (^)(int))arg2;
- (void)CADDatabaseGetUUID:(void (^)(int, NSString *))arg1;
@end

