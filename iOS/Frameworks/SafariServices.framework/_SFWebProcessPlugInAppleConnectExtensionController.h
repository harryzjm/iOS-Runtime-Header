//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariServices/_SFAppleConnectExtensionMessageReceiver-Protocol.h>

@class NSString, WKWebProcessPlugInScriptWorld, _SFWebProcessPlugInPageController, _WKRemoteObjectInterface;
@protocol _SFAppleConnectExtensionContentScriptMessageReceiver;

__attribute__((visibility("hidden")))
@interface _SFWebProcessPlugInAppleConnectExtensionController : NSObject <_SFAppleConnectExtensionMessageReceiver>
{
    _SFWebProcessPlugInPageController *_pageController;
    id <_SFAppleConnectExtensionContentScriptMessageReceiver> _appleConnectExtensionContentScriptMessageReceiver;
    _WKRemoteObjectInterface *_extensionMessageReceiverInterface;
    WKWebProcessPlugInScriptWorld *_isolatedWorld;
}

- (void).cxx_destruct;
- (void)dispatchMessageToContentScriptWithName:(id)arg1 userInfo:(id)arg2;
- (void)dispatchMessageFromContentScript:(id)arg1 userInfo:(id)arg2;
- (id)_appleConnectExtensionContentScriptMessageReceiver;
- (void)injectAppleConnectBindingsForFrame:(id)arg1 inScriptWorld:(id)arg2;
- (void)invalidate;
- (id)initWithPageController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
