//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSInvocation, UIWindowScene;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _UIDelayedPresentationContext : NSObject
{
    _Bool _enableUserInteraction;
    long long _reqcnt;
    NSInvocation *_presentInvocation;
    CDUnknownBlockType _cancellationHandler;
    double _timeout;
    NSObject<OS_dispatch_source> *_timerSource;
    UIWindowScene *_windowSceneIgnoringEvents;
}

- (void).cxx_destruct;
@property __weak UIWindowScene *windowSceneIgnoringEvents; // @synthesize windowSceneIgnoringEvents=_windowSceneIgnoringEvents;
@property(retain, nonatomic) NSInvocation *presentInvocation; // @synthesize presentInvocation=_presentInvocation;
@property(copy, nonatomic) CDUnknownBlockType cancellationHandler; // @synthesize cancellationHandler=_cancellationHandler;
- (void)dealloc;
- (long long)incrementRequestCount;
- (long long)decrementRequestCount;
- (long long)requestCount;
- (id)delayingController;
- (id)invocationTarget;
- (id)initWithTimeout:(double)arg1 cancellationHandler:(CDUnknownBlockType)arg2;

@end

