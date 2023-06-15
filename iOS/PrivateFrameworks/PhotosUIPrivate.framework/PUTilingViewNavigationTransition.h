//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUNavigationTransition.h"

@class NSString, PUTilingViewTransitionHelper;

__attribute__((visibility("hidden")))
@interface PUTilingViewNavigationTransition : PUNavigationTransition
{
    PUTilingViewTransitionHelper *__tilingViewTransitionHelper;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PUTilingViewTransitionHelper *_tilingViewTransitionHelper; // @synthesize _tilingViewTransitionHelper=__tilingViewTransitionHelper;
- (void)resumeTransition:(_Bool)arg1;
- (void)updatePausedTransitionWithProgress:(double)arg1 interactionProgress:(double)arg2;
- (void)pauseTransitionWithOptions:(unsigned long long)arg1;
- (void)pauseTransition;
@property(readonly, nonatomic, getter=isTransitionPaused) _Bool transitionPaused;
@property(readonly, nonatomic) _Bool hasStarted;
- (void)_animateTransitionWithOperation:(long long)arg1;
- (void)animatePopTransition;
- (void)animatePushTransition;
- (_Bool)isInteractive;
- (id)initWithEndPoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

