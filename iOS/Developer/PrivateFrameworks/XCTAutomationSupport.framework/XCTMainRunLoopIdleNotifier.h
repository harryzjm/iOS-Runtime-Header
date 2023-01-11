//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface XCTMainRunLoopIdleNotifier : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_idleHandlers;
    struct __CFRunLoopObserver *_runLoopObserver;
}

@property struct __CFRunLoopObserver *runLoopObserver; // @synthesize runLoopObserver=_runLoopObserver;
@property(readonly) NSMutableArray *idleHandlers; // @synthesize idleHandlers=_idleHandlers;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)handleIdleObserved;
- (void)_queue_setUpRunLoopObserver;
- (void)notifyWhenIdle:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

