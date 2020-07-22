//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface TSWPStorageBroadcaster : NSObject
{
    struct set<id<TSWPStorageObserver>, std::__1::less<id<TSWPStorageObserver>>, std::__1::allocator<id<TSWPStorageObserver>>> _observers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)broadcastStorage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (void)removeAllObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;

@end
