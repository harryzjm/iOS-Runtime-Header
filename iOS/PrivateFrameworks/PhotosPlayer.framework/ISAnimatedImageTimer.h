//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADisplayLink, _ISAnimatedImageTimerForwardingProxy;

@interface ISAnimatedImageTimer
{
    CADisplayLink *_displayLink;
    _ISAnimatedImageTimerForwardingProxy *_displayLinkProxy;
    double _timestamp;
}

+ (id)sharedTimer;
@property(nonatomic, setter=_setTimestamp:) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
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

