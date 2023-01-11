//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ML3Container, ML3Predicate, NSArray;

@interface ML3ContainerQuery
{
    ML3Predicate *_containerPredicate;
    ML3Container *_container;
    NSArray *_limitedPersistentIDs;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *limitedPersistentIDs; // @synthesize limitedPersistentIDs=_limitedPersistentIDs;
@property(readonly, nonatomic) ML3Container *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(_Bool)arg2;
- (id)selectPersistentIDsSQLAndPropertiesForResultSet:(id)arg1 ordered:(_Bool)arg2;
- (id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2;
- (unsigned long long)countOfEntities;
- (unsigned long long)countOfDistinctRowsForColumn:(id)arg1;
- (_Bool)hasEntities;
@property(readonly, nonatomic) _Bool requiresSmartLimiting;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityClass:(Class)arg1 container:(id)arg2 predicate:(id)arg3 orderingTerms:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

