//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI23StackTemplateController
{
    MISSING_TYPE *supportsTabBarChildControllerBehaviours;
    MISSING_TYPE *supportsTabBarChildContentInsets;
    MISSING_TYPE *anchorIdToHighlight;
    MISSING_TYPE *showcasePercentageObserver;
    MISSING_TYPE *lastShowcasePercentage;
    MISSING_TYPE *notificationCenter;
    MISSING_TYPE *hasEnabledShowcasing;
    MISSING_TYPE *statusBarStyle;
    MISSING_TYPE *navBarGradientView;
    MISSING_TYPE *statusBarGradientView;
    MISSING_TYPE *accountMessageViewModel;
    MISSING_TYPE *accountMessageViewController;
    MISSING_TYPE *viewIsVisibleForAccountMessage;
    MISSING_TYPE *pastFirstViewDidAppear;
    MISSING_TYPE *accountMessageAdditionTargetOffset;
    MISSING_TYPE *accountMessageNeedsDeferredAnimationIn;
    MISSING_TYPE *accountMessageDismissalTargetOffset;
    MISSING_TYPE *targetParentController;
    MISSING_TYPE *didEnqueueImpressionMetrics;
    MISSING_TYPE *waitingForPresentationDismissal;
    MISSING_TYPE *pagePerformanceProvider;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)vuiScrollViewDidScroll:(id)arg1;
- (void)vuiScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;
- (_Bool)shouldRubberbandElementWithCategory:(unsigned long long)arg1 in:(id)arg2 at:(id)arg3;
- (_Bool)vuiScrollViewShouldScrollToTop:(id)arg1;
- (void)vuiScrollViewDidEndScrollingAnimation:(id)arg1;
- (void)willEnterForeground:(id)arg1;
@property(nonatomic, readonly) long long preferredStatusBarUpdateAnimation;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)vui_didMoveToParentViewController:(id)arg1;
- (void)vui_willMoveToParentViewController:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidDisappear:(_Bool)arg1;
- (void)vui_viewDidAppear:(_Bool)arg1;
- (void)vui_viewWillDisappear:(_Bool)arg1;
- (void)vui_viewWillAppear:(_Bool)arg1;
- (void)vui_viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end

