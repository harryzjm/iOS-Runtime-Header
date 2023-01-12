//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HMFoundation/HMFAsyncContext-Protocol.h>

@protocol OS_dispatch_queue;

@interface HMFDispatchContext : NSObject <HMFAsyncContext>
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _alwaysDispatch;
}

+ (void)blessWithImplicitContext:(id)arg1;
- (void).cxx_destruct;
- (void)performBlock:(CDUnknownBlockType)arg1;
@property(readonly) NSObject<OS_dispatch_queue> *queue;
- (void)assertIsExecuting;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 alwaysDispatch:(_Bool)arg2;
- (id)initWithQueue:(id)arg1;

@end
