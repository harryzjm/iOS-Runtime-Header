//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CKDispatchQueue : NSObject
{
    unsigned long long _fifo;
    _Bool _suspended;
    _Bool _cancelled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_lockQueue;
    struct __CFBinaryHeap *_heap;
    NSMutableDictionary *_dispatchQueueBlocks;
}

+ (id)concurrentQueueWithDispatchPriority:(long long)arg1;
+ (id)serialQueueWithDispatchPriority:(long long)arg1;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) NSMutableDictionary *dispatchQueueBlocks; // @synthesize dispatchQueueBlocks=_dispatchQueueBlocks;
@property(retain, nonatomic) struct __CFBinaryHeap *heap; // @synthesize heap=_heap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue; // @synthesize lockQueue=_lockQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
- (void).cxx_destruct;
- (void)removeAllOutstandingBlocks;
- (void)removeOutstandingBlockForKey:(id)arg1;
- (_Bool)containsOutstandingBlockForKey:(id)arg1;
- (id)allKeysOfOutstandingBlocks;
- (long long)queuePriorityOfOutstandingBlockForKey:(id)arg1;
- (void)setQueuePriority:(long long)arg1 ofOutstandingBlockForKey:(id)arg2;
- (void)addBlock:(CDUnknownBlockType)arg1 withQueuePriority:(long long)arg2 forKey:(id)arg3;
- (void)addBlock:(CDUnknownBlockType)arg1 withQueuePriority:(long long)arg2;
- (void)addBlock:(CDUnknownBlockType)arg1;
- (id)_initWithDispatchAttr:(id)arg1 dispatchPriority:(long long)arg2;
- (id)init;
- (void)dealloc;

@end

