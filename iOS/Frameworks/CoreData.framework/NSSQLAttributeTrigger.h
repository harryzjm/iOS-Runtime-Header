//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableString, NSPredicate, NSSQLAttribute, NSSQLEntity, NSSQLRelationship, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLAttributeTrigger : NSObject
{
    NSPredicate *_predicate;
    NSString *_predicateString;
    NSSQLEntity *_entity;
    NSSQLAttribute *_attribute;
    NSSQLRelationship *_relationship;
    NSSQLEntity *_destinationEntity;
    NSArray *_destinationAttributes;
    NSMutableString *_mToManyInnerFetchWhereClause;
    NSMutableString *_mToManyDecrementWhenClause;
    NSMutableString *_mToManyIncrementWhenClause;
    NSMutableString *_mOfClause;
    NSMutableString *_mOldMatchingClause;
    NSMutableString *_mNewMatchingClause;
    NSMutableString *_mColumnChangedClause;
    NSMutableArray *_mSqlDropStrings;
    NSMutableArray *_mBulkChangeStrings;
    NSArray *_insertSQLStrings;
}

@property(readonly, nonatomic) NSArray *insertSQLStrings; // @synthesize insertSQLStrings=_insertSQLStrings;
- (_Bool)validate:(id *)arg1;
@property(readonly, nonatomic) NSArray *dropSQLStrings;
@property(readonly, nonatomic) NSArray *bulkUpdateSQLStrings;
- (_Bool)isEqualToExtension:(id)arg1;
- (void)dealloc;
- (id)initWithObjectFromUserInfo:(id)arg1 onAttributeNamed:(id)arg2 onEntity:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

