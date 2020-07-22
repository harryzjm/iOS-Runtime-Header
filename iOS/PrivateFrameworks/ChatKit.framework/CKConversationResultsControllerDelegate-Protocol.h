//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKConversation, CKConversationSearchResultsController, NSString;

@protocol CKConversationResultsControllerDelegate
- (void)searcherDidComplete:(CKConversationSearchResultsController *)arg1;
- (void)searcher:(CKConversationSearchResultsController *)arg1 userDidDeleteChatGUID:(NSString *)arg2;
- (void)searcher:(CKConversationSearchResultsController *)arg1 userDidSelectChatGUID:(NSString *)arg2 messageGUID:(NSString *)arg3;
- (CKConversation *)searcher:(CKConversationSearchResultsController *)arg1 conversationForChatGUID:(NSString *)arg2;
@end

