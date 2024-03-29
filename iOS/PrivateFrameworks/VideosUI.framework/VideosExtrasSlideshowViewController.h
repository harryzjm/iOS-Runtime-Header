//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, NSTimer, UIImage, VideosExtrasConstrainedArtworkContainerView;
@protocol VideosExtrasSlideshowViewControllerDataSource;

__attribute__((visibility("hidden")))
@interface VideosExtrasSlideshowViewController : UIViewController
{
    _Bool _animatingTransition;
    _Bool _viewVisible;
    id <VideosExtrasSlideshowViewControllerDataSource> _dataSource;
    unsigned long long _transitionStyle;
    double _transitionInterval;
    unsigned long long _visibleImageIndex;
    VideosExtrasConstrainedArtworkContainerView *_disappearingImageContainerView;
    VideosExtrasConstrainedArtworkContainerView *_imageContainerView;
    UIImage *_nextImage;
    NSTimer *_transitionTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *transitionTimer; // @synthesize transitionTimer=_transitionTimer;
@property(retain, nonatomic) UIImage *nextImage; // @synthesize nextImage=_nextImage;
@property(retain, nonatomic) VideosExtrasConstrainedArtworkContainerView *imageContainerView; // @synthesize imageContainerView=_imageContainerView;
@property(retain, nonatomic) VideosExtrasConstrainedArtworkContainerView *disappearingImageContainerView; // @synthesize disappearingImageContainerView=_disappearingImageContainerView;
@property(nonatomic, getter=isViewVisible) _Bool viewVisible; // @synthesize viewVisible=_viewVisible;
@property(nonatomic, getter=isAnimatingTransition) _Bool animatingTransition; // @synthesize animatingTransition=_animatingTransition;
@property(nonatomic) unsigned long long visibleImageIndex; // @synthesize visibleImageIndex=_visibleImageIndex;
@property(nonatomic) double transitionInterval; // @synthesize transitionInterval=_transitionInterval;
@property(nonatomic) unsigned long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
@property(nonatomic) __weak id <VideosExtrasSlideshowViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_transitionToNextImageIfAppropriate;
- (void)_reload;
- (void)_prepareNextImageAndScheduleTransitionTimerIfAppropriate;
- (unsigned long long)_numberOfImages;
- (void)_loadImageContainerViewIfAppropriateWithImage:(id)arg1;
- (void)_transitionDidComplete;
- (void)_performWipeTransition;
- (void)_performPushTransition;
- (void)_performInstantaneousTransition;
- (void)_performDissolveTransition;
- (void)_transitionTimerDidFire:(id)arg1;
- (void)_scheduleTransitionTimer;
- (void)_invalidateTransitionTimer;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(_Bool)arg2;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

