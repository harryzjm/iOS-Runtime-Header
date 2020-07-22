//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface UIScrollViewAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityUserTestingChildren;
- (_Bool)_accessibilityIsScannerGroup;
- (id)_staticScrollBar;
- (struct CGRect)_accessibilityUIViewAccessibilityFrame;
- (struct UIEdgeInsets)_accessibilityNavigationControllerInset;
- (void)_accessibilitySetNavigationControllerInset:(struct UIEdgeInsets)arg1;
- (void)_accessibilitySetVisibleContentInset:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)_accessibilityVisibleContentInset;
- (void)_accessibilitySetStoredVisibleContentInset:(id)arg1;
- (id)_accessibilityStoredVisibleContentInset;
- (struct UIEdgeInsets)_accessibilityContentInset;
- (struct CGRect)_accessibilityContentFrame;
- (struct CGRect)accessibilityFrame;
- (_Bool)accessibilityScrollRightPage;
- (_Bool)accessibilityScrollLeftPage;
- (_Bool)accessibilityScrollDownPage;
- (_Bool)accessibilityScrollUpPage;
- (struct CGPoint)_accessibilityVisibleScrollArea:(_Bool)arg1;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(_Bool)arg2;
- (void)accessibilityApplyScrollContent:(struct CGPoint)arg1 sendScrollStatus:(_Bool)arg2 animated:(_Bool)arg3;
- (struct CGPoint)accessibilityValidateScrollContentOffset:(struct CGPoint)arg1;
- (_Bool)_accessibilityScrollPageInDirection:(int)arg1;
- (_Bool)_accessibilityContentOffsetForScrollDirection:(int)arg1 newContentOffset:(struct CGPoint *)arg2 distanceMultiplier:(double)arg3;
- (id)_accessibilityFindRefreshControl;
- (void)_manipulateWithRefreshControl:(id)arg1;
- (_Bool)_accessibilityCanHandleContentPullDown;
- (double)_accessibilityScrollAnimationDurationDelay;
- (void)_handleScrollViewPullDown;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint)arg1;
- (void)_accessibilityZoomAtPoint:(struct CGPoint)arg1 zoomIn:(_Bool)arg2;
- (void)_accessibilitySendScrollStatus;
- (id)_accessibilityScrollStatus;
- (void)_accessibilitySetScrollStatus:(id)arg1;
- (long long)_accessibilityPageIndex;
- (long long)_accessibilityPageCount;
- (id)_accessibilitySubviews;
- (id)_accessibilityDelegateScrollStatus;
- (id)_accessibilityRetrieveDelegate;
- (void)_notifyDidScroll;
- (id)_accessibilityScrollStatusFormatString;
- (_Bool)accessibilityScrollDownPageSupported;
- (_Bool)accessibilityScrollUpPageSupported;
- (_Bool)accessibilityScrollRightPageSupported;
- (_Bool)accessibilityScrollLeftPageSupported;
- (_Bool)_accessibilityUseContentInset;
- (void)_accessibilityCurrentPage:(long long *)arg1 totalPages:(long long *)arg2 type:(int)arg3;
- (void)_accessibilityCurrentPage:(long long *)arg1 totalPages:(long long *)arg2;
- (_Bool)_accessibilityScrollStatusPrefersVertical;
- (double)_accessibilityScrollHeightDistance;
- (double)_accessibilityScrollWidthDistance;
- (_Bool)_accessibilityShouldAnimateScroll;
- (_Bool)_accessibilityShouldAnimateScrollToVisible;
- (_Bool)_accessibilityScrollToFrame:(struct CGRect)arg1 forView:(id)arg2;
- (_Bool)_axShouldScrollToAlignWithPage;
- (struct CGPoint)_accessibilityContentOffset;
- (id)_accessibilityLastOpaqueElement;
- (id)_accessibilityFirstOpaqueElement;
- (id)_accessibilityFirstLastOpaqueElement:(_Bool)arg1;
- (struct CGRect)_accessibilityScrollViewVisibleFrame;
- (_Bool)_accessibilityIsScrollAncestor;
- (_Bool)_accessibilityScrollingEnabled;
- (void)_announceDelayedStatus;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_accessibilityScrollToTopWithAnnouncement:(_Bool)arg1 touchLocation:(struct CGPoint)arg2 originalHandler:(CDUnknownBlockType)arg3;
- (double)_accessibilityZoomScale;

@end
