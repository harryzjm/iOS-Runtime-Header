//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UILazyMapTable : NSObject
{
    CDUnknownBlockType _mappingBlock;
    NSMapTable *_keysToClientTables;
    NSMapTable *_keysToValues;
    NSMapTable *_valuesToKeys;
}

- (void).cxx_destruct;
- (void)unregisterClient:(id)arg1 ofObjectForKey:(id)arg2;
- (void)registerClient:(id)arg1 ofObjectForKey:(id)arg2;
- (id)cachedObjectEnumerable;
- (id)keyEnumerable;
- (id)cachedObjects;
- (id)keys;
- (_Bool)hasCachedObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (id)initWithMappingBlock:(CDUnknownBlockType)arg1;

@end

