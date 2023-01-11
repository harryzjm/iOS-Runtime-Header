//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface KNAnimationDelayedCallback : NSObject
{
    double _delay;
    double _startTime;
    id _target;
    SEL _selector;
    id _object;
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_source> *_sourceTimer;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)cancel;
- (void)resume;
- (void)pause;
- (void)run;
- (void)p_performSelectorOnTarget;
- (id)initWithBlock:(CDUnknownBlockType)arg1 delay:(double)arg2;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4;

@end
