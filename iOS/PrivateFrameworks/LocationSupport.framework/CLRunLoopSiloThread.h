//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSRunLoop, NSThread;

@interface CLRunLoopSiloThread : NSObject
{
    struct _opaque_pthread_t *_threadId;
    NSRunLoop *_underlyingRunLoop;
    NSThread *_underlyingThread;
    _Bool _shouldCancelThread;
}

@property(readonly, nonatomic) _Bool shouldCancelThread; // @synthesize shouldCancelThread=_shouldCancelThread;
@property(readonly, nonatomic) NSThread *underlyingThread; // @synthesize underlyingThread=_underlyingThread;
@property(readonly, nonatomic) NSRunLoop *underlyingRunLoop; // @synthesize underlyingRunLoop=_underlyingRunLoop;
@property(readonly, nonatomic) struct _opaque_pthread_t *threadId; // @synthesize threadId=_threadId;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCurrentThread;
- (id)initWithRunLoop:(struct __CFRunLoop *)arg1;
- (id)init;

@end
