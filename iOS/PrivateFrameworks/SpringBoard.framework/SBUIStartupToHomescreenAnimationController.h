//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKSDisplayRenderOverlay;

@interface SBUIStartupToHomescreenAnimationController
{
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
}

- (void).cxx_destruct;
- (double)_animationDelay;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (id)animationSettings;
- (void)_prepareAnimation;
- (_Bool)_shouldDismissBanner;
- (id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2;
- (id)initWithTransitionContextProvider:(id)arg1;

@end
