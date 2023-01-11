//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, UIWindow, _UIFallbackPresentationViewController;
@protocol SFAuthenticationViewControllerPresentationDelegate;

__attribute__((visibility("hidden")))
@interface SFAuthenticationViewController <UIViewControllerTransitioningDelegate>
{
    _UIFallbackPresentationViewController *_fallbackPresentationViewController;
    NSString *_callbackURLScheme;
    UIWindow *_presentationContextWindow;
    id <SFAuthenticationViewControllerPresentationDelegate> _presentationDelegate;
    CDUnknownBlockType _dismissCompletionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;
@property(nonatomic) __weak id <SFAuthenticationViewControllerPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void)remoteViewController:(id)arg1 didDecideCookieSharingForURL:(id)arg2 shouldCancel:(_Bool)arg3;
- (void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;
- (void)_restartServiceViewController;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentViewController;
- (void)setDefersAddingRemoteViewController:(_Bool)arg1;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 usingEphemeralSession:(_Bool)arg3 presentationContextWindow:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
