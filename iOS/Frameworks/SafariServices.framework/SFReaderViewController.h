//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, WKWebView, _SFBrowserContentViewController;
@protocol SFReaderViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFReaderViewController : UIViewController
{
    WKWebView *_originalWebView;
    _SFBrowserContentViewController *_containerViewController;
    id <SFReaderViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SFReaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak _SFBrowserContentViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
- (void)_webView:(id)arg1 contextMenuDidEndForElement:(id)arg2;
- (void)_webView:(id)arg1 contextMenuForElement:(id)arg2 willCommitWithAnimator:(id)arg3;
- (void)_webView:(id)arg1 contextMenuWillPresentForElement:(id)arg2;
- (void)_webView:(id)arg1 contextMenuConfigurationForElement:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) WKWebView *readerWebView;
- (void)loadView;
- (id)initWithOriginalWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

