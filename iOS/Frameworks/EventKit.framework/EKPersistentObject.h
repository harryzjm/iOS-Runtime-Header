//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKit/EKFrozenMeltedPair-Protocol.h>
#import <EventKit/EKProtocolObject-Protocol.h>

@class EKEventStore, EKObjectID, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@interface EKPersistentObject : NSObject <EKProtocolObject, EKFrozenMeltedPair>
{
    struct _opaque_pthread_mutex_t _lock;
    EKEventStore *_eventStore;
    EKObjectID *_objectID;
    NSMutableSet *_dirtyProperties;
    unsigned int _flags;
    NSMutableDictionary *_loadedProperties;
    NSMutableDictionary *_committedProperties;
}

+ (_Bool)_shouldRetainPropertyForKey:(id)arg1;
+ (id)_relationForKey:(id)arg1;
+ (Class)meltedClass;
+ (Class)frozenClass;
+ (id)propertiesUnavailableForPartialObjects;
+ (id)relations;
+ (id)defaultPropertiesToLoad;
@property(retain, nonatomic) NSMutableDictionary *committedProperties; // @synthesize committedProperties=_committedProperties;
- (void).cxx_destruct;
- (id)dump;
- (void)_loadDefaultPropertiesIfNeeded;
- (void)_takeValuesForDefaultPropertyKeys:(id)arg1 values:(id)arg2;
- (void)takeValuesForDefaultPropertyKeys:(id)arg1 values:(id)arg2;
- (void)_takeValues:(id)arg1 forKeys:(id)arg2;
- (void)takeValues:(id)arg1 forKeys:(id)arg2;
- (_Bool)_loadChildIdentifiersForKey:(id)arg1 values:(id *)arg2;
- (_Bool)_loadRelationForKey:(id)arg1 value:(id *)arg2;
- (void)primitiveSetDataValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveDataValueForKey:(id)arg1;
- (void)primitiveSetURLValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveURLValueForKey:(id)arg1;
- (void)primitiveSetStringValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveStringValueForKey:(id)arg1;
- (id)_loadStringValueForKey:(id)arg1;
- (void)primitiveSetDateValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveDateValueForKey:(id)arg1;
- (void)primitiveSetBoolValue:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)primitiveBoolValueForKey:(id)arg1;
- (void)primitiveSetDoubleValue:(double)arg1 forKey:(id)arg2;
- (double)primitiveDoubleValueForKey:(id)arg1;
- (void)primitiveSetIntValue:(int)arg1 forKey:(id)arg2;
- (int)primitiveIntValueForKey:(id)arg1;
- (void)primitiveSetNumberValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveNumberValueForKey:(id)arg1;
- (void)_primitiveSetValue:(id)arg1 forKey:(id)arg2 daemonSetter:(CDUnknownBlockType)arg3;
- (id)_primitiveValueForKey:(id)arg1 loader:(CDUnknownBlockType)arg2;
- (void)primitiveSetRelationValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveRemoveRelatedObject:(id)arg1 forKey:(id)arg2;
- (void)primitiveAddRelatedObject:(id)arg1 forKey:(id)arg2;
- (void)_removeObjectCore:(id)arg1 fromValues:(id)arg2 relation:(id)arg3;
- (void)_addObjectCore:(id)arg1 toValues:(id)arg2 relation:(id)arg3;
- (id)primitiveRelationValueForKey:(id)arg1;
- (id)committedValueForKey:(id)arg1;
- (void)unloadPropertyForKey:(id)arg1;
- (void)_releaseLoadedProperties;
- (void)_setProperty:(id)arg1 forKey:(id)arg2 forRelation:(id)arg3;
- (void)_setProperty:(id)arg1 forKey:(id)arg2 isRelation:(_Bool)arg3;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (void)_createLoadedPropertiesIfNeeded;
- (id)_propertyForKey:(id)arg1;
- (_Bool)_areDefaultPropertiesLoaded;
- (void)_setDefaultPropertiesLoaded:(_Bool)arg1;
- (_Bool)_isPendingDelete;
- (void)_setPendingDelete:(_Bool)arg1;
- (_Bool)_isPendingUpdate;
- (void)_setPendingUpdate:(_Bool)arg1;
- (_Bool)_isPendingInsert;
- (void)_setPendingInsert:(_Bool)arg1;
- (void)rollback;
- (void)reset;
- (void)saved;
- (_Bool)setAttributes:(id)arg1 relations:(id)arg2 objectID:(id)arg3 eventStore:(id)arg4 error:(id *)arg5;
- (_Bool)pushDirtyProperties:(id *)arg1;
- (_Bool)isPropertyLoaded:(id)arg1;
- (void)_addDirtyProperty:(id)arg1;
- (id)dirtyProperties;
- (_Bool)isPropertyDirty:(id)arg1;
- (_Bool)refresh;
- (id)_loadedPropertyKeys;
- (void)changed;
- (_Bool)isDirty;
- (_Bool)_isNew;
- (_Bool)existsInStore;
- (void)_setObjectID:(id)arg1;
- (id)objectID;
- (void)_setEventStore:(id)arg1;
@property(readonly, nonatomic) EKEventStore *eventStore;
@property(readonly, nonatomic) int entityType;
- (_Bool)isEqual:(id)arg1 ignoringProperties:(id)arg2;
- (_Bool)isCompletelyEqual:(id)arg1;
- (id)meltedObjectInStore:(id)arg1;
- (struct EKPersistentObject *)frozenObject;
- (id)existingMeltedObject;
- (id)changeSet;
@property(readonly, nonatomic) NSString *semanticIdentifier;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (id)initWithObject:(id)arg1;
- (_Bool)isPropertyUnavailable:(id)arg1;
- (_Bool)isNew;
@property(readonly, nonatomic) _Bool isFrozen;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly, nonatomic) _Bool isPartialObject;
@property(readonly, nonatomic) _Bool canBeConvertedToFullObject;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

