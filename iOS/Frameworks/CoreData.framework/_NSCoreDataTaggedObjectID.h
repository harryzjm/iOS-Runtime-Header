//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _NSCoreDataTaggedObjectID
{
}

+ (_Bool)_usesTaggedPointers;
+ (void)_storeDeallocated;
+ (void)_setStoreInfo1:(id)arg1;
+ (id)_storeInfo1;
+ (void)setObjectStoreIdentifier:(id)arg1;
+ (id)managedObjectIDFromURIRepresentation:(id)arg1;
+ (unsigned int)allocateBatch:(id *)arg1 count:(unsigned int)arg2;
+ (Class)classWithStore:(id)arg1 andEntity:(id)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (void)initialize;
- (id)_storeInfo1;
- (id)_retainedURIString;
- (_Bool)_isPersistentStoreAlive;
- (id)_storeIdentifier;
- (long long)_referenceData64;
- (_Bool)isTemporaryID;
- (id)persistentStore;
- (id)entityName;
- (id)entity;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)initWithObject:(id)arg1;
- (id)initWithPK64:(long long)arg1;

@end
