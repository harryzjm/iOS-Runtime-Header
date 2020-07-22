//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AWDServerConnection;

@interface AWDLogger
{
    AWDServerConnection *_awdServer;
}

+ (id)instance;
@property(retain, nonatomic) AWDServerConnection *awdServer; // @synthesize awdServer=_awdServer;
- (void).cxx_destruct;
- (void)gizmoDatabaseMigrationFailure;
- (void)bootstrapGizmo:(unsigned long long)arg1;
- (void)uninitializedDatabaseSave;
- (void)syncFailure:(unsigned int)arg1;
- (void)syncSuccess:(unsigned long long)arg1 withDownloadRecordCount:(unsigned long long)arg2;
- (void)entitlementRejection:(int)arg1;
- (void)callAddedWithNilUuid:(unsigned long long)arg1 withCallStatus:(unsigned long long)arg2;
- (void)deleteAll:(unsigned long long)arg1;
- (void)databaseSaveError:(long long)arg1 withTableName:(id)arg2;
- (void)databaseMigrationResult:(_Bool)arg1 oldVersion:(long long)arg2 newVersion:(long long)arg3;
- (void)commCenterMigrationResult:(_Bool)arg1 withMigratedCallCount:(unsigned long long)arg2;
- (void)submitMetric:(id)arg1 withId:(unsigned int)arg2;
- (id)init;

@end

