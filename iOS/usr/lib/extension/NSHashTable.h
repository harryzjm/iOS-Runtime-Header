//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSFastEnumeration-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSArray, NSPointerFunctions, NSSet;

@interface NSHashTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)hashTableWithOptions:(unsigned long long)arg1;
+ (id)weakObjectsHashTable;
+ (id)hashTableWithWeakObjects;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSSet *setRepresentation;
- (id)mutableSet;
- (void)minusHashTable:(id)arg1;
- (void)unionHashTable:(id)arg1;
- (void)intersectHashTable:(id)arg1;
- (_Bool)isSubsetOfHashTable:(id)arg1;
- (_Bool)isEqualToHashTable:(id)arg1;
- (_Bool)intersectsHashTable:(id)arg1;
- (_Bool)containsObject:(id)arg1;
@property(readonly, nonatomic) id anyObject;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (id)member:(id)arg1;
@property(readonly, copy) NSPointerFunctions *pointerFunctions;
- (id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2;
- (void)getKeys:(const void **)arg1 count:(unsigned long long *)arg2;
- (void)removeAllItems;
- (id)copy;
- (void)removeItem:(const void *)arg1;
- (void)insertKnownAbsentItem:(const void *)arg1;
- (void)addObject:(id)arg1;
- (void *)getItem:(const void *)arg1;
- (unsigned long long)weakCount;
@property(readonly, copy) NSArray *allObjects;
@property(readonly) unsigned long long count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)objectEnumerator;
- (id)description;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;

@end

