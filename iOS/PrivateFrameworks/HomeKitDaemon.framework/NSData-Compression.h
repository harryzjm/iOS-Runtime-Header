//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (Compression)
+ (id)dataWithSQLite3Column:(struct sqlite3_stmt *)arg1 column:(int)arg2;
+ (id)dataWithSQLite3ColumnNoCopy:(struct sqlite3_stmt *)arg1 column:(int)arg2;
- (id)uncompress;
- (id)compress;
- (id)generateSHA1;
- (id)stringInHexFormat;
@end
