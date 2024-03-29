//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RBPLEventQueue : NSObject
{
    NSMutableArray *_eventQueue;
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _scheduled;
}

- (void).cxx_destruct;
- (id)dequeueEvent;
- (void)enqueueEvent:(id)arg1;
- (void)scheduleWork;
- (id)init;

@end

