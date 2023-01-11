//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDSQLiteDatabase, NSString;

@interface HDSQLiteStatement : NSObject
{
    HDSQLiteDatabase *_database;
    NSString *_sql;
}

@property(readonly, nonatomic) HDSQLiteDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)description;
- (void)finish;
- (_Bool)enumerateStatementWithError:(id *)arg1 bindingHandler:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)performStatementWithError:(id *)arg1 bindingHandler:(CDUnknownBlockType)arg2;
- (id)initWithSQL:(id)arg1 database:(id)arg2;

@end

