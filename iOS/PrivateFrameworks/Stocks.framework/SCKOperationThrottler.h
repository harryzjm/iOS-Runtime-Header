//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Stocks/SCKOperationThrottler-Protocol.h>

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface SCKOperationThrottler : NSObject <SCKOperationThrottler>
{
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_group> *_handlerSynchronizationGroup;
    _Bool _suspended;
}

- (void).cxx_destruct;
@property _Bool suspended; // @synthesize suspended=_suspended;
- (void)tickle;
- (void)addCompletionForCurrentOperation:(CDUnknownBlockType)arg1;
- (void)tickleWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 updateQueue:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end
