//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class LAAuthenticatorServiceConfiguration, NSString, _AuthorizationRemoteViewControllerHost;
@protocol LAAuthorizationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface LAAuthorizationViewController : UIViewController
{
    _AuthorizationRemoteViewControllerHost *_remoteVC;
    CDUnknownBlockType _completion;
    LAAuthenticatorServiceConfiguration *_configuration;
    id <LAAuthorizationViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <LAAuthorizationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)didProvideAuthorizationRequirementWithReply:(CDUnknownBlockType)arg1;
- (void)sheetDidFinishWithError:(id)arg1;
- (void)presentInContainerViewController:(id)arg1;
@property(readonly, nonatomic) _Bool active;
- (void)dismiss;
- (void)loadView;
- (long long)preferredStatusBarStyle;
- (long long)modalTransitionStyle;
- (long long)modalPresentationStyle;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

