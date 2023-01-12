//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSTranslateToJSValue-Protocol.h>

@class NSDictionary, NSString, NSUUID, WBSWebExtensionAPIEventObjC, WKWebProcessPlugInBrowserContextController;

@interface WBSWebExtensionAPIPortObjC <WBSTranslateToJSValue>
{
    NSUUID *_identifier;
    WKWebProcessPlugInBrowserContextController *_browserContextController;
    WBSWebExtensionAPIEventObjC *_onDisconnect;
    WBSWebExtensionAPIEventObjC *_onMessage;
    _Bool _isDisconnected;
    NSString *_name;
    NSDictionary *_sender;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)postMessage:(id)arg1 outExceptionString:(id *)arg2;
@property(readonly, nonatomic) WBSWebExtensionAPIEventObjC *onMessage;
@property(readonly, nonatomic) WBSWebExtensionAPIEventObjC *onDisconnect;
- (void)disconnect;
- (struct OpaqueJSValue *)translateToJSValueWithJSContext:(struct OpaqueJSContext *)arg1;
- (_Bool)isPropertyAllowed:(id)arg1;
- (id)_messageReceiver;
- (void)dealloc;
- (void)disconnectionRequestReceived;
- (void)_initWithBrowserContextController:(id)arg1 extensionIdentifier:(id)arg2 runtime:(id)arg3 applicationIdentifier:(id)arg4;
- (void)_initWithBrowserContextController:(id)arg1 extensionIdentifier:(id)arg2 runtime:(id)arg3 isForMainWorld:(_Bool)arg4 portIdentifier:(id)arg5 connectInfo:(id)arg6 sender:(id)arg7;
- (void)_initWithBrowserContextController:(id)arg1 extensionIdentifier:(id)arg2 runtime:(id)arg3 isForMainWorld:(_Bool)arg4 targetTabID:(double)arg5 connectInfo:(id)arg6 rawSenderInfo:(id)arg7;
- (void)_initWithBrowserContextController:(id)arg1 extensionIdentifier:(id)arg2 runtime:(id)arg3 isForMainWorld:(_Bool)arg4 targetExtensionID:(id)arg5 connectInfo:(id)arg6 rawSenderInfo:(id)arg7;
@property(readonly, nonatomic) void *cpp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
