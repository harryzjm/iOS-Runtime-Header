//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface AXHAAccessQueue : NSObject
{
    NSString *_threadLocalStorageKey;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    unsigned long long _specialBehaviors;
}

+ (id)backgroundAccessQueue;
+ (id)mainAccessQueue;
@property(nonatomic) unsigned long long specialBehaviors; // @synthesize specialBehaviors=_specialBehaviors;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
@property(copy, nonatomic) NSString *threadLocalStorageKey; // @synthesize threadLocalStorageKey=_threadLocalStorageKey;
- (void).cxx_destruct;
- (void)_performBlock:(CDUnknownBlockType)arg1 withDispatchFunction:(CDUnknownFunctionPointerType)arg2 synchronously:(_Bool)arg3 accessQueueContext:(unsigned long long)arg4;
- (unsigned long long)_accessQueueContextInCurrentExecutionThread;
- (id)description;
- (_Bool)canOnlyReadInCurrentExecutionThread;
- (_Bool)canWriteInCurrentExecutionThread;
- (_Bool)canReadInCurrentExecutionThread;
- (void)afterDelay:(double)arg1 processWritingBlock:(CDUnknownBlockType)arg2;
- (void)afterDelay:(double)arg1 processReadingBlock:(CDUnknownBlockType)arg2;
- (void)performAsynchronousWritingBlock:(CDUnknownBlockType)arg1;
- (void)performAsynchronousReadingBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousWritingBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousReadingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool behavesWithoutErrorReporting;
@property(readonly, nonatomic) _Bool behavesAsMainQueue;
@property(readonly, copy, nonatomic) NSString *label;
- (id)initWithParentClass:(Class)arg1 description:(id)arg2 appendUUIDToLabel:(_Bool)arg3;
- (id)_initWithLabel:(id)arg1 appendUUIDToLabel:(_Bool)arg2 specialBehaviors:(unsigned long long)arg3;
- (id)initWithLabel:(id)arg1 appendUUIDToLabel:(_Bool)arg2;
- (id)init;

@end

