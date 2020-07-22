//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class GKGame, GKRemoteViewController;

@interface GKHostedViewController : UIViewController
{
    _Bool _presentingRemoteViewController;
    _Bool _shouldPresentRemoteViewController;
    _Bool _isRequestingRemoteViewController;
    _Bool _gkIsDisappearing;
    GKGame *_game;
    GKRemoteViewController *_remoteViewController;
    CDUnknownBlockType _remoteViewReadyHandler;
}

@property(nonatomic) _Bool gkIsDisappearing; // @synthesize gkIsDisappearing=_gkIsDisappearing;
@property(nonatomic) _Bool isRequestingRemoteViewController; // @synthesize isRequestingRemoteViewController=_isRequestingRemoteViewController;
@property(copy, nonatomic) CDUnknownBlockType remoteViewReadyHandler; // @synthesize remoteViewReadyHandler=_remoteViewReadyHandler;
@property(nonatomic) _Bool shouldPresentRemoteViewController; // @synthesize shouldPresentRemoteViewController=_shouldPresentRemoteViewController;
@property(nonatomic) _Bool presentingRemoteViewController; // @synthesize presentingRemoteViewController=_presentingRemoteViewController;
@property(retain, nonatomic) GKRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissModalViewControllerAnimated:(_Bool)arg1;
- (void)presentRemoteViewControllerIfNeeded;
- (void)resetRemoteViewController;
- (void)requestRemoteViewControllerIfNeeded;
- (id)_presentingViewController;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didGetRemoteViewController;
- (void)donePressed:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;
- (id)hostSideViewControllerClassName;
- (id)serviceSideViewControllerClassName;

@end

