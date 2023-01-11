//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSPReferenceOrderedSet : NSObject
{
    unsigned long long _capacity;
    struct __CFDictionary *_dictionary;
    struct _TSPReferenceOrderedSetEntry *_firstEntry;
    struct _TSPReferenceOrderedSetEntry *_lastEntry;
    unsigned long long _count;
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)allObjects;
- (void)minusSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)removeItem:(id)arg1;
- (_Bool)addItem:(id)arg1;
- (_Bool)containsItem:(id)arg1;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end
