//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, PKAssertion, PKRemoteAddPassesViewController, _UIAsyncInvocation;
@protocol PKAddPassesViewControllerDelegate;

@interface PKAddPassesViewController : UIViewController
{
    _Bool _viewHasAppeared;
    _Bool _succeeded;
    unsigned long long _presentationSource;
    NSArray *_passDataArray;
    _UIAsyncInvocation *_viewServiceCancelRequest;
    PKRemoteAddPassesViewController *_remoteViewController;
    PKAssertion *_contactlessInterfaceAssertion;
    id <PKAddPassesViewControllerDelegate> _delegate;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (_Bool)canAddPasses;
- (void).cxx_destruct;
@property(nonatomic) id <PKAddPassesViewControllerDelegate> delegate;
- (void)_ingestionDidFinishWithResult:(unsigned long long)arg1;
- (void)_applyRemoteViewController:(id)arg1;
- (void)_requestRemoteViewController;
- (_Bool)succeeded;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)dealloc;
- (id)initWithPasses:(id)arg1 presentationSource:(unsigned long long)arg2;
- (id)initWithPasses:(id)arg1;
- (id)initWithPass:(id)arg1;

@end

