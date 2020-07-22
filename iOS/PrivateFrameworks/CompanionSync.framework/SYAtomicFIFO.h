//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SYAtomicFIFO : NSObject
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_store;
}

- (void).cxx_destruct;
@property(readonly) id tail;
@property(readonly) id head;
- (void)removeAllObjects;
- (id)dequeueUntil:(CDUnknownBlockType)arg1;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end
