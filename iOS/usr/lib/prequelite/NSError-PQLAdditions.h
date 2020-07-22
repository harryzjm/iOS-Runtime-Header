//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (PQLAdditions)
+ (id)errorWithSqliteCode:(int)arg1 andMessage:(id)arg2;
+ (id)errorForDB:(struct sqlite3 *)arg1 SQL:(id)arg2;
+ (id)errorForDB:(struct sqlite3 *)arg1 stmt:(struct sqlite3_stmt *)arg2;
+ (id)errorForDB:(struct sqlite3 *)arg1;
- (_Bool)isSqliteErrorCode:(long long)arg1;
- (id)sqliteStatement;
- (long long)extendedSqliteCode;
@end

