//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>
#import <OfficeImport/NSMutableCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface OITSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying>
{
    struct __CFDictionary *mDictionary;
}

- (struct __CFDictionary *)p_cfDictionary;
- (void)enumerateKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)allValues;
- (id)allKeys;
- (id)arrayOfBoxedKeys;
- (void)applyFromIntToIntDictionary:(id)arg1;
- (_Bool)containsKey:(long long)arg1;
- (id)keyEnumerator;
- (void)removeAllInts;
- (void)setInt:(long long)arg1 forKey:(long long)arg2;
- (void)removeIntForKey:(long long)arg1;
- (long long)intForKey:(long long)arg1;
- (_Bool)intIsPresentForKey:(long long)arg1 outValue:(long long *)arg2;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

