//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreFoundation/NSCopying-Protocol.h>
#import <CoreFoundation/NSFastEnumeration-Protocol.h>
#import <CoreFoundation/NSMutableCopying-Protocol.h>
#import <CoreFoundation/NSSecureCoding-Protocol.h>

@interface NSDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)dictionaryWithDictionary:(id)arg1;
+ (id)dictionaryWithDictionary:(id)arg1 copyItems:(_Bool)arg2;
+ (id)newDictionaryWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
+ (id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2;
+ (id)dictionaryWithObjectsAndKeys:(id)arg1;
+ (id)dictionaryWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
+ (id)dictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)dictionary;
+ (id)_alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedKeySetForKeys:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)initWithObjectsAndKeys:(id)arg1;
- (id)initWithObject:(id)arg1 forKey:(id)arg2;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 copyItems:(_Bool)arg2;
- (_Bool)__getValue:(id *)arg1 forKey:(id)arg2;
- (void)__apply:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectEnumerator;
- (id)keysSortedByValueUsingSelector:(SEL)arg1;
- (id)keysSortedByValueUsingComparator:(CDUnknownBlockType)arg1;
- (id)keysSortedByValueWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)keysOfEntriesPassingTest:(CDUnknownBlockType)arg1;
- (id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)keyOfEntryPassingTest:(CDUnknownBlockType)arg1;
- (id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDictionary:(id)arg1;
- (id)invertedDictionary;
- (unsigned long long)hash;
- (void)getObjects:(id *)arg1;
- (void)getKeys:(id *)arg1;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (unsigned long long)countForObject:(id)arg1;
- (unsigned long long)countForKey:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (_Bool)containsObject:(id)arg1;
- (_Bool)containsKey:(id)arg1;
- (id)allValues;
- (id)allObjects;
- (id)allKeys;
- (id)allKeysForObject:(id)arg1;
- (_Bool)isNSDictionary__;
- (unsigned long long)_cfTypeID;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
@property(readonly) unsigned long long count;

@end

