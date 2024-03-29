//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFetchIndexDescription, NSMutableArray, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLIndex : NSObject
{
    NSFetchIndexDescription *_indexDescription;
    NSSQLEntity *_sqlEntity;
    NSMutableArray *_createStrings;
    NSMutableArray *_dropStrings;
    NSMutableArray *_updateStrings;
}

@property(readonly, nonatomic) NSSQLEntity *sqlEntity; // @synthesize sqlEntity=_sqlEntity;
@property(readonly, retain, nonatomic) NSFetchIndexDescription *indexDescription; // @synthesize indexDescription=_indexDescription;
- (_Bool)isUnique;
- (id)bulkUpdateStatementsForStore:(id)arg1;
- (id)dropStatementsForStore:(id)arg1;
- (id)generateStatementsForStore:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initForIndexDescription:(id)arg1 sqlEntity:(id)arg2;

@end

