//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTTransitionScheduler-Protocol.h>

@class NSTimer;

@interface AVTConcurrentTransitionScheduler : NSObject <AVTTransitionScheduler>
{
    CDUnknownBlockType _eventHandler;
    NSTimer *_transitionTimer;
    double _delay;
}

@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(retain, nonatomic) NSTimer *transitionTimer; // @synthesize transitionTimer=_transitionTimer;
@property(readonly, copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)scheduleTransitionTimer;
- (void)didCompleteEvent;
- (void)stop;
- (void)scheduleEvent;
- (id)initWithEventHandler:(CDUnknownBlockType)arg1;
- (id)initWithEventHandler:(CDUnknownBlockType)arg1 delay:(double)arg2;

@end
