//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7ChatKit30AppCardContainerViewController : UIViewController
{
    MISSING_TYPE *remoteViewController;
    MISSING_TYPE *popoverPresentationLocation;
    MISSING_TYPE *presentationDelegate;
    MISSING_TYPE *sendDelegate;
    MISSING_TYPE *touchTrackingGesture;
    MISSING_TYPE *initialPresentationStyle;
    MISSING_TYPE *cachedCompactDetentHeight;
}

- (void).cxx_destruct;
- (void)closeButtonPressed;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)touchTrackerRecognizedWithGesture:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;

@end

