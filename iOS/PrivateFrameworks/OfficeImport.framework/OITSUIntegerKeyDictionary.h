//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>
#import <OfficeImport/NSMutableCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface OITSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying>
{
    struct __CFDictionary *mDictionary;
}

- (struct __CFDictionary *)p_cfDictionary;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)valueEnumerator;
- (id)allValues;
- (id)keyEnumerator;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(long long)arg2;
- (void)removeObjectForKey:(long long)arg1;
- (id)objectForKey:(long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end
