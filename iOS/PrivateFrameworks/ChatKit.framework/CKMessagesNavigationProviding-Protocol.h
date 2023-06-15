//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKComposition, CKConversation, CKCoreChatController, CKSceneDelegateState, NSArray, NSDictionary, NSString, NSURL, UIViewController;
@protocol CKConversationListControllerProtocol;

@protocol CKMessagesNavigationProviding
@property(readonly, nonatomic) UIViewController *presentedViewController;
@property(readonly, nonatomic) CKCoreChatController *chatController;
@property(copy, nonatomic) CDUnknownBlockType deferredHandleURLBlock;
@property(readonly, nonatomic) UIViewController<CKConversationListControllerProtocol> *conversationListController;
- (void)showBusinessChatNotSupportedAlert;
- (void)showSurfAppForCurrentConversationWithAmount:(double)arg1 currency:(NSString *)arg2;
- (void)showStoreForURL:(NSURL *)arg1 fromSourceApplication:(NSString *)arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)dismissDetailsControllerAnimated:(_Bool)arg1;
- (void)presentDetailsViewControllerAnimated:(_Bool)arg1;
- (void)dismissChatControllerIfVisibleAnimated:(_Bool)arg1;
- (void)performSearchForQuery:(NSString *)arg1;
- (_Bool)shouldRestoreToConversationListForState:(CKSceneDelegateState *)arg1;
- (void)showConversationListWithAnimation:(_Bool)arg1;
- (void)showInboxViewControllerAnimated:(_Bool)arg1;
- (void)deleteConversation:(CKConversation *)arg1;
- (CKConversation *)conversationMatchingGUID:(NSString *)arg1;
- (CKConversation *)firstConversationExactlyMatchingDisplayName:(NSString *)arg1;
- (_Bool)showUnreadConversationsWithLastConversation:(CKConversation *)arg1 ignoringMessages:(NSArray *)arg2;
- (_Bool)resumeToConversation:(CKConversation *)arg1;
- (void)showConversationAndMessageForChatGUID:(NSString *)arg1 messageGUID:(NSString *)arg2 withInlineReplyOverlay:(_Bool)arg3 animate:(_Bool)arg4;
- (void)showConversationAndMessageForChatGUID:(NSString *)arg1 messageGUID:(NSString *)arg2 animate:(_Bool)arg3;
- (void)showConversation:(CKConversation *)arg1 animate:(_Bool)arg2 keepAllCurrentlyLoadedMessages:(_Bool)arg3;
- (void)showConversation:(CKConversation *)arg1 animate:(_Bool)arg2 userInitiated:(_Bool)arg3;
- (void)showConversation:(CKConversation *)arg1 animate:(_Bool)arg2;
- (void)showConversationInNewWindow:(CKConversation *)arg1;
- (void)cancelNewMessageCompositionAnimated:(_Bool)arg1;
- (void)showNewMessageCompositionPanelAppendingToExistingDraft:(CKComposition *)arg1 animated:(_Bool)arg2;
- (void)showNewMessageCompositionPanelWithRecipients:(NSArray *)arg1 composition:(CKComposition *)arg2 suggestedReplies:(NSArray *)arg3 animated:(_Bool)arg4 bizIntent:(NSDictionary *)arg5 launchPluginWithBundleID:(NSString *)arg6 pluginLaunchPayload:(NSDictionary *)arg7 simID:(NSString *)arg8 sendMessageHandler:(void (^)(void))arg9;
- (void)showNewMessageCompositionPanelWithRecipients:(NSArray *)arg1 composition:(CKComposition *)arg2 suggestedReplies:(NSArray *)arg3 animated:(_Bool)arg4 bizIntent:(NSDictionary *)arg5 launchPluginWithBundleID:(NSString *)arg6 pluginLaunchPayload:(NSDictionary *)arg7 sendMessageHandler:(void (^)(void))arg8;
- (void)showNewMessageCompositionPanelWithRecipients:(NSArray *)arg1 composition:(CKComposition *)arg2 suggestedReplies:(NSArray *)arg3 animated:(_Bool)arg4 sendMessageHandler:(void (^)(void))arg5;
- (void)showNewMessageCompositionPanelWithRecipients:(NSArray *)arg1 composition:(CKComposition *)arg2 suggestedReplies:(NSArray *)arg3 animated:(_Bool)arg4;
- (void)showNewMessageCompositionPanelWithRecipients:(NSArray *)arg1 composition:(CKComposition *)arg2 animated:(_Bool)arg3;
- (void)showNewMessageCompositionPanel;
- (_Bool)isComposingMessage;
- (_Bool)currentCompositionHasContent;
@end

