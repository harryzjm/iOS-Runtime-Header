//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

__attribute__((visibility("hidden")))
@interface QLAsynchronousOperation : NSOperation
{
    _Bool _finished;
    _Bool _executing;
}

@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (void)finish;
- (_Bool)isConcurrent;
- (void)start;

@end
