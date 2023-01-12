//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ECLocalMessageAction, ECLocalMessageActionResults, MFLibraryMessage, MFMailMessageLibrary, MFMailMessageStoreSearchResult, MFMessage, MFMessageCriterion, MFMimePart, MFProgressFilterDataConsumer, NSArray, NSData, NSDate, NSDictionary, NSSet, NSString;
@protocol MFIMAPMessage;

@protocol MFIMAPMailboxTaskManager
- (NSSet *)messageIdRollCall:(NSSet *)arg1;
- (ECLocalMessageActionResults *)replayAction:(ECLocalMessageAction *)arg1;
- (void)updateServerUnreadCountClosingConnection:(_Bool)arg1;
- (void)handleFlagsChangedForMessages:(NSArray *)arg1 flags:(NSDictionary *)arg2 oldFlagsByMessage:(NSDictionary *)arg3;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(_Bool)arg2;
- (MFMailMessageStoreSearchResult *)storeSearchResultMatchingCriterion:(MFMessageCriterion *)arg1 limit:(unsigned int)arg2 offset:(NSDate *)arg3 error:(id *)arg4;
- (NSData *)fetchDataForMessage:(MFMessage<MFIMAPMessage> *)arg1 didDownload:(_Bool *)arg2;
- (_Bool)fetchDataForMimePart:(MFMimePart *)arg1 range:(struct _NSRange)arg2 isComplete:(_Bool *)arg3 consumer:(MFProgressFilterDataConsumer *)arg4;
- (NSData *)fetchHeadersForMessage:(MFLibraryMessage *)arg1;
- (NSData *)fetchDataForMessage:(MFLibraryMessage *)arg1 partial:(_Bool *)arg2;
- (long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(NSString *)arg2 options:(unsigned long long)arg3;
- (long long)fetchMessagesWithMessageIDs:(NSSet *)arg1 andSetFlags:(unsigned long long)arg2;
- (void)reselectMailbox;
- (void)growFetchWindow;
- (void)compact;
- (void)close;
@property(nonatomic, readonly) _Bool canFetchSearchResults;
@property(nonatomic, readonly) _Bool canFetchMessageIDs;
@property(nonatomic, retain) MFMailMessageLibrary *library;
@end

