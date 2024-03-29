//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContextPop
{
    struct CGRect _endingNewTitleViewFrame;
    struct CGRect _endingNewBackButtonFrame;
    struct CGSize _titleTransitionDistance;
    double _titleTransitionAdjustment;
}

- (void)complete;
- (void)cancel;
- (void)_finishWithFinalLayout:(id)arg1 invalidLayout:(id)arg2;
- (void)animate;
- (void)_animateSearchBar;
- (void)_animateBackgroundView;
- (void)_animateLargeTitleView;
- (void)_animateContentView;
- (void)_animateScaleTransition;
- (void)prepare;
- (void)_prepareSearchBar;
- (void)_prepareBackgroundView;
- (void)_prepareLargeTitleView;
- (void)_prepareContentView;
- (void)_prepareScaleTransition;
- (id)viewUsingEaseInCurve;
- (int)transition;

@end

