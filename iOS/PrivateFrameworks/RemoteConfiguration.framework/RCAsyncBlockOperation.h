//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@interface RCAsyncBlockOperation : NSOperation
{
    _Bool _executing;
    _Bool _finished;
    CDUnknownBlockType _block;
}

+ (id)asyncBlockOperationWithMainThreadBlock:(CDUnknownBlockType)arg1;
+ (id)asyncBlockOperationWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

