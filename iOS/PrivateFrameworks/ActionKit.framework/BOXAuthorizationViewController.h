//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ActionKit/NSURLSessionDataDelegate-Protocol.h>
#import <ActionKit/UIWebViewDelegate-Protocol.h>

@class BOXContentClient, NSArray, NSDictionary, NSError, NSMutableData, NSMutableSet, NSString, NSURL, NSURLAuthenticationChallenge, NSURLCredential, NSURLResponse, NSURLSession, UIActivityIndicatorView;

@interface BOXAuthorizationViewController : UIViewController <NSURLSessionDataDelegate, UIWebViewDelegate>
{
    _Bool _isNTLMAuth;
    NSURL *_authorizeURL;
    NSURLSession *_URLSession;
    NSURLResponse *_connectionResponse;
    NSMutableData *_connectionData;
    NSError *_connectionError;
    NSString *_connectionErrorMessage;
    NSURLAuthenticationChallenge *_authenticationChallenge;
    NSURLCredential *_authenticationChallengeCredential;
    NSMutableSet *_hostsThatCanUseWebViewDirectly;
    NSArray *_preexistingCookies;
    unsigned long long _preexistingCookiePolicy;
    BOXContentClient *_SDKClient;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _cancelBlock;
    NSString *_redirectURI;
    NSDictionary *_headers;
    long long _ntlmAuthFailures;
    long long _authChallengeCycles;
    UIActivityIndicatorView *_activityIndicator;
    unsigned long long _backgroundTaskID;
}

@property(nonatomic) unsigned long long backgroundTaskID; // @synthesize backgroundTaskID=_backgroundTaskID;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) long long authChallengeCycles; // @synthesize authChallengeCycles=_authChallengeCycles;
@property(nonatomic) long long ntlmAuthFailures; // @synthesize ntlmAuthFailures=_ntlmAuthFailures;
@property(nonatomic) _Bool isNTLMAuth; // @synthesize isNTLMAuth=_isNTLMAuth;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) NSString *redirectURI; // @synthesize redirectURI=_redirectURI;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) BOXContentClient *SDKClient; // @synthesize SDKClient=_SDKClient;
@property(nonatomic) unsigned long long preexistingCookiePolicy; // @synthesize preexistingCookiePolicy=_preexistingCookiePolicy;
@property(retain, nonatomic) NSArray *preexistingCookies; // @synthesize preexistingCookies=_preexistingCookies;
@property(retain, nonatomic) NSMutableSet *hostsThatCanUseWebViewDirectly; // @synthesize hostsThatCanUseWebViewDirectly=_hostsThatCanUseWebViewDirectly;
@property(retain, nonatomic) NSURLCredential *authenticationChallengeCredential; // @synthesize authenticationChallengeCredential=_authenticationChallengeCredential;
@property(retain, nonatomic) NSURLAuthenticationChallenge *authenticationChallenge; // @synthesize authenticationChallenge=_authenticationChallenge;
@property(retain, nonatomic) NSString *connectionErrorMessage; // @synthesize connectionErrorMessage=_connectionErrorMessage;
@property(retain, nonatomic) NSError *connectionError; // @synthesize connectionError=_connectionError;
@property(retain, nonatomic) NSMutableData *connectionData; // @synthesize connectionData=_connectionData;
@property(retain, nonatomic) NSURLResponse *connectionResponse; // @synthesize connectionResponse=_connectionResponse;
@property(retain, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (_Bool)isLoginRedirectionRequest:(id)arg1;
- (_Bool)webViewCanBeUsedDirectlyForHost:(id)arg1;
- (void)setWebViewCanBeUsedDirectly:(_Bool)arg1 forHost:(id)arg2;
- (void)clearCookies;
- (void)handleConnectionErrorWithError:(id)arg1 message:(id)arg2;
- (void)failAuthenticationWithURLSessionTask:(id)arg1 message:(id)arg2 error:(id)arg3;
- (void)loadAuthorizationURL;
- (void)cancel:(id)arg1;
@property(retain, nonatomic) NSURL *authorizeURL; // @synthesize authorizeURL=_authorizeURL;
- (void)prepareForDismissal;
- (void)viewWillLayoutSubviews;
- (void)endBackgroundTask;
- (void)didReceiveForegroundNotification:(id)arg1;
- (void)didReceiveBackgroundNotification:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithSDKClient:(id)arg1 authorizeURL:(id)arg2 redirectURI:(id)arg3 headers:(id)arg4 completionBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;
- (id)initWithSDKClient:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
