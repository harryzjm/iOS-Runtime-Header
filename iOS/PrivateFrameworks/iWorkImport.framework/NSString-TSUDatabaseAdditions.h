//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (TSUDatabaseAdditions)
+ (id)tsu_stringWithSqlStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
- (_Bool)tsu_bindToSqlStatement:(struct sqlite3_stmt *)arg1 index:(int)arg2 error:(id *)arg3;
- (id)tsu_initWithSqlStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
@end

