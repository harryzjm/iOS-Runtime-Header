//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <GameCenterUI/GKAuthenticateViewController-Protocol.h>
#import <GameCenterUI/GKExtensionParentViewControllerProtocol-Protocol.h>

@class GKAuthenticateHostViewController, NSError, NSString;

@interface GKHostedAuthenticateViewController : UIViewController <GKExtensionParentViewControllerProtocol, GKAuthenticateViewController>
{
    _Bool _disablesSignIn;
    _Bool _rotationLocked;
    CDUnknownBlockType _completionHandler;
    NSError *_error;
    CDUnknownBlockType _remoteViewReadyHandler;
    GKAuthenticateHostViewController *_extensionHostViewController;
    long long _mode;
    CDUnknownBlockType _dismissCompletionHandler;
}

+ (_Bool)_preventsAppearanceProxyCustomization;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) GKAuthenticateHostViewController *extensionHostViewController; // @synthesize extensionHostViewController=_extensionHostViewController;
@property(copy, nonatomic) CDUnknownBlockType remoteViewReadyHandler; // @synthesize remoteViewReadyHandler=_remoteViewReadyHandler;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic, getter=isRotationLocked) _Bool rotationLocked; // @synthesize rotationLocked=_rotationLocked;
@property(nonatomic) _Bool disablesSignIn; // @synthesize disablesSignIn=_disablesSignIn;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)showPasswordChangeAlertWithURL:(id)arg1;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishAuthenticationWithError:(id)arg1;
- (void)extensionDidFinishWithError:(id)arg1;
- (void)_setupExtensionHostViewController;
- (void)_setupChildViewController;
- (void)continueWithMode:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

