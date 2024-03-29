//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSKnownKeysMappingStrategy.h"

__attribute__((visibility("hidden")))
@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy
{
    int _cd_rc;
    int _reserved64;
    void *_table;
    unsigned long long _length;
    id _reserved1;
    id *_keys;
}

+ (Class)classForKeyedUnarchiver;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (_Bool)accessInstanceVariablesDirectly;
+ (void)initialize;
+ (_Bool)supportsSecureCoding;
- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)allKeys;
- (id *)keys;
- (unsigned long long)length;
- (unsigned long long)fastIndexForKnownKey:(id)arg1;
- (unsigned long long)indexForKey:(id)arg1;
- (void)dealloc;
- (id)initForKeys:(id)arg1;
- (id)initForKeys:(id *)arg1 count:(unsigned long long)arg2;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

@end

