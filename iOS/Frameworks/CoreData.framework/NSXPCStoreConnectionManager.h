//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NSXPCStoreConnectionManager : NSObject
{
    NSMutableArray *_availableConnections;
    NSMutableArray *_allConnections;
    unsigned long long _maxConnections;
    NSObject<OS_dispatch_semaphore> *_poolCounter;
    struct os_unfair_lock_s _connectionLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

- (void)dealloc;
- (id)initForStore:(id)arg1;

@end
