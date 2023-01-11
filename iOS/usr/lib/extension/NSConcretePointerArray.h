//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSConcretePointerArray
{
    struct NSSlice slice;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long options;
    unsigned long long mutations;
    _Bool needsCompaction;
}

+ (_Bool)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removePointer:(void *)arg1;
- (unsigned long long)indexOfPointer:(void *)arg1;
- (void)setCount:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)compact;
- (void)_markNeedsCompaction;
- (void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void *)arg2;
- (void)insertPointer:(void *)arg1 atIndex:(unsigned long long)arg2;
- (void)removePointerAtIndex:(unsigned long long)arg1;
- (void)addPointer:(void *)arg1;
- (void *)pointerAtIndex:(unsigned long long)arg1;
- (void)arrayGrow:(unsigned long long)arg1;
- (id)pointerFunctions;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithPointerFunctions:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)init;

@end

