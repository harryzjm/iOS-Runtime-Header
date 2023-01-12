//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnection, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteEntity : NSObject
{
    AMSSQLiteConnection *_connection;
    long long _persistentID;
}

+ (_Bool)_insertValues:(id)arg1 intoTable:(id)arg2 withPersistentID:(long long)arg3 onConnection:(id)arg4;
+ (Class)memoryEntityClass;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)foreignKeyColumnForTable:(id)arg1;
+ (id)foreignDatabaseTablesToDelete;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)foreignDatabaseColumnForProperty:(id)arg1;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)databaseTable;
+ (id)_aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 onConnection:(id)arg4;
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2;
+ (id)minValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;
+ (id)countForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;
+ (id)anyOnConnection:(id)arg1 predicate:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property(readonly, nonatomic) AMSSQLiteConnection *connection; // @synthesize connection=_connection;
- (_Bool)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2;
- (id)_copyTableClusteredValuesWithValues:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (_Bool)setValuesWithDictionary:(id)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)getValuesForProperties:(id)arg1;
@property(readonly, nonatomic) _Bool existsInDatabase;
- (_Bool)deleteFromDatabase;
- (id)initWithPropertyValues:(id)arg1 onConnection:(id)arg2;
- (id)initWithPersistentID:(long long)arg1 onConnection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

