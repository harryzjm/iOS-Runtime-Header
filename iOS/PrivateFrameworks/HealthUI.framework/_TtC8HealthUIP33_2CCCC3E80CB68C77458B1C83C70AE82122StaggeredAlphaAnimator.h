//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8HealthUIP33_2CCCC3E80CB68C77458B1C83C70AE82122StaggeredAlphaAnimator : NSObject
{
    MISSING_TYPE *backgroundAnimator;
    MISSING_TYPE *foregroundAnimator;
}

- (void).cxx_destruct;
- (id)init;
- (void)finishAnimationAtPosition:(long long)arg1;
- (void)stopAnimation:(_Bool)arg1;
- (void)pauseAnimation;
- (void)startAnimationAfterDelay:(double)arg1;
- (void)startAnimation;
@property(nonatomic) double fractionComplete;
@property(nonatomic) _Bool reversed;
- (_Bool)isReversed;
- (_Bool)isRunning;
@property(nonatomic, readonly) long long state;

// Remaining properties
@property(nonatomic, readonly) _Bool running;

@end

