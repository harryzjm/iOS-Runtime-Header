//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class MISSING_TYPE, NSString;

@interface _TtC16HealthExperience21AsynchronousOperation : NSOperation
{
    MISSING_TYPE *autoFinishesOnCancel;
    MISSING_TYPE *operationState;
    MISSING_TYPE *workLock;
    MISSING_TYPE *didBeginWork;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (void)main;
- (void)cancel;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isCancelled;
- (_Bool)isAsynchronous;

// Remaining properties
@property(nonatomic, readonly) _Bool asynchronous;
@property(nonatomic, readonly) _Bool cancelled;
@property(nonatomic, readonly) _Bool executing;
@property(nonatomic, readonly) _Bool finished;

@end
