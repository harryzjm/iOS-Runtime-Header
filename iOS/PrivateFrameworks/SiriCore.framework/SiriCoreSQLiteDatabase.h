//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSString;

@interface SiriCoreSQLiteDatabase : NSObject
{
    struct sqlite3 *_handle;
    NSCache *_cachedSQLiteStatementsByQueryString;
    NSString *_path;
    long long _dataProtectionClass;
    long long _options;
}

@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(readonly, nonatomic) long long dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (_Bool)executeQueryString:(id)arg1 error:(id *)arg2;
- (_Bool)executeQuery:(id)arg1 error:(id *)arg2;
- (id)executeQuery:(id)arg1;
- (_Bool)closeWithError:(id *)arg1;
- (_Bool)openWithError:(id *)arg1;
- (id)initWithPath:(id)arg1 dataProtectionClass:(long long)arg2 options:(long long)arg3;
- (_Bool)rollbackTransactionWithError:(id *)arg1;
- (_Bool)commitTransactionWithError:(id *)arg1;
- (_Bool)beginTransactionWithError:(id *)arg1;
- (_Bool)rollbackToSavepointWithName:(id)arg1 error:(id *)arg2;
- (_Bool)releaseSavepointWithName:(id)arg1 error:(id *)arg2;
- (_Bool)savepointWithName:(id)arg1 error:(id *)arg2;
- (_Bool)performQuickCheckWithError:(id *)arg1;
- (_Bool)performIntegrityCheckWithError:(id *)arg1;
- (_Bool)performForeignKeyCheckWithError:(id *)arg1;
- (_Bool)vacuumWithError:(id *)arg1;
- (_Bool)dropIndexWithName:(id)arg1 error:(id *)arg2;
- (_Bool)createIndex:(id)arg1 error:(id *)arg2;
- (_Bool)alterTableWithName:(id)arg1 addColumn:(id)arg2 error:(id *)arg3;
- (_Bool)alterTableWithName:(id)arg1 renameTo:(id)arg2 error:(id *)arg3;
- (_Bool)dropTableWithName:(id)arg1 error:(id *)arg2;
- (_Bool)createTable:(id)arg1 error:(id *)arg2;
- (id)fetchTableWithName:(id)arg1 error:(id *)arg2;
- (id)fetchTableNamesWithError:(id *)arg1;
- (unsigned long long)countValuesInTableWithName:(id)arg1 columnName:(id)arg2 behavior:(long long)arg3 criterion:(id)arg4 range:(id)arg5 error:(id *)arg6;
- (id)selectValuesFromTableWithName:(id)arg1 columnName:(id)arg2 behavior:(long long)arg3 criterion:(id)arg4 order:(id)arg5 range:(id)arg6 error:(id *)arg7;
- (id)selectValueMapsFromTableWithName:(id)arg1 columnNames:(id)arg2 behavior:(long long)arg3 criterion:(id)arg4 order:(id)arg5 range:(id)arg6 error:(id *)arg7;
- (id)selectValueTuplesFromTableWithName:(id)arg1 columnNames:(id)arg2 behavior:(long long)arg3 criterion:(id)arg4 order:(id)arg5 range:(id)arg6 error:(id *)arg7;
- (_Bool)insertIntoTableWithName:(id)arg1 valueMap:(id)arg2 error:(id *)arg3;
- (_Bool)updateTableWithName:(id)arg1 valueMap:(id)arg2 criterion:(id)arg3 error:(id *)arg4;
- (_Bool)deleteFromTableWithName:(id)arg1 criterion:(id)arg2 error:(id *)arg3;

@end
