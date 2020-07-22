//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3DatabaseConnection, NSString;

@interface ML3DatabaseStatement : NSObject
{
    NSString *_sql;
    _Bool _clearBindingsAfterRunning;
    _Bool _isExecuting;
    ML3DatabaseConnection *_connection;
    struct sqlite3_stmt *_sqliteStatement;
}

@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) _Bool clearBindingsAfterRunning; // @synthesize clearBindingsAfterRunning=_clearBindingsAfterRunning;
@property(readonly, nonatomic) struct sqlite3_stmt *sqliteStatement; // @synthesize sqliteStatement=_sqliteStatement;
@property(readonly, nonatomic) ML3DatabaseConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)bindValuesInArray:(id)arg1;
- (void)bindValuesForParameterNames:(id)arg1;
- (void)bindValue:(id)arg1 forParameterAtPosition:(int)arg2;
- (void)bindUTF8StringNoCopy:(const char *)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3;
- (void)bindUTF8StringNoCopy:(const char *)arg1 forParameterAtPosition:(int)arg2;
- (void)bindUTF8String:(const char *)arg1 forParameterAtPosition:(int)arg2;
- (void)bindBytesNoCopy:(const void *)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3;
- (void)bindBytes:(const void *)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3;
- (void)bindNullForParameterAtPosition:(int)arg1;
- (void)bindDouble:(double)arg1 forParameterAtPosition:(int)arg2;
- (void)bindInt64:(long long)arg1 forParameterAtPosition:(int)arg2;
- (void)bindInt:(int)arg1 forParameterAtPosition:(int)arg2;
- (int)clearBindings;
- (_Bool)isBusy;
- (_Bool)isReadOnly;
- (int)finalizeStatement;
- (int)reset;
- (int)step;
@property(readonly, nonatomic) NSString *sql;
- (id)description;
- (void)dealloc;
- (id)initWithSQLiteStatement:(struct sqlite3_stmt *)arg1 SQL:(id)arg2 connection:(id)arg3;

@end

