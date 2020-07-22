//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iAd/ADWebProcessDelegate-Protocol.h>
#import <iAd/WKNavigationDelegate-Protocol.h>
#import <iAd/_WKInputDelegate-Protocol.h>

@class ADAdImpressionPublicAttributes, ADTapGestureTimer, ADWebView, NSString, _WKRemoteObjectInterface;
@protocol ADCreativeControllerDelegate, ADWebProcessProxy;

@interface ADCreativeController : NSObject <WKNavigationDelegate, ADWebProcessDelegate, _WKInputDelegate>
{
    id <ADWebProcessProxy> _webProcessProxy;
    id <ADCreativeControllerDelegate> _delegate;
    _Bool _contentVisible;
    _Bool _isExpandedCreativePresented;
    _Bool _browserContextControllerDidLoad;
    ADWebView *_creativeView;
    NSString *_creativeIdentifier;
    ADAdImpressionPublicAttributes *_publicAttributes;
    CDUnknownBlockType _loadCompletion;
    _WKRemoteObjectInterface *_remoteObjectInterface;
    ADTapGestureTimer *_tapGestureTimer;
}

@property(nonatomic) _Bool browserContextControllerDidLoad; // @synthesize browserContextControllerDidLoad=_browserContextControllerDidLoad;
@property(retain, nonatomic) ADTapGestureTimer *tapGestureTimer; // @synthesize tapGestureTimer=_tapGestureTimer;
@property(nonatomic) _Bool isExpandedCreativePresented; // @synthesize isExpandedCreativePresented=_isExpandedCreativePresented;
@property(retain, nonatomic) _WKRemoteObjectInterface *remoteObjectInterface; // @synthesize remoteObjectInterface=_remoteObjectInterface;
@property(copy, nonatomic) CDUnknownBlockType loadCompletion; // @synthesize loadCompletion=_loadCompletion;
@property(retain, nonatomic) ADAdImpressionPublicAttributes *publicAttributes; // @synthesize publicAttributes=_publicAttributes;
@property(copy, nonatomic) NSString *creativeIdentifier; // @synthesize creativeIdentifier=_creativeIdentifier;
@property(nonatomic, getter=isContentVisible) _Bool contentVisible; // @synthesize contentVisible=_contentVisible;
- (_Bool)_webView:(id)arg1 focusShouldStartInputSession:(id)arg2;
- (void)webProcessMRAIDJSODidCallOpen:(id)arg1;
- (void)webProcessMRAIDJSODidCallExpand:(id)arg1 withMaximumSize:(id)arg2;
- (void)webProcessMRAIDJSODidCallCreateCalendarEvent:(id)arg1;
- (void)webProcessMRAIDJSODidCallClose;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webProcessPlugInWillDestroyBrowserContextController;
- (void)webProcessPlugInDidCreateBrowserContextController;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)_requestOpenURL:(id)arg1;
- (void)_updateWebProcessProxyVisibility;
- (void)_callLoadCompletionWithError:(id)arg1;
- (void)adSpaceActionViewControllerWillDismiss:(id)arg1;
- (void)adSpaceActionViewControllerWillPresent:(id)arg1;
- (void)unregisterExportedObjectInterface;
- (void)loadAdImpression:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (struct CGRect)frameForCreativeView;
- (id)_userAgentForUserAgentString:(id)arg1;
- (id)_customUserAgentString;
- (id)_incrementCreativeIdentifier;
@property(nonatomic) __weak id <ADCreativeControllerDelegate> delegate;
- (_Bool)contentVisible;
@property(readonly, nonatomic) ADWebView *creativeView; // @synthesize creativeView=_creativeView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

