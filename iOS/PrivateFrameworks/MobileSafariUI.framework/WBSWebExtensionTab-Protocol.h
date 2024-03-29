//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL, WBProfile, WBSTranslationContext, WKWebView;
@protocol WBSWebExtensionWindow;

@protocol WBSWebExtensionTab <NSObject>
@property(copy, nonatomic) NSDictionary *extensionIdentifierToDynamicallyInjectedStyleSheets;
@property(readonly, nonatomic) WBSTranslationContext *translationContext;
@property(nonatomic) double zoomFactor;
@property(readonly, nonatomic) unsigned long long changedPropertiesForOnUpdatedWebExtensionEvent;
@property(readonly, nonatomic) WBProfile *profile;
@property(readonly, nonatomic) id <WBSWebExtensionWindow> webExtensionWindow;
@property(readonly, nonatomic) struct CGSize tabViewSize;
@property(readonly, copy, nonatomic) NSString *tabTitle;
@property(readonly, nonatomic) _Bool isInReaderMode;
@property(readonly, nonatomic) _Bool isArticle;
@property(readonly, nonatomic) _Bool isPrivate;
@property(readonly, nonatomic) _Bool isPinnedTab;
@property(readonly, nonatomic) _Bool isFrontmost;
@property(readonly, nonatomic) _Bool isMuted;
@property(readonly, nonatomic) _Bool isAudible;
@property(readonly, nonatomic) _Bool isLoadingComplete;
@property(readonly, nonatomic) NSURL *pendingURLForWebExtensions;
@property(readonly, nonatomic) NSURL *expectedOrCurrentURLOrLastActiveURLIfCrashed;
@property(readonly, nonatomic) NSURL *expectedOrCurrentURL;
@property(readonly, nonatomic) NSURL *urlForExtensions;
@property(readonly, nonatomic) double parentTabIDForWebExtensions;
@property(readonly, copy, nonatomic) NSArray *webViewsThatCanReceiveMessages;
@property(readonly, nonatomic) WKWebView *webViewForExtensions;
@property(readonly, nonatomic) double idForWebExtensions;
- (void)select;
- (void)close;
- (void)goForward;
- (void)goBack;
- (void)reloadFromOrigin;
- (void)reload;
- (void)loadURL:(NSURL *)arg1;
- (void)toggleReader;
- (void)unmute;
- (void)mute;
@end

