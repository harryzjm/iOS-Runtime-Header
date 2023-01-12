//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariSharedUI/WBSBundleWebExtensionsControllerMessageReceiver-Protocol.h>
#import <SafariSharedUI/WKWebProcessPlugInLoadDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, WKWebProcessPlugInController, _WKRemoteObjectInterface;

@interface WBSBundleWebExtensionsController : NSObject <WKWebProcessPlugInLoadDelegate, WBSBundleWebExtensionsControllerMessageReceiver>
{
    NSDictionary *_extensionIdentifierToBaseURIMap;
    NSDictionary *_extensionIdentifierToWebExtensionMap;
    _WKRemoteObjectInterface *_bundleControllerRemoteObjectInterface;
    _WKRemoteObjectInterface *_controllerRemoteObjectInterface;
    _WKRemoteObjectInterface *_messageSender;
    NSMutableDictionary *_extensionToBackgroundPagePendingLoad;
    NSMutableDictionary *_extensionToPopupPendingLoad;
    NSMutableDictionary *_extensionToFullPageContentPendingLoad;
    NSMutableDictionary *_ports;
    _Bool _debugStubUnsuportedAPIs;
    WKWebProcessPlugInController *_plugInController;
}

+ (id)sharedController;
- (void).cxx_destruct;
@property(nonatomic) _Bool debugStubUnsuportedAPIs; // @synthesize debugStubUnsuportedAPIs=_debugStubUnsuportedAPIs;
@property(retain, nonatomic) WKWebProcessPlugInController *plugInController; // @synthesize plugInController=_plugInController;
- (void)crashWebProcess;
- (void)notifyExtensionWithID:(id)arg1 alarmWasFiredWithInfo:(id)arg2;
- (void)notifyContentScriptsForExtensionWithID:(id)arg1 storageWasChangedWithChanges:(id)arg2 areaName:(id)arg3 browsingContext:(id)arg4;
- (void)notifyRelatedWebViewsForExtensionWithID:(id)arg1 storageWasChangedWithChanges:(id)arg2 areaName:(id)arg3;
- (void)_enumerateStorageAPIObjectsInEveryFrameForExtensionWithID:(id)arg1 inWorld:(id)arg2 browsingContext:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)notifyExtensionWithID:(id)arg1 commandWasPerformed:(id)arg2;
- (void)notifyBrowsingContext:(id)arg1 contextMenuItemWasSelectedWithInfo:(id)arg2 tabInfo:(id)arg3;
- (void)notifyExtensionWithID:(id)arg1 windowFocusChangedToWindowWithWindowID:(id)arg2 isNormalWindow:(id)arg3;
- (void)notifyExtensionWithID:(id)arg1 windowWasClosedWithWindowID:(id)arg2 isNormalWindow:(id)arg3;
- (void)notifyExtensionWithID:(id)arg1 windowWasCreatedWithWindowInfo:(id)arg2 isNormalWindow:(id)arg3;
- (void)_enumerateWindowsAPIObjectsForExtensionWithID:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)notifyExtensionWithID:(id)arg1 tabWithID:(id)arg2 wasReplacedWithTabWithID:(id)arg3;
- (void)notifyExtensionWithID:(id)arg1 tabWithID:(id)arg2 wasMovedFromAnotherWindowWithAttachInfo:(id)arg3 detachInfo:(id)arg4;
- (void)notifyExtensionWithID:(id)arg1 tabWithID:(id)arg2 wasMovedWithMoveInfo:(id)arg3;
- (void)notifyExtensionWithID:(id)arg1 tabWithID:(id)arg2 wasUpdatedWithChangeInfo:(id)arg3 tabState:(id)arg4;
- (void)notifyExtensionWithID:(id)arg1 tabWithID:(id)arg2 wasClosedWithRemoveInfo:(id)arg3;
- (void)notifyExtensionWithID:(id)arg1 tabWasSelectedWithActiveInfo:(id)arg2;
- (void)notifyExtensionWithID:(id)arg1 tabWasCreatedWithState:(id)arg2;
- (void)_enumerateTabsAPIObjectsForExtensionWithID:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)notifyExtensionWithID:(id)arg1 resourceLoad:(id)arg2 inTabWithID:(double)arg3 windowID:(double)arg4 didCompleteWithError:(id)arg5 response:(id)arg6;
- (void)notifyExtensionWithID:(id)arg1 resourceLoad:(id)arg2 inTabWithID:(double)arg3 windowID:(double)arg4 didReceiveResponse:(id)arg5;
- (void)notifyExtensionWithID:(id)arg1 resourceLoad:(id)arg2 inTabWithID:(double)arg3 windowID:(double)arg4 didReceiveChallenge:(id)arg5;
- (void)notifyExtensionWithID:(id)arg1 resourceLoad:(id)arg2 inTabWithID:(double)arg3 windowID:(double)arg4 didPerformHTTPRedirection:(id)arg5 newRequest:(id)arg6;
- (id)headersReceivedDetails:(id)arg1 tabID:(double)arg2 response:(id)arg3;
- (void)notifyExtensionWithID:(id)arg1 resourceLoad:(id)arg2 inTabWithID:(double)arg3 windowID:(double)arg4 didSendRequest:(id)arg5;
- (id)convertRequestBodyToWebExtensionFormat:(id)arg1;
- (id)webRequestDetailsForResourceLoad:(id)arg1;
- (void)notifyExtensionWithID:(id)arg1 navigationFailedWithDetails:(id)arg2;
- (void)notifyExtensionWithID:(id)arg1 navigationFinishedWithDetails:(id)arg2;
- (void)notifyExtensionWithID:(id)arg1 navigationCommittedWithDetails:(id)arg2;
- (void)notifyExtensionWithID:(id)arg1 navigationStartedWithDetails:(id)arg2;
- (void)_enumerateWebNavigationAPIObjectsForExtensionWithID:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateWebRequestAPIObjectsForExtensionWithID:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)convertHeaderFieldsToWebExtensionFormat:(id)arg1;
- (void)receiveMessage:(id)arg1 fromSender:(id)arg2 toExtensionWithID:(id)arg3 inBrowsingContext:(id)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (void)receiveMessage:(id)arg1 fromSender:(id)arg2 inBrowsingContext:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (void)receiveMessage:(id)arg1 fromSender:(id)arg2 inBrowsingContext:(id)arg3 inWorld:(id)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (_Bool)receiveMessage:(id)arg1 fromSender:(id)arg2 inFrame:(id)arg3 inWorld:(id)arg4 replySender:(id)arg5;
- (void)disconnectPortWithID:(id)arg1;
- (void)receiveConnectionRequestInBrowsingContext:(id)arg1 extensionID:(id)arg2 portID:(id)arg3 connectInfo:(id)arg4 sender:(id)arg5;
- (void)receiveConnectionRequestToBackgroundPageInBrowsingContext:(id)arg1 portID:(id)arg2 connectInfo:(id)arg3 sender:(id)arg4;
- (void)_receiveConnectionRequestWithPortID:(id)arg1 inBrowsingContext:(id)arg2 inWorld:(id)arg3 connectInfo:(id)arg4 sender:(id)arg5;
- (void)addPort:(id)arg1 withID:(id)arg2;
- (void)receiveMessage:(id)arg1 inBrowsingContext:(id)arg2 toPortWithID:(id)arg3;
- (void)fullPageExtensionContentWithHandle:(id)arg1 aboutToLoadForExtensionWithID:(id)arg2 inTabWithID:(id)arg3 windowID:(id)arg4;
- (void)popupWithHandle:(id)arg1 didCloseForExtensionWithID:(id)arg2;
- (void)popupWithHandle:(id)arg1 aboutToLoadForExtensionWithID:(id)arg2 inWindowWithID:(id)arg3;
- (void)backgroundPageWithHandle:(id)arg1 didCloseForExtensionWithID:(id)arg2;
- (void)backgroundPageWithHandle:(id)arg1 aboutToLoadForExtensionWithID:(id)arg2;
- (void)dispatchOnInstalledToHandle:(id)arg1 details:(id)arg2;
- (void)dispatchOnStartupToHandle:(id)arg1;
- (void)dispatchToolbarItemClickedToHandle:(id)arg1 tabState:(id)arg2;
- (void)_enumerateNamespaceObjectsForExtensionWithID:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateNamespaceObjectsInEveryFrameForBrowsingContext:(id)arg1 inWorld:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_enumerateNamespaceObjectsForFrameAndChildrenOfFrame:(id)arg1 inWorld:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)_namespaceObjectFromHandle:(id)arg1 inWorld:(id)arg2;
- (id)_namespaceObjectInFrame:(id)arg1 inWorld:(id)arg2;
- (struct OpaqueJSContext *)_globalContextFromHandle:(id)arg1 inWorld:(id)arg2;
- (id)_browserContextControllerFromHandle:(id)arg1;
- (id)controllerProxyForBrowserContextController:(id)arg1;
- (void)unregisterRemoteObjectFromBrowserContextController:(id)arg1;
- (void)registerRemoteObjectWithBrowserContextController:(id)arg1;
- (id)baseURIForExtensionWithIdentifier:(id)arg1;
- (void)setExtensionIdentifierToExtensionDataMap:(id)arg1;
- (id)extensionForUniqueIdentifier:(id)arg1;
- (void)setExtensionIdentifierToBaseURIMap:(id)arg1;
- (void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3;
- (id)_extensionIdentifierFromFrame:(id)arg1 world:(id)arg2;
- (id)_extensionIdentifierFromBaseURIHost:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
