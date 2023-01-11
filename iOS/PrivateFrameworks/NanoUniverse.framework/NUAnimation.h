//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol NUAnimatable, NUAnimationObserver;

@interface NUAnimation : NSObject
{
    MISSING_TYPE *_ctrl1;
    MISSING_TYPE *_ctrl2;
    MISSING_TYPE *_values[75];
    int _valuesCount;
    float _prevTime;
    float _pauseTime;
    _Bool _repeat;
    _Bool _paused;
    float _startTime;
    float _duration;
    float _delay;
    int _frameInterval;
    unsigned long long _function;
    unsigned long long _key;
    id <NUAnimatable> _animatable;
    id <NUAnimationObserver> _observer;
    MISSING_TYPE *_from;
    MISSING_TYPE *_to;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NUAnimationObserver> observer; // @synthesize observer=_observer;
@property(nonatomic) __weak id <NUAnimatable> animatable; // @synthesize animatable=_animatable;
@property(nonatomic) unsigned long long key; // @synthesize key=_key;
@property(nonatomic) unsigned long long function; // @synthesize function=_function;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isRepeat) _Bool repeat; // @synthesize repeat=_repeat;
@property(nonatomic) MISSING_TYPE *to; // @synthesize to=_to;
@property(nonatomic) MISSING_TYPE *from; // @synthesize from=_from;
@property(nonatomic) int frameInterval; // @synthesize frameInterval=_frameInterval;
@property(nonatomic) float delay; // @synthesize delay=_delay;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(nonatomic) float startTime; // @synthesize startTime=_startTime;
- (void)apply:(float)arg1;
- (_Bool)update:(float)arg1;
- (id)initWithAnimatable:(id)arg1 value:(unsigned long long)arg2 key: /* Error: Ran out of types for this method. */;
- (id)initWithAnimatable:(id)arg1 from:(unsigned long long)arg2 to:key: /* Error: Ran out of types for this method. */;
- (id)initWithAnimatable:(id)arg1 from:(unsigned long long)arg2 to:ctrl1:ctrl2:key: /* Error: Ran out of types for this method. */;
- (id)initWithAnimatable:(id)arg1 values:(MISSING_TYPE **)arg2 count:(int)arg3 key:(unsigned long long)arg4;

@end
