//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKContentContainerObserver-Protocol.h>
#import <PassKitUI/UIGestureRecognizerDelegate-Protocol.h>
#import <PassKitUI/UINavigationControllerDelegate-Protocol.h>
#import <PassKitUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, UINavigationController, UITapGestureRecognizer;
@protocol PKCompactNavigationContainerControllerDelegate, PKObservableContentContainer, UICoordinateSpace;

@interface PKCompactNavigationContainerController : UIViewController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, PKContentContainerObserver>
{
    UIViewController *_presentationContextVC;
    _Bool _isRoot;
    struct CGSize _childViewControllerPreferredContentSize;
    double _minimumNavigationControllerHeight;
    struct CGRect _statusBarFrame;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _Bool _transitioning;
    _Bool _presentingNavigationController;
    UINavigationController<PKObservableContentContainer> *_containedNavigationController;
    id <UICoordinateSpace> _exclusionCoordinateSpace;
    id <PKCompactNavigationContainerControllerDelegate> _delegate;
    struct CGRect _exclusionRect;
}

+ (id)dimmingColor;
@property(nonatomic, getter=isPresentingNavigationController) _Bool presentingNavigationController; // @synthesize presentingNavigationController=_presentingNavigationController;
@property(nonatomic) __weak id <PKCompactNavigationContainerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <UICoordinateSpace> exclusionCoordinateSpace; // @synthesize exclusionCoordinateSpace=_exclusionCoordinateSpace;
@property(readonly, nonatomic) struct CGRect exclusionRect; // @synthesize exclusionRect=_exclusionRect;
@property(readonly, nonatomic) UINavigationController<PKObservableContentContainer> *containedNavigationController; // @synthesize containedNavigationController=_containedNavigationController;
- (void).cxx_destruct;
- (void)statusBarFrameWillChange:(id)arg1;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)tapGestureRecognized:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)contentContainer:(id)arg1 preferredContentSizeDidChangeForChildContentContainer:(id)arg2;
- (void)updateChildViewControllerSizeWithTopViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_backgroundColor;
- (void)setExclusionRect:(struct CGRect)arg1 withCoordinateSpace:(id)arg2;
- (struct CGSize)modalPresentationSize;
- (struct CGSize)childViewControllerSizeForNavigationControllerSize:(struct CGSize)arg1;
- (struct CGSize)navigationControllerSizeForChildViewControllerPreferredContentSize:(struct CGSize)arg1 isRoot:(_Bool)arg2;
- (struct CGSize)childViewControllerPreferredContentSizeForSize:(struct CGSize)arg1 isRoot:(_Bool)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNavigationController:(id)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
