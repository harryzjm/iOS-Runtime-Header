//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSWebExtensionToolbarItem.h>

#import <SafariServices/WBSWebExtensionToolbarItemImplementation-Protocol.h>
#import <SafariServices/WKUIDelegate-Protocol.h>

@class NSNumber, NSString, UIViewController, WBSWebExtensionData, _SFWebExtensionActivity, _SFWebExtensionPopupViewController, _SFWebExtensionSettingsAlertItem;
@protocol WBSWebExtensionTab, WBSWebExtensionWindow;

@interface SFWebExtensionPageMenuController : WBSWebExtensionToolbarItem <WBSWebExtensionToolbarItemImplementation, WKUIDelegate>
{
    WBSWebExtensionData *_webExtension;
    UIViewController *_parentViewController;
    _SFWebExtensionPopupViewController *_popupViewController;
    id <WBSWebExtensionTab> _tab;
    _SFWebExtensionSettingsAlertItem *_alertItem;
    _SFWebExtensionActivity *_activityItem;
    NSNumber *_tabIdentifier;
}

+ (id)_imageViewForWarningTriangleImage:(id)arg1;
+ (id)badgeViewForText:(id)arg1;
- (void).cxx_destruct;
- (id)webExtension;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webViewDidClose:(id)arg1;
- (void)popupDidNavigateRequestingNewWindowToURL:(id)arg1;
- (void)didSetIcon:(id)arg1 forTabWithIdentifier:(id)arg2;
- (void)didSetEnabledState:(_Bool)arg1 forTabWithIdentifier:(id)arg2;
- (void)didSetBadgeText:(id)arg1 forTabWithIdentifier:(id)arg2;
- (_Bool)showingExtensionPopup;
@property(readonly, nonatomic) id <WBSWebExtensionWindow> windowDisplayingPopupWebView;
- (id)popupWebView;
- (void)_createTabWithURL:(id)arg1;
- (_Bool)shouldShowWarningTriangleImageForTab:(id)arg1;
- (id)alertItemForTab:(id)arg1;
- (id)activityForTab:(id)arg1;
- (void)dismissPopupImmediatelyIfNecessary;
- (void)performActionForTab:(id)arg1 parentViewController:(id)arg2 popoverSourceInfo:(id)arg3;
- (void)_loadWebExtensionPopupURL:(id)arg1 parentViewController:(id)arg2 popoverSourceInfo:(id)arg3 forTab:(id)arg4;
- (id)iconForTab:(id)arg1 size:(struct CGSize)arg2;
- (id)iconForTab:(id)arg1;
- (id)initWithExtension:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
