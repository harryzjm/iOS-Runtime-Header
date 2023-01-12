//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class CKSQLite, NSArray, NSMutableArray, NSString;

@interface CKSQLiteEnumerator : NSEnumerator
{
    CKSQLite *_database;
    NSArray *_columns;
    NSString *_tableName;
    NSString *_whereSQL;
    NSArray *_bindings;
    NSArray *_orderBy;
    NSMutableArray *_objects;
    unsigned long long _index;
    unsigned long long _fetchOffset;
    CDUnknownBlockType _objectTranslator;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType objectTranslator; // @synthesize objectTranslator=_objectTranslator;
- (id)nextObject;
- (id)initWithDatabase:(id)arg1 columns:(id)arg2 from:(id)arg3 where:(id)arg4 bindings:(id)arg5 orderBy:(id)arg6;

@end
