//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction, NSString;
@protocol ARUIRingGroupAnimationDelegate;

__attribute__((visibility("hidden")))
@interface ARUIFloatAnimation : NSObject
{
    double _percent;
    CDUnknownBlockType _applier;
    _Bool _completed;
    float _startValue;
    float _currentValue;
    float _endValue;
    id <ARUIRingGroupAnimationDelegate> _delegate;
    double _duration;
    CAMediaTimingFunction *_timingFunction;
}

+ (id)animationWithDuration:(double)arg1 startValue:(float)arg2 endValue:(float)arg3 timingFunction:(id)arg4 applier:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(readonly, nonatomic) float endValue; // @synthesize endValue=_endValue;
@property(readonly, nonatomic) float currentValue; // @synthesize currentValue=_currentValue;
@property(readonly, nonatomic) float startValue; // @synthesize startValue=_startValue;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <ARUIRingGroupAnimationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)completeAnimation;
- (_Bool)isAnimating;
- (void)update:(double)arg1;
- (void)dealloc;
- (id)initWithDuration:(double)arg1 startValue:(float)arg2 endValue:(float)arg3 timingFunction:(id)arg4 applier:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

