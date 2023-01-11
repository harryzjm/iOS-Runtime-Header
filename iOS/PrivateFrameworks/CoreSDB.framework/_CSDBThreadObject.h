//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSRunLoop, NSString, NSThread;
@protocol OS_dispatch_queue;

@interface _CSDBThreadObject : NSObject
{
    NSThread *_thread;
    NSString *_identifier;
    NSRunLoop *_runLoop;
    struct __CFRunLoopSource *_runLoopSource;
    NSString *_queueContext;
    NSObject<OS_dispatch_queue> *_queue;
}

- (_Bool)isCurrentThreadOtherwiseAssert:(_Bool)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)thread;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 qosClass:(unsigned short)arg2;
- (void)_threadedMain;

@end
