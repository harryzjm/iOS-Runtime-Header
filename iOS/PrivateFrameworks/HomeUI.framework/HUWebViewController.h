//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HUPreloadableViewController-Protocol.h>
#import <HomeUI/WKNavigationDelegate-Protocol.h>

@class HMHTMLDocument, NAFuture, NSString, NSURL, WKWebView;

@interface HUWebViewController : UIViewController <WKNavigationDelegate, HUPreloadableViewController>
{
    _Bool _showsShareButton;
    _Bool _zoomEnabled;
    _Bool _scrollEnabled;
    NSURL *_URL;
    HMHTMLDocument *_document;
    WKWebView *_webView;
    NAFuture *_loadingFuture;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NAFuture *loadingFuture; // @synthesize loadingFuture=_loadingFuture;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) _Bool zoomEnabled; // @synthesize zoomEnabled=_zoomEnabled;
@property(nonatomic) _Bool showsShareButton; // @synthesize showsShareButton=_showsShareButton;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(readonly, copy, nonatomic) HMHTMLDocument *document; // @synthesize document=_document;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)_share:(id)arg1;
- (_Bool)_shouldShare;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)hu_preloadContent;
- (void)_startLoadWithDocument:(id)arg1 orMaybeAURL:(id)arg2;
- (id)_initWithDocument:(id)arg1 orMaybeAURL:(id)arg2;
- (id)initWithDocument:(id)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
