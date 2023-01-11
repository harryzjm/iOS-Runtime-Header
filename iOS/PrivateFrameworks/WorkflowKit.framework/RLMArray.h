//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSFastEnumeration-Protocol.h>
#import <WorkflowKit/RLMCollection-Protocol.h>
#import <WorkflowKit/RLMThreadConfined_Private-Protocol.h>

@class NSMutableArray, NSString, RLMObjectBase, RLMRealm;

@interface RLMArray : NSObject <RLMThreadConfined_Private, RLMCollection, NSFastEnumeration>
{
    NSString *_objectClassName;
    int _type;
    _Bool _optional;
    NSString *_key;
    RLMObjectBase *_parentObject;
    NSMutableArray *_backingArray;
}

+ (id)objectWithThreadSafeReference:(unique_ptr_d0e912ad)arg1 metadata:(id)arg2 realm:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *objectClassName; // @synthesize objectClassName=_objectClassName;
@property(readonly, nonatomic, getter=isOptional) _Bool optional; // @synthesize optional=_optional;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id)descriptionWithMaxDepth:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id objectiveCMetadata;
- (unique_ptr_d0e912ad)makeThreadSafeReference;
- (id)addNotificationBlock:(CDUnknownBlockType)arg1;
- (id)sortedResultsUsingDescriptors:(id)arg1;
- (id)objectsWithPredicate:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)objectsAtIndexes:(id)arg1;
- (unsigned long long)indexOfObjectWithPredicate:(id)arg1;
- (id)averageOfProperty:(id)arg1;
- (id)sumOfProperty:(id)arg1;
- (id)maxOfProperty:(id)arg1;
- (id)minOfProperty:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)aggregateProperty:(id)arg1 operation:(id)arg2 method:(SEL)arg3;
- (int)typeForProperty:(id)arg1;
- (id)objectsWhere:(id)arg1 args:(char *)arg2;
- (id)objectsWhere:(id)arg1;
- (void)removeAllObjects;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (void)moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated;
@property(readonly, nonatomic) unsigned long long count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)lastObject;
- (id)firstObject;
@property(readonly, nonatomic) RLMRealm *realm;
- (unsigned long long)indexOfObjectWhere:(id)arg1 args:(char *)arg2;
- (unsigned long long)indexOfObjectWhere:(id)arg1;
- (id)sortedResultsUsingKeyPath:(id)arg1 ascending:(_Bool)arg2;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)addObject:(id)arg1;
- (void)addObjects:(id)arg1;
- (id)initWithObjectType:(int)arg1 optional:(_Bool)arg2;
- (id)initWithObjectClassName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
