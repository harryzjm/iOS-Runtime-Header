//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDCorrelationSampleEntity
{
}

+ (_Bool)isConcreteEntity;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (_Bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (id)_objectsWithIDs:(id)arg1 profile:(id)arg2;
+ (id)deleteStatementsForRelatedEntitiesWithTransaction:(id)arg1;
+ (_Bool)acceptsObject:(id)arg1;
+ (id)createTableSQL;
+ (_Bool)requiresSampleTypePredicate;
+ (_Bool)isBackedByTable;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
- (_Bool)deleteFromDatabase:(id)arg1 error:(id *)arg2;

@end
