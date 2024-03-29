//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DVTStackBacktrace, NSRunLoop, NSString;

@interface DVTRunLoopToken : NSObject
{
    id _target;
    DVTStackBacktrace *_creationBacktrace;
    DVTStackBacktrace *_invalidationBacktrace;
    CDUnknownBlockType _block;
    NSRunLoop *_cancellationRunLoop;
    SEL _initialSelector;
}

- (void).cxx_destruct;
@property SEL initialSelector; // @synthesize initialSelector=_initialSelector;
@property(retain) NSRunLoop *cancellationRunLoop; // @synthesize cancellationRunLoop=_cancellationRunLoop;
@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain) DVTStackBacktrace *invalidationBacktrace; // @synthesize invalidationBacktrace=_invalidationBacktrace;
@property(retain) DVTStackBacktrace *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
@property(retain) id target; // @synthesize target=_target;
- (void)cancel;
@property(readonly, getter=isCancelled) _Bool cancelled;
- (id)initWithCancellationRunLoop:(id)arg1 block:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

