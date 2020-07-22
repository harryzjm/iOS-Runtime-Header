//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPresentationController.h>

@class NSArray;
@protocol UIViewControllerTransitionCoordinator;

@interface NCBannerPresentationController : UIPresentationController
{
    id <UIViewControllerTransitionCoordinator> _activeTransitionCoordinator;
    long long _transitionState;
    struct CGSize _childPreferredContentSize;
    _Bool _wantsUseableContainerHeight;
    NSArray *_additionalBackgroundViews;
}

+ (struct CGRect)visiblePresentedFrameForView:(id)arg1 inPresentationFrame:(struct CGRect)arg2;
+ (struct CGRect)_presentedFrameForVisiblePortion:(_Bool)arg1 ofView:(id)arg2 inPresentationFrame:(struct CGRect)arg3;
+ (struct CGRect)useableContainerViewFrameInContainerViewWithBounds:(struct CGRect)arg1;
@property(nonatomic) _Bool wantsUseableContainerHeight; // @synthesize wantsUseableContainerHeight=_wantsUseableContainerHeight;
@property(retain, nonatomic) NSArray *additionalBackgroundViews; // @synthesize additionalBackgroundViews=_additionalBackgroundViews;
- (void).cxx_destruct;
- (struct CGRect)_frameForViewController:(id)arg1 beyondEdge:(unsigned long long)arg2;
- (struct CGRect)_presentedFrameForView:(id)arg1 inPresentationFrame:(struct CGRect)arg2;
- (struct CGRect)frameOfDismissedViewInContainerView;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (_Bool)shouldRemovePresentersView;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (_Bool)_shouldDisableInteractionDuringTransitions;

@end

