//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSQLWhereIntermediate;

__attribute__((visibility("hidden")))
@interface NSSQLHavingIntermediate
{
    NSSQLWhereIntermediate *_whereClause;
}

- (id)generateSQLStringInContext:(id)arg1;
- (_Bool)isHavingScoped;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;

@end

