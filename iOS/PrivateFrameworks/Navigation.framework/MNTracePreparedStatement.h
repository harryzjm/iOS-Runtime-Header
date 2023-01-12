//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MNTracePreparedStatement : NSObject
{
    struct sqlite3 *_db;
    struct sqlite3_stmt *_preparedStatement;
}

+ (id)preparedStatementForTrace:(id)arg1 statement:(id)arg2 outError:(out id *)arg3;
- (id)debugDescription;
- (_Bool)_prepareStatementForTrace:(id)arg1 statement:(id)arg2 outError:(out id *)arg3;
- (id)columnData:(unsigned long long)arg1;
- (id)columnString:(unsigned long long)arg1;
- (double)columnDouble:(unsigned long long)arg1;
- (int)columnInt:(unsigned long long)arg1;
- (void)bindNull:(unsigned long long)arg1;
- (void)bind:(unsigned long long)arg1 data:(id)arg2;
- (void)bind:(unsigned long long)arg1 string:(id)arg2;
- (void)bind:(unsigned long long)arg1 double:(double)arg2;
- (void)bind:(unsigned long long)arg1 int:(int)arg2;
- (_Bool)clearBindings;
- (_Bool)reset;
- (_Bool)step;
- (_Bool)execute;
- (void)finalize;
- (void)dealloc;
- (id)initForTrace:(id)arg1 statement:(id)arg2 outError:(out id *)arg3;
- (id)init;

@end
