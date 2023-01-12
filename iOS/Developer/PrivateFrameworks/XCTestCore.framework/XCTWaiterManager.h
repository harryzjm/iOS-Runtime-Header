//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTestCore/XCTWaiterManager-Protocol.h>

@class NSMutableArray, NSMutableSet, NSThread;
@protocol OS_dispatch_queue;

@interface XCTWaiterManager : NSObject <XCTWaiterManager>
{
    NSMutableArray *_waiterStack;
    NSThread *_thread;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_interruptionCompletionHandlers;
}

+ (id)threadLocalManager;
- (void).cxx_destruct;
@property(readonly) NSMutableSet *interruptionCompletionHandlers; // @synthesize interruptionCompletionHandlers=_interruptionCompletionHandlers;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property NSThread *thread; // @synthesize thread=_thread;
@property(retain) NSMutableArray *waiterStack; // @synthesize waiterStack=_waiterStack;
- (void)waiterDidFinishWaiting:(id)arg1;
- (void)waiterTimedOutWhileWaiting:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)waiterWillBeginWaiting:(id)arg1;
- (id)init;
- (void)dealloc;

@end

