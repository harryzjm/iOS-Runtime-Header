//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIInputViewSetNotificationInfo, UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollToDismissSupport
{
    UIScrollView *_scrollViewForTransition;
    _Bool _scrollViewShowsHorizontalScrollIndicator;
    _Bool _scrollViewTransitionFinishing;
    _Bool _disableInterfaceAutorotation;
    struct CGPoint _scrollViewTransitionPreviousPoint;
    UIInputViewSetNotificationInfo *_scrollViewNotificationInfo;
}

- (void).cxx_destruct;
- (void)_updateKeyboardLayoutGuideForScrollTransitionWithSize:(struct CGSize)arg1 duration:(double)arg2;
- (struct CGRect)addPaddingToFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_infoForMatchMove;
- (void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2;
- (void)scrollView:(id)arg1 didPanWithGesture:(id)arg2;
- (void)completeKeyboardDismiss:(unsigned long long)arg1 withDuration:(double)arg2;
- (id)cancelNotificationsForMode:(unsigned long long)arg1;
- (void)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;
- (void)finishScrollViewTransitionForController:(id)arg1;
- (void)setInterfaceAutorotationDisabled:(_Bool)arg1 forController:(id)arg2;
- (void)finishScrollViewTransition;
- (void)hideScrollViewHorizontalScrollIndicator:(_Bool)arg1;
- (void)updateScrollViewContentInsetBottom:(double)arg1;

@end

