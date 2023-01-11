//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@interface VSAsyncOperation : NSOperation
{
    int _state;
}

- (void)cancel;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)executionDidBegin;
- (void)finishExecutionIfPossible;

@end
