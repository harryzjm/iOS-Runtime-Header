//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/SKUISlideshowItemViewControllerDelegate-Protocol.h>
#import <StoreKitUI/UIPageViewControllerDataSource-Protocol.h>
#import <StoreKitUI/UIPageViewControllerDelegate-Protocol.h>
#import <StoreKitUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSMutableDictionary, NSOperationQueue, NSString, SKUIClientContext, UIPageViewController;
@protocol SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate;

@interface SKUISlideshowViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, SKUISlideshowItemViewControllerDelegate, UIViewControllerTransitioningDelegate>
{
    SKUIClientContext *_clientContext;
    UIPageViewController *_pageViewController;
    NSOperationQueue *_remoteLoadQueue;
    NSMutableDictionary *_itemViewControllersCache;
    _Bool _overlayVisible;
    _Bool _shouldCancelDelayedOverlayVisibilityChange;
    _Bool _overlayVisibilityWillChangeWithDelay;
    _Bool _lockOverlayControlsVisible;
    struct {
        long long style;
        _Bool hidden;
    } _savedStatusBarState;
    id <SKUISlideshowViewControllerDataSource> _dataSource;
    id <SKUISlideshowViewControllerDelegate> _delegate;
    long long _currentIndex;
}

@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak id <SKUISlideshowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SKUISlideshowViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_restoreStatusBarAppearanceState;
- (void)_saveStatusBarAppearanceState;
- (void)_setOverlayVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_fadeOutOverlayAfterDelay:(unsigned long long)arg1;
- (void)_toggleFadeOverlay;
- (void)_doneButtonTapped:(id)arg1;
- (void)_contentViewTapped:(id)arg1;
- (void)_updateTitleWithIndex:(long long)arg1;
- (void)_updateCurrentIndex;
- (id)_itemViewControllerForIndex:(long long)arg1;
- (void)slideshowItemViewControllerDidDismissWithPinchGesture:(id)arg1 ratio:(double)arg2;
- (void)slideshowItemViewControllerDidBeginPinchGesture:(id)arg1;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)currentItemViewController;
- (void)reloadData;
- (id)animatorForDismissedController:(id)arg1;
- (id)animatorForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

