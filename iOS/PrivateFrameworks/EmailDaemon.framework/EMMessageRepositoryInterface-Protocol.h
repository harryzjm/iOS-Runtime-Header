//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class EMContentRequestOptions, EMMailboxScope, EMMessageChangeAction, EMMessageObjectID, EMObjectID, EMQuery, NSArray, NSProgress, NSString, NSURL;
@protocol EMContentItemRequestDelegate, EMMessageListItemQueryResultsObserver, EMMessageRepositoryCountQueryObserver_xpc, EMMessageRepositoryMailboxPredictionObserver_xpc, EMOneTimeCodeObserver_xpc;

@protocol EMMessageRepositoryInterface <NSObject>
- (void)metadataForAddresses:(NSArray *)arg1 completionHandler:(void (^)(NSDictionary *))arg2;
- (void)brandIndicatorForLocation:(NSURL *)arg1 completionHandler:(void (^)(NSData *))arg2;
- (void)parseRemoteContentURLsFromMessageWithObjectID:(EMMessageObjectID *)arg1 requestID:(unsigned long long)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)getRemoteContentURLInfoOrderedBy:(long long)arg1 inReverseOrder:(_Bool)arg2 limit:(long long)arg3 completionHandler:(void (^)(NSArray *, NSArray *, NSError *))arg4;
- (void)noteViewOfRemoteContentLinks:(NSArray *)arg1;
- (void)getURLCacheInformationWithCompletion:(void (^)(EFSandboxedURLWrapper *, unsigned long long))arg1;
- (void)messageObjectIDsForSearchableItemIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(NSArray *, NSDictionary *, NSError *))arg2;
- (void)messageObjectIDForURL:(NSURL *)arg1 completionHandler:(void (^)(EMMessageObjectID *, NSError *))arg2;
- (void)loadOlderMessagesForMailboxes:(NSArray *)arg1;
- (void)predictMailboxForMovingMessages:(NSArray *)arg1 withObserver:(id <EMMessageRepositoryMailboxPredictionObserver_xpc>)arg2 completionHandler:(void (^)(id <EFCancelable>))arg3;
- (void)getCachedMetadataJSONForKey:(NSString *)arg1 messageID:(EMMessageObjectID *)arg2 completionHandler:(void (^)(NSString *))arg3;
- (void)setCachedMetadataJSON:(NSString *)arg1 forKey:(NSString *)arg2 messageID:(EMMessageObjectID *)arg3;
- (void)resetPrecomputedThreadScopesForMailboxScope:(EMMailboxScope *)arg1;
- (void)persistentIDForMessageObjectID:(EMMessageObjectID *)arg1 completionHandler:(void (^)(NSNumber *))arg2;
- (void)requestRichLinkMetadataForRichLinkID:(NSString *)arg1 messageID:(NSString *)arg2 completionHandler:(void (^)(NSData *))arg3;
- (NSProgress *)requestRepresentationForMessageWithID:(EMMessageObjectID *)arg1 requestID:(unsigned long long)arg2 options:(EMContentRequestOptions *)arg3 delegate:(id <EMContentItemRequestDelegate>)arg4 completionHandler:(void (^)(id <_EMDistantContentRepresentation>, EMContentRepresentation *, NSError *))arg5;
- (void)performOneTimeCodeMessageDeletionWithObjectID:(EMMessageObjectID *)arg1 requestID:(unsigned long long)arg2 returnUndoAction:(_Bool)arg3 afterDelay:(double)arg4 completionHandler:(void (^)(EMUndoMessageAction *))arg5;
- (void)performMessageChangeAction:(EMMessageChangeAction *)arg1 requestID:(unsigned long long)arg2 returnUndoAction:(_Bool)arg3 completionHandler:(void (^)(EMUndoMessageAction *))arg4;
- (void)startObservingOneTimeCode:(id <EMOneTimeCodeObserver_xpc>)arg1 completionHandler:(void (^)(id <EFCancelable>))arg2;
- (void)messageListItemsForObjectIDs:(NSArray *)arg1 requestID:(unsigned long long)arg2 observationIdentifier:(EMObjectID *)arg3 loadSummaryForAdditionalObjectIDs:(NSArray *)arg4 completionHandler:(void (^)(NSArray *, NSDictionary *))arg5;
- (void)startCountingQuery:(EMQuery *)arg1 includingServerCountsForMailboxScope:(EMMailboxScope *)arg2 withObserver:(id <EMMessageRepositoryCountQueryObserver_xpc>)arg3 completionHandler:(void (^)(id <EFCancelable>))arg4;
- (void)performQuery:(EMQuery *)arg1 withObserver:(id <EMMessageListItemQueryResultsObserver>)arg2 observationIdentifier:(EMObjectID *)arg3 completionHandler:(void (^)(id <EFCancelable>))arg4;
- (void)performCountQuery:(EMQuery *)arg1 completionHandler:(void (^)(NSNumber *, NSError *))arg2;
- (void)performQuery:(EMQuery *)arg1 limit:(long long)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)isDataAccessible:(void (^)(_Bool))arg1;
@end

