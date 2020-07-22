//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKSProcessAssertion, NSString;

__attribute__((visibility("hidden")))
@interface _NSFileAccessAsynchronousProcessAssertionOperation
{
    int _pid;
    NSString *_name;
    BKSProcessAssertion *_assertion;
    struct os_unfair_lock_s _stateLock;
    int _state;
    _Bool _finishedBeforeExecuted;
}

- (void)finish;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)main;
- (void)dealloc;
- (id)initWithPID:(int)arg1 name:(id)arg2;

@end

