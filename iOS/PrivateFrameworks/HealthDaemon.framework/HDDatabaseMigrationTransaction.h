//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDHFDataStore, HDSQLiteDatabase, NSArray, NSString, _HKBehavior;
@protocol HDDatabaseMigrationTransactionDelegate;

@interface HDDatabaseMigrationTransaction : NSObject
{
    HDSQLiteDatabase *_unprotectedDatabase;
    HDSQLiteDatabase *_protectedDatabase;
    HDHFDataStore *_HFDataStore;
    _HKBehavior *_behavior;
    NSArray *_schemaProviders;
    id <HDDatabaseMigrationTransactionDelegate> _delegate;
}

+ (id)unprotectedMigrationTransactionForMigrationTransaction:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <HDDatabaseMigrationTransactionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *schemaProviders; // @synthesize schemaProviders=_schemaProviders;
@property(readonly, nonatomic) _HKBehavior *behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) HDHFDataStore *HFDataStore; // @synthesize HFDataStore=_HFDataStore;
@property(readonly, nonatomic) HDSQLiteDatabase *protectedDatabase; // @synthesize protectedDatabase=_protectedDatabase;
@property(readonly, nonatomic) HDSQLiteDatabase *unprotectedDatabase; // @synthesize unprotectedDatabase=_unprotectedDatabase;
@property(readonly, nonatomic) long long defaultProtectionClass;
@property(readonly, copy, nonatomic) NSString *defaultDatabaseName;
@property(readonly, nonatomic) HDSQLiteDatabase *defaultDatabase;
@property(readonly, nonatomic) _Bool isProtectedMigration;
- (id)databaseNameForProtectionClass:(long long)arg1;
- (id)initWithUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2 HFDataStore:(id)arg3 schemaProviders:(id)arg4 behavior:(id)arg5;
- (long long)_migrateFromUserVersion:(long long)arg1 didRequireMigration:(_Bool *)arg2 error:(id *)arg3;
- (_Bool)_migrationRequiredForProtectionClass:(long long)arg1 migrator:(id)arg2 schemaProviders:(id)arg3 error:(id *)arg4;
- (void)_presentRollbackAlertForSchema:(id)arg1 protectionClass:(long long)arg2 foundVersion:(long long)arg3 currentVersion:(long long)arg4;
- (_Bool)_createEntitiesOrAddMigrationStepsForProtectionClass:(long long)arg1 schemaProviders:(id)arg2 migrator:(id)arg3 error:(id *)arg4;
- (_Bool)_createEntitiesForSchemaProvider:(id)arg1 protectionClass:(long long)arg2 migrator:(id)arg3 error:(id *)arg4;
- (_Bool)_createDataTablesInDatabase:(id)arg1 entityClasses:(id)arg2 requiredPrefix:(id)arg3 error:(id *)arg4;
- (void)_enableIncrementalAutovacuumIfNeeded;
- (_Bool)_insertDatabaseIdentifier:(id)arg1 error:(id *)arg2;
- (long long)_createEntitiesWithEntityClasses:(id)arg1 error:(id *)arg2;
- (long long)_migrateOrCreateSchemaWithEntityClasses:(id)arg1 error:(id *)arg2;
- (long long)_verifyDatabaseIdentifiersAreValidWithError:(id *)arg1;
- (long long)migrateOrCreateSchemaWithError:(id *)arg1;

@end
