//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileMailUI/WKUIDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL, UIDragItem, UIDropProposal, UIGestureRecognizer, UIImage, UIScrollView, UITargetedDragPreview, UIView, UIViewController, WKContextMenuElementInfo, WKFrameInfo, WKNavigationAction, WKSecurityOrigin, WKWebView, WKWebViewConfiguration, WKWindowFeatures, _WKActivatedElementInfo, _WKAttachment, _WKFrameHandle, _WKHitTestResult, _WKModalContainerInfo, _WKWebAuthenticationPanel;
@protocol NSSecureCoding, UIContextMenuInteractionCommitAnimating, UIDragSession, UIDropSession;

@protocol WKUIDelegatePrivate <WKUIDelegate>

@optional
- (_Bool)_webView:(WKWebView *)arg1 touchEventsMustRequireGestureRecognizerToFail:(UIGestureRecognizer *)arg2;
- (_Bool)_webViewCanBecomeFocused:(WKWebView *)arg1;
- (_Bool)_webView:(WKWebView *)arg1 gestureRecognizerCouldPinch:(UIGestureRecognizer *)arg2;
- (void)_webView:(WKWebView *)arg1 didDismissFocusedElementViewController:(UIViewController *)arg2;
- (void)_webView:(WKWebView *)arg1 didPresentFocusedElementViewController:(UIViewController *)arg2;
- (void)_webView:(WKWebView *)arg1 didChangeSafeAreaShouldAffectObscuredInsets:(_Bool)arg2;
- (long long)_webView:(WKWebView *)arg1 dataOwnerForDragSession:(id <UIDragSession>)arg2;
- (long long)_webView:(WKWebView *)arg1 dataOwnerForDropSession:(id <UIDropSession>)arg2;
- (NSArray *)_webView:(WKWebView *)arg1 willPerformDropWithSession:(id <UIDropSession>)arg2;
- (UITargetedDragPreview *)_webView:(WKWebView *)arg1 previewForCancellingItem:(UIDragItem *)arg2 withDefault:(UITargetedDragPreview *)arg3;
- (UITargetedDragPreview *)_webView:(WKWebView *)arg1 previewForLiftingItem:(UIDragItem *)arg2 session:(id <UIDragSession>)arg3;
- (UIDropProposal *)_webView:(WKWebView *)arg1 willUpdateDropProposalToProposal:(UIDropProposal *)arg2 forSession:(id <UIDropSession>)arg3;
- (unsigned long long)_webView:(WKWebView *)arg1 willUpdateDataInteractionOperationToOperation:(unsigned long long)arg2 forSession:(id)arg3;
- (void)_webView:(WKWebView *)arg1 dataInteractionOperationWasHandled:(_Bool)arg2 forSession:(id)arg3 itemProviders:(NSArray *)arg4;
- (void)_webView:(WKWebView *)arg1 dataInteraction:(id)arg2 session:(id)arg3 didEndWithOperation:(unsigned long long)arg4;
- (void)_webView:(WKWebView *)arg1 dataInteraction:(id)arg2 sessionWillBegin:(id)arg3;
- (_Bool)_webView:(WKWebView *)arg1 performDataInteractionOperationWithItemProviders:(NSArray *)arg2;
- (NSArray *)_webView:(WKWebView *)arg1 adjustedDataInteractionItemProvidersForItemProvider:(id)arg2 representingObjects:(NSArray *)arg3 additionalData:(NSDictionary *)arg4;
- (NSArray *)_webView:(WKWebView *)arg1 adjustedDataInteractionItemProviders:(NSArray *)arg2;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForImage:(UIImage *)arg2 alternateURL:(NSURL *)arg3 defaultActions:(NSArray *)arg4 elementInfo:(_WKActivatedElementInfo *)arg5;
- (NSURL *)_webView:(WKWebView *)arg1 alternateURLFromImage:(UIImage *)arg2 userInfo:(id *)arg3;
- (void)_webView:(WKWebView *)arg1 getAlternateURLFromImage:(UIImage *)arg2 completionHandler:(void (^)(NSURL *, NSDictionary *))arg3;
- (UIViewController *)_presentingViewControllerForWebView:(WKWebView *)arg1;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForAnimatedImageAtURL:(NSURL *)arg2 defaultActions:(NSArray *)arg3 elementInfo:(_WKActivatedElementInfo *)arg4 imageSize:(struct CGSize)arg5;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForURL:(NSURL *)arg2 defaultActions:(NSArray *)arg3 elementInfo:(_WKActivatedElementInfo *)arg4;
- (UIView *)_contextMenuHintPreviewContainerViewForWebView:(WKWebView *)arg1;
- (struct UIEdgeInsets)_webView:(WKWebView *)arg1 finalObscuredInsetsForScrollView:(UIScrollView *)arg2 withVelocity:(struct CGPoint)arg3 targetContentOffset:(inout struct CGPoint *)arg4;
- (unsigned long long)_webView:(WKWebView *)arg1 indexIntoAttachmentListForElement:(_WKActivatedElementInfo *)arg2;
- (NSArray *)_attachmentListForWebView:(WKWebView *)arg1 sourceIsManaged:(_Bool *)arg2;
- (NSArray *)_attachmentListForWebView:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 alternateActionForURL:(NSURL *)arg2;
- (_Bool)_webView:(WKWebView *)arg1 showCustomSheetForElement:(_WKActivatedElementInfo *)arg2;
- (void)_webView:(WKWebView *)arg1 mouseDidMoveOverElement:(_WKHitTestResult *)arg2 withFlags:(long long)arg3 userInfo:(id <NSSecureCoding>)arg4;
- (void)_webView:(WKWebView *)arg1 contextMenuDidEndForElement:(WKContextMenuElementInfo *)arg2;
- (UIViewController *)_webView:(WKWebView *)arg1 contextMenuContentPreviewForElement:(WKContextMenuElementInfo *)arg2;
- (void)_webView:(WKWebView *)arg1 contextMenuWillPresentForElement:(WKContextMenuElementInfo *)arg2;
- (void)_webView:(WKWebView *)arg1 contextMenuForElement:(WKContextMenuElementInfo *)arg2 willCommitWithAnimator:(id <UIContextMenuInteractionCommitAnimating>)arg3;
- (void)_webView:(WKWebView *)arg1 contextMenuConfigurationForElement:(WKContextMenuElementInfo *)arg2 completionHandler:(void (^)(UIContextMenuConfiguration *))arg3;
- (void)_webView:(WKWebView *)arg1 didDismissPreviewViewController:(UIViewController *)arg2;
- (void)_webView:(WKWebView *)arg1 didDismissPreviewViewController:(UIViewController *)arg2 committing:(_Bool)arg3;
- (void)_webView:(WKWebView *)arg1 commitPreviewedImageWithURL:(NSURL *)arg2;
- (void)_webView:(WKWebView *)arg1 willPreviewImageWithURL:(NSURL *)arg2;
- (void)_webView:(WKWebView *)arg1 commitPreviewedViewController:(UIViewController *)arg2;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForURL:(NSURL *)arg2;
- (_Bool)_webView:(WKWebView *)arg1 fileUploadPanelContentIsManagedWithInitiatingFrame:(WKFrameInfo *)arg2;
- (void)_webView:(WKWebView *)arg1 requestGeolocationAuthorizationForURL:(NSURL *)arg2 frame:(WKFrameInfo *)arg3 decisionHandler:(void (^)(_Bool))arg4;
- (void)_webView:(WKWebView *)arg1 didNotHandleTapAsClickAtPoint:(struct CGPoint)arg2;
- (NSArray *)_webView:(WKWebView *)arg1 actionsForElement:(_WKActivatedElementInfo *)arg2 defaultActions:(NSArray *)arg3;
- (_Bool)_webView:(WKWebView *)arg1 shouldIncludeAppLinkActionsForElement:(_WKActivatedElementInfo *)arg2;
- (void)_webView:(WKWebView *)arg1 decidePolicyForModalContainer:(_WKModalContainerInfo *)arg2 decisionHandler:(void (^)(long long))arg3;
- (void)_webView:(WKWebView *)arg1 requestCookieConsentWithMoreInfoHandler:(void (^)(void))arg2 decisionHandler:(void (^)(_Bool))arg3;
- (void)_webViewEndXRSession:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 requestNotificationPermissionForSecurityOrigin:(WKSecurityOrigin *)arg2 decisionHandler:(void (^)(_Bool))arg3;
- (void)_webView:(WKWebView *)arg1 startXRSessionWithCompletionHandler:(void (^)(id))arg2;
- (void)_webView:(WKWebView *)arg1 requestPermissionForXRSessionOrigin:(NSString *)arg2 mode:(long long)arg3 grantedFeatures:(unsigned long long)arg4 consentRequiredFeatures:(unsigned long long)arg5 consentOptionalFeatures:(unsigned long long)arg6 completionHandler:(void (^)(unsigned long long))arg7;
- (void)_webViewDidDisableInspectorBrowserDomain:(WKWebView *)arg1;
- (void)_webViewDidEnableInspectorBrowserDomain:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 requestSpeechRecognitionPermissionForOrigin:(WKSecurityOrigin *)arg2 decisionHandler:(void (^)(_Bool))arg3;
- (void)_webView:(WKWebView *)arg1 willShareActivityItems:(NSArray *)arg2;
- (void)_webView:(WKWebView *)arg1 handleAutoplayEvent:(long long)arg2 withFlags:(unsigned long long)arg3;
- (void)_webView:(WKWebView *)arg1 runWebAuthenticationPanel:(_WKWebAuthenticationPanel *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 completionHandler:(void (^)(long long))arg4;
- (void)_webView:(WKWebView *)arg1 requestWebAuthenticationNoGestureForOrigin:(WKSecurityOrigin *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)_webView:(WKWebView *)arg1 takeFocus:(long long)arg2;
- (void)_webView:(WKWebView *)arg1 didChangeFontAttributes:(NSDictionary *)arg2;
- (void)_webView:(WKWebView *)arg1 requestStorageAccessPanelForDomain:(NSString *)arg2 underCurrentDomain:(NSString *)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)_webView:(WKWebView *)arg1 didResignInputElementStrongPasswordAppearanceWithUserInfo:(id <NSSecureCoding>)arg2;
- (void)_webView:(WKWebView *)arg1 didInvalidateDataForAttachment:(_WKAttachment *)arg2;
- (void)_webView:(WKWebView *)arg1 didInsertAttachment:(_WKAttachment *)arg2 withSource:(NSString *)arg3;
- (void)_webView:(WKWebView *)arg1 didRemoveAttachment:(_WKAttachment *)arg2;
- (void)_webView:(WKWebView *)arg1 editorStateDidChange:(NSDictionary *)arg2;
- (void)_webView:(WKWebView *)arg1 runBeforeUnloadConfirmPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)_webView:(WKWebView *)arg1 queryPermission:(NSString *)arg2 forOrigin:(WKSecurityOrigin *)arg3 completionHandler:(void (^)(long long))arg4;
- (void)_webView:(WKWebView *)arg1 requestGeolocationPermissionForOrigin:(WKSecurityOrigin *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 decisionHandler:(void (^)(long long))arg4;
- (void)_webView:(WKWebView *)arg1 requestGeolocationPermissionForFrame:(WKFrameInfo *)arg2 decisionHandler:(void (^)(_Bool))arg3;
- (void)_webView:(WKWebView *)arg1 createWebViewWithConfiguration:(WKWebViewConfiguration *)arg2 forNavigationAction:(WKNavigationAction *)arg3 windowFeatures:(WKWindowFeatures *)arg4 completionHandler:(void (^)(WKWebView *))arg5;
- (unsigned long long)_webView:(WKWebView *)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
- (void)_webView:(WKWebView *)arg1 mediaCaptureStateDidChange:(unsigned long long)arg2;
- (void)_webView:(WKWebView *)arg1 checkUserMediaPermissionForURL:(NSURL *)arg2 mainFrameURL:(NSURL *)arg3 frameIdentifier:(unsigned long long)arg4 decisionHandler:(void (^)(NSString *, _Bool))arg5;
- (void)_webView:(WKWebView *)arg1 requestUserMediaAuthorizationForDevices:(unsigned long long)arg2 url:(NSURL *)arg3 mainFrameURL:(NSURL *)arg4 decisionHandler:(void (^)(_Bool))arg5;
- (void)_webView:(WKWebView *)arg1 requestDisplayCapturePermissionForOrigin:(WKSecurityOrigin *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 withSystemAudio:(_Bool)arg4 decisionHandler:(void (^)(long long))arg5;
- (void)_webView:(WKWebView *)arg1 includeSensitiveMediaDeviceDetails:(void (^)(_Bool))arg2;
- (NSDictionary *)_dataDetectionContextForWebView:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 imageOrMediaDocumentSizeChanged:(struct CGSize)arg2;
- (void)_webView:(WKWebView *)arg1 shouldAllowPDFAtURL:(NSURL *)arg2 toOpenFromFrame:(WKFrameInfo *)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)_webView:(WKWebView *)arg1 hasVideoInPictureInPictureDidChange:(_Bool)arg2;
- (void)_webViewDidLosePointerLock:(WKWebView *)arg1;
- (void)_webViewDidShowSafeBrowsingWarning:(WKWebView *)arg1;
- (void)_webViewDidRequestPointerLock:(WKWebView *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)_webViewRequestPointerLock:(WKWebView *)arg1;
- (void)_webViewDidExitFullscreen:(WKWebView *)arg1;
- (void)_webViewDidEnterFullscreen:(WKWebView *)arg1;
- (void)_webViewFullscreenMayReturnToInline:(WKWebView *)arg1;
- (void)_webViewClose:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 printFrame:(_WKFrameHandle *)arg2 pdfFirstPageSize:(struct CGSize)arg3 completionHandler:(void (^)(void))arg4;
- (void)_webView:(WKWebView *)arg1 printFrame:(_WKFrameHandle *)arg2;
- (void)_webView:(WKWebView *)arg1 decideWebApplicationCacheQuotaForSecurityOrigin:(WKSecurityOrigin *)arg2 currentQuota:(unsigned long long)arg3 totalBytesNeeded:(unsigned long long)arg4 decisionHandler:(void (^)(unsigned long long))arg5;
- (void)_webView:(WKWebView *)arg1 decideDatabaseQuotaForSecurityOrigin:(WKSecurityOrigin *)arg2 databaseName:(NSString *)arg3 displayName:(NSString *)arg4 currentQuota:(unsigned long long)arg5 currentOriginUsage:(unsigned long long)arg6 currentDatabaseUsage:(unsigned long long)arg7 expectedUsage:(unsigned long long)arg8 decisionHandler:(void (^)(unsigned long long))arg9;
- (void)_webView:(WKWebView *)arg1 decideDatabaseQuotaForSecurityOrigin:(WKSecurityOrigin *)arg2 currentQuota:(unsigned long long)arg3 currentOriginUsage:(unsigned long long)arg4 currentDatabaseUsage:(unsigned long long)arg5 expectedUsage:(unsigned long long)arg6 decisionHandler:(void (^)(unsigned long long))arg7;
@end

