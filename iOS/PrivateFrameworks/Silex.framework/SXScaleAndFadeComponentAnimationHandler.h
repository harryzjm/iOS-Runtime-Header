//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/CAAnimationDelegate-Protocol.h>

@class NSString;

@interface SXScaleAndFadeComponentAnimationHandler <CAAnimationDelegate>
{
    double _initialAlpha;
    double _initialScale;
}

@property(nonatomic) double initialScale; // @synthesize initialScale=_initialScale;
@property(nonatomic) double initialAlpha; // @synthesize initialAlpha=_initialAlpha;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)finishAnimation;
- (void)updateAnimationWithFactor:(double)arg1;
- (void)startAnimation;
- (void)prepareAnimation;
- (id)initWithComponent:(id)arg1 withAnimation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

