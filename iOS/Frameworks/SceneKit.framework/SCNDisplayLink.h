//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, SCNRecursiveLock;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SCNDisplayLink : NSObject
{
    CADisplayLink *_caDisplayLink;
    double _lastDisplayLinkTime;
    NSObject<OS_dispatch_source> *_coalescingSource;
    CDUnknownBlockType _block;
    CDUnknownBlockType _adaptativeFrameDuration;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _paused;
    _Bool _invalidated;
    double _lastFrameTime;
    float _preferredFrameRate;
    SCNRecursiveLock *_runningLock;
    _Atomic int _queuedFrameCount;
}

- (_Bool)_isInvalidated;
- (void)setNeedsDisplay;
- (void)invalidate;
- (void)_caDisplayLinkCallback;
- (void)_callbackWithTime:(double)arg1;
- (int)queuedFrameCount;
@property(nonatomic) float preferredFrameRate;
@property(copy, nonatomic) CDUnknownBlockType adaptativeFrameRate;
- (_Bool)setPaused:(_Bool)arg1 nextFrameTimeHint:(double)arg2 lastUpdate:(double)arg3;
@property(nonatomic, getter=isPaused) _Bool paused;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 screen:(id)arg2 policy:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (id)init;

@end

