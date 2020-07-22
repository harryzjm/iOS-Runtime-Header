//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface IFDataStore : NSObject
{
    NSURL *_path;
    unsigned long long _schemaVersion;
    struct sqlite3 *_database;
}

+ (id)migrationPlan;
@property(readonly, nonatomic) struct sqlite3 *database; // @synthesize database=_database;
@property(readonly, copy, nonatomic) NSURL *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)updateSchemaVersionNumberTo:(long long)arg1;
- (long long)runMigrationPlan:(id)arg1 toVersion:(unsigned long long)arg2;
- (long long)migrateToVersion:(unsigned long long)arg1 withMigrationPlan:(id)arg2;
- (long long)migrate;
- (long long)configureDatabase;
- (void)_runQuery:(id)arg1 preparation:(CDUnknownBlockType)arg2 step:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)runQuery:(id)arg1 inTransaction:(_Bool)arg2;
- (void)runQuery:(id)arg1;
@property(readonly, nonatomic) long long version;
- (void)clearAll;
- (void)_dropAllOfType:(id)arg1;
- (void)clear;
- (_Bool)_reset;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
