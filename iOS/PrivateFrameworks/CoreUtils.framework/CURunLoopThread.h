//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CURunLoopThread : NSObject
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    struct __CFRunLoop *_runLoop;
    _Bool _runLoopValid;
    struct NSMutableArray *_startBlocks;
    _Bool _threadRunning;
    struct LogCategory *_ucat;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CDUnknownBlockType _threadInitializeHandler;
    CDUnknownBlockType _threadFinalizeHandler;
}

@property(copy, nonatomic) CDUnknownBlockType threadFinalizeHandler; // @synthesize threadFinalizeHandler=_threadFinalizeHandler;
@property(copy, nonatomic) CDUnknownBlockType threadInitializeHandler; // @synthesize threadInitializeHandler=_threadInitializeHandler;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_threadMain;
- (_Bool)_scheduleStopThread;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)invalidate;
- (void)activate;
- (void)dealloc;
- (id)init;

@end

