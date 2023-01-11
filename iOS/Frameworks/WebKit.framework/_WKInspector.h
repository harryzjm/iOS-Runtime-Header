//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, WKWebView;

@interface _WKInspector : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebInspectorProxy> _inspector;
}

@property(readonly) struct Object *_apiObject;
- (void)_browserExtensionsDisabled:(id)arg1;
- (void)_browserExtensionsEnabled:(id)arg1;
- (void)_setDiagnosticLoggingDelegate:(id)arg1;
- (void)printErrorToConsole:(id)arg1;
- (void)toggleElementSelection;
- (void)togglePageProfiling;
- (void)detach;
- (void)attach;
- (void)showMainResourceForFrame:(id)arg1;
- (void)showResources;
- (void)showConsole;
- (void)close;
- (void)hide;
- (void)show;
- (void)connect;
@property(readonly, nonatomic) _Bool isElementSelectionActive;
@property(readonly, nonatomic) _Bool isProfilingPage;
@property(readonly, nonatomic) _Bool isFront;
@property(readonly, nonatomic) _Bool isVisible;
@property(readonly, nonatomic) _Bool isConnected;
- (id)inspectorWebView;
@property(readonly, nonatomic) WKWebView *webView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
