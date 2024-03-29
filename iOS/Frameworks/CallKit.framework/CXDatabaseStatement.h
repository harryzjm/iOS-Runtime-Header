//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CXDatabaseStatement : NSObject
{
    struct sqlite3_stmt *_statement;
    struct sqlite3 *_database;
}

@property(nonatomic) struct sqlite3 *database; // @synthesize database=_database;
@property(nonatomic) struct sqlite3_stmt *statement; // @synthesize statement=_statement;
- (_Bool)processResultsWithExpectedColumnCount:(long long)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)bindText:(const char *)arg1 ofLength:(int)arg2 atIndex:(int)arg3 error:(id *)arg4;
- (_Bool)bindInt64:(long long)arg1 atIndex:(int)arg2 error:(id *)arg3;
- (_Bool)bind:(id)arg1 error:(id *)arg2;
- (_Bool)executeWithExpectedColumnCount:(long long)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)executeWithError:(id *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithSQL:(id)arg1 database:(id)arg2 error:(id *)arg3;

@end

