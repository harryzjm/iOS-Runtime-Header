//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface TSUReadWriteQueue : NSObject
{
    NSObject<OS_dispatch_semaphore> *mCanEnqueueReaders;
    NSObject<OS_dispatch_queue> *mGlobalQueue;
    NSObject<OS_dispatch_group> *mInFlightReaders;
    NSObject<OS_dispatch_group> *mInFlightWriters;
}

- (void)waitOnInFlightWriters;
- (void)performSyncWrite:(CDUnknownBlockType)arg1;
- (void)performAsyncWrite:(CDUnknownBlockType)arg1;
- (void)performSyncRead:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

