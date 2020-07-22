//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VectorKit/NSFastEnumeration-Protocol.h>

@protocol VKLRUCacheDelegate;

__attribute__((visibility("hidden")))
@interface VKLRUCache : NSObject <NSFastEnumeration>
{
    unsigned long long _reservedCapacity;
    unsigned long long _maximumCapacity;
    unsigned long long _count;
    void *_table;
    id _head;
    id _tail;
    id <VKLRUCacheDelegate> _delegate;
}

@property(nonatomic) id <VKLRUCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) unsigned long long maximumCapacity; // @synthesize maximumCapacity=_maximumCapacity;
@property(readonly, nonatomic) unsigned long long reservedCapacity; // @synthesize reservedCapacity=_reservedCapacity;
- (void)removeObjectsMatchingPredicate:(CDUnknownBlockType)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)insertNodeAtHead:(id)arg1;
- (void)removeNode:(id)arg1;
- (void)purge;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(const struct VKCacheKey *)arg2;
- (id)objectWithoutPromotingForKey:(const struct VKCacheKey *)arg1;
- (id)objectForKey:(const struct VKCacheKey *)arg1;
- (void)setReservedCapacity:(unsigned long long)arg1 maximumCapacity:(unsigned long long)arg2;
- (void)evictIfNecessary;
- (void)dropTail;
- (void)dealloc;
- (id)contentsDescription;
- (id)description;
- (id)initWithReservedCapacity:(unsigned long long)arg1 maximumCapacity:(unsigned long long)arg2;
- (id)init;
- (void)consistencyCheck;

@end

