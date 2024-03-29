//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSSet.h"

__attribute__((visibility("hidden")))
@interface __NSFrozenSetM : NSSet
{
    CDStruct_af6d7307 storage;
    _Atomic struct __cow_state_t *cow;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)dealloc;
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (double)clumpingInterestingThreshold;
- (double)clumpingFactor;
- (id)objectEnumerator;
- (unsigned long long)countForObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (id)member:(id)arg1;
- (unsigned long long)count;

@end

