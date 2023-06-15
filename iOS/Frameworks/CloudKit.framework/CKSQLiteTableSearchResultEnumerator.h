//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class CKSQLiteCompiledStatement, CKSQLiteTable, NSError, NSString;

@interface CKSQLiteTableSearchResultEnumerator : NSEnumerator
{
    CKSQLiteTable *_table;
    NSString *_groupName;
    NSString *_tableName;
    NSError *_error;
    id _entry;
    _Bool _enumerationStarted;
    CKSQLiteCompiledStatement *_statement;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKSQLiteCompiledStatement *statement; // @synthesize statement=_statement;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)nextObject;
- (id)currentObject;
- (void)invalidate;
- (void)dealloc;
- (id)initWithTable:(id)arg1 statement:(id)arg2;
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;

@end

