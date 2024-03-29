//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMapTable.h"

__attribute__((visibility("hidden")))
@interface NSConcreteMapTable : NSMapTable
{
    struct NSSlice keys;
    struct NSSlice values;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long keyOptions;
    unsigned long long valueOptions;
    unsigned long long mutations;
    struct os_unfair_lock_s growLock;
    _Bool shouldRehash;
    _Bool hasDynamicSlices;
}

+ (_Bool)supportsSecureCoding;
- (id)allValues;
- (id)allKeys;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)getKeys:(const void **)arg1 values:(const void **)arg2;
- (id)objectEnumerator;
- (id)keyEnumerator;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (void)dealloc;
- (void)removeAllItems;
- (void)removeObjectForKey:(id)arg1;
- (void)_reclaim;
- (void)rehash;
- (unsigned long long)rehashAround:(unsigned long long)arg1;
- (void)replaceItem:(const void *)arg1 forExistingKey:(const void *)arg2;
- (_Bool)mapMember:(const void *)arg1 originalKey:(const void **)arg2 value:(const void **)arg3;
- (void *)existingItemForSetItem:(const void *)arg1 forAbsentKey:(const void *)arg2;
- (void)setItem:(const void *)arg1 forKnownAbsentKey:(const void *)arg2;
- (void)setItem:(const void *)arg1 forAbsentKey:(const void *)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)assign:(unsigned long long)arg1 key:(const void *)arg2 value:(const void *)arg3 isNew:(_Bool)arg4;
- (void)grow;
- (id)dump;
- (_Bool)containsKeys:(const void **)arg1 values:(const void **)arg2 count:(unsigned long long)arg3;
- (unsigned long long)__capacity;
- (unsigned long long)count;
- (id)valuePointerFunctions;
- (id)keyPointerFunctions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned long long)arg3;
- (id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3;
- (id)copy;
- (void)_setBackingStore;
- (void)checkCount:(const char *)arg1;
- (unsigned long long)realCount;
- (void)raiseCountUnderflowException;
- (id)init;

@end

