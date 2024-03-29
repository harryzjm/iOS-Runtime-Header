//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, NSTimer, SFWebExtension, WKWebView;
@protocol WBSWebExtensionWindow, _SFPopoverSourceInfo;

__attribute__((visibility("hidden")))
@interface _SFWebExtensionPopupViewController : UIViewController
{
    UIViewController *_parentViewController;
    id <_SFPopoverSourceInfo> _popoverSourceInfo;
    _SFWebExtensionPopupViewController *_referenceToSelf;
    NSTimer *_contentSizeTimeoutTimer;
    NSTimer *_contentSizeStabilizedTimer;
    struct CGSize _previousContentSize;
    SFWebExtension *_webExtension;
    _Bool _hasDisconnectedFromWebExtension;
    _Bool _presentedAsSheet;
    WKWebView *_popupWebView;
    id <WBSWebExtensionWindow> _window;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <WBSWebExtensionWindow> window; // @synthesize window=_window;
@property(readonly, nonatomic) WKWebView *popupWebView; // @synthesize popupWebView=_popupWebView;
- (void)disconnectFromWebExtension;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)_updateDetentForSheetPresentationController:(id)arg1;
- (void)_presentationController:(id)arg1 prepareAdaptivePresentationController:(id)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)_dismissPopup;
- (void)_displayPopup;
- (void)_updatePopoverContentSizeIfNecessary;
- (void)_showExtensionPopupIfNeededAndUpdateContentSize;
- (void)_contentSizeDidStabilize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)_viewControllerDismissalTransitionDidEnd:(id)arg1;
- (id)_remoteInspectionMenuTitleForWebExtension:(id)arg1 popupURL:(id)arg2;
- (id)initWithPopupURL:(id)arg1 webExtension:(id)arg2 window:(id)arg3 parentViewController:(id)arg4 popoverSourceInfo:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

