//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVHapticPlayer, NSTimer;
@protocol OS_dispatch_queue;

@interface HPHapticEngine : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    AVHapticPlayer *_player;
    NSTimer *_timer;
    double _runTimeout;
    struct bitset<20> _channelSet;
    _Bool _running;
}

@property _Bool running; // @synthesize running=_running;
@property(readonly) AVHapticPlayer *player; // @synthesize player=_player;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createPlayerWithPattern:(id)arg1 error:(id *)arg2;
- (void)stop;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 timeoutHandler:(CDUnknownBlockType)arg2;
- (id)initAndReturnError:(id *)arg1;
- (id)init;
- (void)dealloc;
- (void)cancelIdleTimer;
- (void)startIdleTimerWithHandler:(CDUnknownBlockType)arg1;
- (void)releaseChannel:(id)arg1;
- (id)getAvailableChannel;
- (void)dispatchOnLocal:(CDUnknownBlockType)arg1;
- (void)dispatchOnMain:(CDUnknownBlockType)arg1;
@property(readonly) double currentTime;

@end

