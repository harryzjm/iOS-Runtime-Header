//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSKLowPriorityThreadDispatcher
{
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic int _suspendCount;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedLowPriorityDispatcher;
+ (id)_singletonAlloc;
- (id)p_dispatchQueue;
- (void)resume;
- (void)suspend;
@property(readonly, getter=isSuspended) _Bool suspended;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
