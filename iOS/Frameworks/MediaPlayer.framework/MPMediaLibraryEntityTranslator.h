//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MPMediaLibraryEntityTranslator : NSObject
{
    NSMutableDictionary *_propertiesToTranslators;
    NSMutableDictionary *_relationshipsToTranslators;
    _Bool _transient;
    Class _MPModelClass;
    struct EntityClass *_entityClass;
    CDUnknownBlockType _allowedItemPredicatesBlock;
    CDUnknownBlockType _entityQueryBlock;
}

+ (struct EntityClass *)MLCoreEntityClassForModelEntityClass:(Class)arg1;
+ (id)translatorForMPModelClass:(Class)arg1;
+ (id)translatorForMPModelClass:(Class)arg1 mlcoreEntityClass:(struct EntityClass *)arg2;
+ (id)translatorForTransientMPModelClass:(Class)arg1;
+ (id)_translatorForMPModelClass:(Class)arg1 mlcoreEntityClass:(struct EntityClass *)arg2 create:(_Bool)arg3 transient:(_Bool)arg4;
@property(copy, nonatomic) CDUnknownBlockType entityQueryBlock; // @synthesize entityQueryBlock=_entityQueryBlock;
@property(copy, nonatomic) CDUnknownBlockType allowedItemPredicatesBlock; // @synthesize allowedItemPredicatesBlock=_allowedItemPredicatesBlock;
@property(readonly, nonatomic, getter=isTransient) _Bool transient; // @synthesize transient=_transient;
@property(readonly, nonatomic) struct EntityClass *entityClass; // @synthesize entityClass=_entityClass;
@property(readonly, nonatomic) Class MPModelClass; // @synthesize MPModelClass=_MPModelClass;
- (void).cxx_destruct;
- (shared_ptr_889ae36a)propertiesQueryForPropertySet:(id)arg1 scopedContainers:(id)arg2 allowedItemIdentifiers:(id)arg3 view:(id)arg4;
- (shared_ptr_e8455ceb)entityQueryForPropertySet:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3 view:(id)arg4;
- (vector_11bc6599)MLCoreSortDescriptorsForModelSortDescriptors:(id)arg1;
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 transient:(_Bool)arg3 usingForeignPropertyBase:(struct ModelPropertyBase *)arg4 relationshipValidationProperties:(const map_8b4f5bcf *)arg5 isValidRelationshipHandler:(CDUnknownBlockType)arg6;
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 transient:(_Bool)arg3 usingForeignPropertyBase:(struct ModelPropertyBase *)arg4;
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 usingForeignPropertyBase:(struct ModelPropertyBase *)arg3;
- (map_8b4f5bcf)propertiesToFetchForPropertyKey:(id)arg1;
- (vector_90d4f7ff)MLCorePropertiesForPropertySet:(id)arg1;
- (vector_90d4f7ff)MLCorePropertiesForPropertySet:(id)arg1 withForeignPropertyBase:(struct ModelPropertyBase *)arg2;
- (id)objectForPropertySet:(id)arg1 entity:(shared_ptr_27513921)arg2 context:(id)arg3;
- (id)objectForPropertySet:(id)arg1 entity:(shared_ptr_27513921)arg2 baseTranslator:(id)arg3 prependKeyPath:(id)arg4 context:(id)arg5;
- (void)mapIdentifierMLProperties:(const map_8b4f5bcf *)arg1 identifierCreationBlock:(CDUnknownBlockType)arg2;
- (id)identifiersForEntity:(shared_ptr_27513921)arg1;
- (id)valueForKeyPath:(id)arg1 forEntity:(shared_ptr_27513921)arg2 context:(id)arg3;
- (map_8b4f5bcf)_propertyMapForKeyPath:(id)arg1 includePropertiesToSort:(_Bool)arg2;
- (struct ModelPropertyBase *)_propertyForKeyPath:(id)arg1;
- (Class)classForRelationshipKey:(id)arg1;
- (id)_propertyTranslatorForKeyPath:(id)arg1;
- (void)mapPropertyKey:(id)arg1 withPropertiesToFetch:(const map_8b4f5bcf *)arg2 propertiesToSort:(const map_8b4f5bcf *)arg3 sortTransformer:(CDUnknownBlockType)arg4 valueTransformer:(CDUnknownBlockType)arg5;
- (void)mapPropertyKey:(id)arg1 withPropertiesToFetch:(const map_8b4f5bcf *)arg2 valueTransformer:(CDUnknownBlockType)arg3;
- (void)mapPropertyKey:(id)arg1 toMLProperty:(struct ModelPropertyBase *)arg2;

@end

