//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSExpression, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLRTreeIndexQueryIntermediate
{
    NSSQLEntity *_entity;
    NSExpression *_indexName;
    NSArray *_properties;
    NSArray *_ranges;
}

- (id)generateSQLStringInContext:(id)arg1;
- (void)dealloc;
- (id)initForIndexNamed:(id)arg1 onEntity:(id)arg2 properties:(id)arg3 ranges:(id)arg4 inScope:(id)arg5;

@end

