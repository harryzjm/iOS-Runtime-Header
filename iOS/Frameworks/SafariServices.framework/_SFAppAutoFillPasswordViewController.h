//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SafariServices/SFPasswordRemoteViewControllerDelegate-Protocol.h>
#import <SafariServices/SFQueueingServiceViewControllerProxyDelegate-Protocol.h>

@class NSString, SFPasswordRemoteViewController, SFQueueingServiceViewControllerProxy, _UIAsyncInvocation;
@protocol SFPasswordServiceViewControllerProtocol, _SFAppAutoFillPasswordViewControllerDelegate;

@interface _SFAppAutoFillPasswordViewController : UIViewController <SFPasswordRemoteViewControllerDelegate, SFQueueingServiceViewControllerProxyDelegate>
{
    _UIAsyncInvocation *_cancelViewServiceRequest;
    SFPasswordRemoteViewController *_remoteViewController;
    SFQueueingServiceViewControllerProxy<SFPasswordServiceViewControllerProtocol> *_serviceProxy;
    _Bool _hasAttemptedAuthenticationForPasswords;
    id <_SFAppAutoFillPasswordViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <_SFAppAutoFillPasswordViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)serviceProxyWillQueueInvocation:(id)arg1;
- (void)authenticateToPresentInPopover:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)remoteViewControllerWillDismiss:(id)arg1;
- (void)_addRemoteView;
- (void)_addRemoteViewAsChild;
- (void)viewDidLoad;
- (void)_connectToService;
- (void)_applicationDidEnterBackground:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

