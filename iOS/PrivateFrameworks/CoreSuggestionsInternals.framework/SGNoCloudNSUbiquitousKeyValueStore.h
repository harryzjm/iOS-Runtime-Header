//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUbiquitousKeyValueStore.h>

@class NSMutableDictionary;

@interface SGNoCloudNSUbiquitousKeyValueStore : NSUbiquitousKeyValueStore
{
    NSMutableDictionary *_kv;
    struct _opaque_pthread_mutex_t _lock;
}

- (void).cxx_destruct;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)arrayForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (_Bool)synchronize;
- (void)dealloc;
- (id)init;

@end
