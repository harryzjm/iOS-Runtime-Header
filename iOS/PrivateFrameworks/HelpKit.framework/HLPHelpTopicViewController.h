//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <HelpKit/HLPHelpLoadingViewDelegate-Protocol.h>
#import <HelpKit/HLPHelpTopicViewControllerDelegate-Protocol.h>
#import <HelpKit/UIGestureRecognizerDelegate-Protocol.h>
#import <HelpKit/WKNavigationDelegate-Protocol.h>

@class HLPHelpBookController, HLPHelpLoadingView, HLPHelpLocale, HLPHelpTopicHistoryItem, HLPHelpUsageController, NSArray, NSCache, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, NSURL, TPSURLSessionItem, UIBarButtonItem, WKWebView;
@protocol HLPHelpTopicViewControllerDelegate;

@interface HLPHelpTopicViewController : UIViewController <UIGestureRecognizerDelegate, WKNavigationDelegate, HLPHelpTopicViewControllerDelegate, HLPHelpLoadingViewDelegate>
{
    id _interactivePopGestureRecognizerDelegate;
    _Bool _canShowTOC;
    _Bool _webViewLoaded;
    _Bool _RTL;
    HLPHelpBookController *_helpBookController;
    NSString *_assetHostOverride;
    NSMutableArray *_topicHistory;
    UIBarButtonItem *_tocBarButtonItem;
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_forwardBarButtonItem;
    NSLayoutConstraint *_loadingViewTopConstraint;
    _Bool _displayHelpTopicsOnly;
    _Bool _hideDoneButton;
    _Bool _showTopicNameAsTitle;
    id <HLPHelpTopicViewControllerDelegate> _delegate;
    NSURL *_helpBookURL;
    WKWebView *_webView;
    HLPHelpLocale *_locale;
    HLPHelpTopicHistoryItem *_currentTopicHistoryItem;
    HLPHelpLoadingView *_loadingView;
    HLPHelpUsageController *_usageController;
    TPSURLSessionItem *_URLSessionItem;
    NSCache *_topicCache;
    NSArray *_searchTerms;
    NSMutableDictionary *_webViewRequestsMap;
}

@property(retain, nonatomic) NSMutableDictionary *webViewRequestsMap; // @synthesize webViewRequestsMap=_webViewRequestsMap;
@property(retain, nonatomic) NSArray *searchTerms; // @synthesize searchTerms=_searchTerms;
@property(retain, nonatomic) NSCache *topicCache; // @synthesize topicCache=_topicCache;
@property(retain, nonatomic) TPSURLSessionItem *URLSessionItem; // @synthesize URLSessionItem=_URLSessionItem;
@property(retain, nonatomic) HLPHelpUsageController *usageController; // @synthesize usageController=_usageController;
@property(retain, nonatomic) HLPHelpLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) HLPHelpTopicHistoryItem *currentTopicHistoryItem; // @synthesize currentTopicHistoryItem=_currentTopicHistoryItem;
@property(retain, nonatomic) HLPHelpBookController *helpBookController; // @synthesize helpBookController=_helpBookController;
@property(retain, nonatomic) HLPHelpLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSURL *helpBookURL; // @synthesize helpBookURL=_helpBookURL;
@property(nonatomic) _Bool showTopicNameAsTitle; // @synthesize showTopicNameAsTitle=_showTopicNameAsTitle;
@property(nonatomic) _Bool hideDoneButton; // @synthesize hideDoneButton=_hideDoneButton;
@property(nonatomic) _Bool displayHelpTopicsOnly; // @synthesize displayHelpTopicsOnly=_displayHelpTopicsOnly;
@property(nonatomic) __weak id <HLPHelpTopicViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (void)showHelpBookInfo:(id)arg1;
- (void)helpTopicViewControllerShowHelpBookInfo:(id)arg1;
- (void)helpTopicViewController:(id)arg1 topicLoaded:(id)arg2;
- (void)helpTopicViewController:(id)arg1 failToLoadWithError:(id)arg2;
- (void)helpTopicViewControllerDoneButtonTapped:(id)arg1;
- (void)helpTopicViewControllerCurrentTopicIsPassionPoint:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)showWebViewDelay;
- (void)updateHTMLStringPath:(id)arg1 tag:(id)arg2 attribute:(id)arg3;
- (void)loadHTMLString:(id)arg1 anchor:(id)arg2;
- (void)loadHelpTopicItem:(id)arg1 searchTerms:(id)arg2 anchor:(id)arg3 topicAccessType:(long long)arg4;
- (void)loadHelpTopicItem:(id)arg1 searchTerms:(id)arg2 anchor:(id)arg3;
- (void)reloadCurrentTopic;
- (void)saveCurrentTopicItem;
- (void)dismiss;
- (void)showTableOfContent;
- (void)updateNavigationButtons;
- (void)updateScrollPositionForCurrentTopicItem;
- (void)forwardButtonTapped;
- (void)backButtonTapped;
- (void)updateDoneButton;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

