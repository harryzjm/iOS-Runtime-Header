//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GEONavdCacheDBWriter
{
    struct sqlite3_stmt *_sqlInsertCache;
    struct sqlite3_stmt *_sqlDeleteRowForRowID;
    struct sqlite3_stmt *_sqlUpdateCache;
    struct sqlite3_stmt *_sqlDeleteAllRows;
}

- (void)performTableCreationTasks;
- (void)performStatementPreparationTasks;
- (void)_deleteAllRows;
- (_Bool)_updateRowId:(long long)arg1 withKey:(id)arg2 value:(id)arg3;
- (void)_deleteRowsWithRowIDs:(id)arg1;
- (long long)_insertWithKey:(id)arg1 value:(id)arg2;
- (void)_openIfNecessary;
- (void)_createCacheTable;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

