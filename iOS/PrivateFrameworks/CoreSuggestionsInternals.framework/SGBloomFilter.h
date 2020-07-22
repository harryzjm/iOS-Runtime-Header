//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, SGBloomFilterChunk;

@interface SGBloomFilter : NSObject
{
    id <SGBloomFilterChunk> _head;
    id <SGBloomFilterChunk> _tail;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)counts;
- (_Bool)exists:(id)arg1;
- (void)addAsync:(id)arg1;
- (void)add:(id)arg1;
- (void)forceRotate;
- (void)_rotate;
- (void)_rotateIfNecessary;
- (id)initWithDirectory:(id)arg1 name:(id)arg2;
- (id)initWithInMemoryStorageSparse;
- (id)initWithInMemoryStorage;
- (id)initWithHead:(id)arg1 tail:(id)arg2;

@end
