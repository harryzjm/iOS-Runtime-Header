//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface TSDTilingLimitedQueue : NSObject
{
    NSObject<OS_dispatch_queue> *mManagerQueue;
    NSObject<OS_dispatch_queue> *mTargetQueue;
    unsigned long long mLimit;
    unsigned long long mReaderCount;
    struct os_unfair_lock_s mSpinLock;
}

- (void)performAsync:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithLimit:(unsigned long long)arg1;
- (id)init;

@end

