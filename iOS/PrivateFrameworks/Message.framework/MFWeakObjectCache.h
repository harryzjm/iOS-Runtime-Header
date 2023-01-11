//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface MFWeakObjectCache : NSObject
{
    CDUnknownBlockType _block;
    NSMutableDictionary *_dictionary;
    NSLock *_lock;
}

- (id)weakObjectCacheRefForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 shouldGenerate:(_Bool)arg2 wasCached:(_Bool *)arg3;
- (id)objectForKey:(id)arg1 wasCached:(_Bool *)arg2;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
