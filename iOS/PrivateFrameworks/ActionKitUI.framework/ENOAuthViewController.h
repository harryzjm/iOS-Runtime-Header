//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ActionKitUI/UIWebViewDelegate-Protocol.h>

@class NSString, NSURL, UIActivityIndicatorView, UIWebView;
@protocol ENOAuthViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface ENOAuthViewController : UIViewController <UIWebViewDelegate>
{
    _Bool _isSwitchingAllowed;
    id <ENOAuthViewControllerDelegate> _delegate;
    NSURL *_authorizationURL;
    NSString *_oauthCallbackPrefix;
    UIWebView *_webView;
    NSString *_currentProfileName;
    UIActivityIndicatorView *_activityIndicator;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSwitchingAllowed; // @synthesize isSwitchingAllowed=_isSwitchingAllowed;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(copy, nonatomic) NSString *currentProfileName; // @synthesize currentProfileName=_currentProfileName;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSString *oauthCallbackPrefix; // @synthesize oauthCallbackPrefix=_oauthCallbackPrefix;
@property(retain, nonatomic) NSURL *authorizationURL; // @synthesize authorizationURL=_authorizationURL;
@property(nonatomic) __weak id <ENOAuthViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)loadWebView;
- (void)updateUIForNewProfile:(id)arg1 withAuthorizationURL:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)switchProfile:(id)arg1;
- (void)cancel:(id)arg1;
- (void)viewDidLoad;
- (id)initWithAuthorizationURL:(id)arg1 oauthCallbackPrefix:(id)arg2 profileName:(id)arg3 allowSwitching:(_Bool)arg4 delegate:(id)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
