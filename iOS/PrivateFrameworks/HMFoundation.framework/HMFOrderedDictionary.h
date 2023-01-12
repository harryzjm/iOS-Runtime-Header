//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HMFoundation/HMFAssociativeCollection-Protocol.h>
#import <HMFoundation/NSCopying-Protocol.h>
#import <HMFoundation/NSMutableCopying-Protocol.h>
#import <HMFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSOrderedSet;

@interface HMFOrderedDictionary : NSObject <HMFAssociativeCollection, NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSArray *_objects;
    NSOrderedSet *_keys;
}

+ (_Bool)supportsSecureCoding;
+ (id)orderedDictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)orderedDictionary;
- (void).cxx_destruct;
- (id)mutableUnorderedCopy;
- (id)unorderedCopy;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectEnumerator;
- (id)keyEnumerator;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
@property(readonly, copy) NSArray *allValues;
@property(readonly, copy) NSArray *allKeys;
@property(readonly) unsigned long long count;
- (id)initBySortingDictionary:(id)arg1 copyItems:(_Bool)arg2 keyComparator:(CDUnknownBlockType)arg3;
- (id)initBySortingDictionary:(id)arg1;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)initWithObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2 copyObjects:(_Bool)arg3 copyKeys:(_Bool)arg4;
- (id)initWithObjects:(id)arg1 orderedKeySet:(id)arg2;

@end
