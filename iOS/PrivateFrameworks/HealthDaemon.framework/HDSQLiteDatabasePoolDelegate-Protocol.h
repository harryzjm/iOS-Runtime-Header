//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDSQLiteDatabase, HDSQLiteDatabasePool, NSArray;

@protocol HDSQLiteDatabasePoolDelegate <NSObject>
- (void)databasePool:(HDSQLiteDatabasePool *)arg1 didFlushDatabases:(NSArray *)arg2;
- (HDSQLiteDatabase *)newDatabaseForDatabasePool:(HDSQLiteDatabasePool *)arg1 error:(id *)arg2;
@end

