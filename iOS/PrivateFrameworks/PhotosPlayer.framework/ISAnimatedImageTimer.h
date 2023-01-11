//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADisplayLink, _ISAnimatedImageTimerForwardingProxy;

__attribute__((visibility("hidden")))
@interface ISAnimatedImageTimer
{
    CADisplayLink *_displayLink;
    _ISAnimatedImageTimerForwardingProxy *_displayLinkProxy;
    double _timestamp;
}

+ (id)sharedTimer;
- (void).cxx_destruct;
@property(nonatomic, setter=_setTimestamp:) double timestamp; // @synthesize timestamp=_timestamp;
- (void)_iosDealloc;
- (void)_iosAnimationTimerFired:(id)arg1;
- (void)_iosUpdateDisplayLink;
- (void)_iosInitialization;
- (void)_fireTimerWithInterval:(double)arg1;
- (void)_updateDisplayLink;
- (id)mutableChangeObject;
- (void)hasObserversDidChange;
- (void)dealloc;
- (id)init;

@end
