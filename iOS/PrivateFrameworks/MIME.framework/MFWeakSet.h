//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableSet.h>

@class NSLock;

@interface MFWeakSet : NSMutableSet
{
    NSLock *_lock;
    unsigned long long _gen;
    struct __CFDictionary *_objects;
}

+ (id)setWithCapacity:(unsigned long long)arg1;
+ (id)setWithArray:(id)arg1;
+ (id)setWithSet:(id)arg1;
+ (id)setWithObjects:(id)arg1;
+ (id)setWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
+ (id)setWithObject:(id)arg1;
+ (id)set;
- (void)setSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (void)removeAllObjects;
- (void)minusSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithArray:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(_Bool)arg2;
- (id)initWithSet:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)objectsPassingTest:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)setByAddingObjectsFromArray:(id)arg1;
- (id)setByAddingObjectsFromSet:(id)arg1;
- (id)setByAddingObject:(id)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (_Bool)isSubsetOfSet:(id)arg1;
- (_Bool)isEqualToSet:(id)arg1;
- (_Bool)intersectsSet:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (id)description;
- (_Bool)containsObject:(id)arg1;
- (id)anyObject;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allObjects;
- (id)_copyAllItems;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (unsigned long long)count;

@end

