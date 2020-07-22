//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NNMKAggregateReporter : NSObject
{
}

+ (void)reportCellRighSwipeActionIgnored;
+ (void)reportCellSwipeActionTypeExecuted:(id)arg1;
+ (void)reportCellRighSwipeActionChanged:(id)arg1;
+ (void)reportNotificationAction:(unsigned long long)arg1;
+ (void)_postGroupedValue:(float)arg1 key:(id)arg2;
+ (void)_postGroupedSizeInBytes:(long long)arg1 key:(id)arg2;
+ (void)_postGroupedDelayInMS:(long long)arg1 key:(id)arg2;
+ (void)_addScalarValue1ToKey:(id)arg1;
+ (void)_postRawValue:(long long)arg1 key:(id)arg2;
+ (long long)_delayInMSFromDateSynced:(id)arg1;
+ (id)_buildVersion;
+ (_Bool)_reportingEnabled;
+ (void)reportComposedMessageSendFailure;
+ (void)reportMessageRepliedFromApp:(_Bool)arg1;
+ (void)reportNewMessageComposedFromApp:(_Bool)arg1 mailto:(_Bool)arg2;
+ (void)reportComposedMessageSizeInBytes:(unsigned long long)arg1;
+ (void)reportFetchOlderMessages;
+ (void)reportMailAttachmentHandoffContinuedByNotification:(_Bool)arg1;
+ (void)reportMailAttachmentHandoffAdvertisedByNotification:(_Bool)arg1;
+ (void)reportMailLinkHandoffContinuedByNotification:(_Bool)arg1;
+ (void)reportMailLinkHandoffAdvertisedByNotification:(_Bool)arg1;
+ (void)reportHaltSyncRequestedFromWatch:(_Bool)arg1;
+ (void)reportFullSyncRequestedFromWatch:(_Bool)arg1 corruptionDetected:(_Bool)arg2 migrationRelated:(_Bool)arg3 idsFailureRelated:(_Bool)arg4 fullSyncVersionMatchRelated:(_Bool)arg5;
+ (void)reportRenderedNotificationUsingLocalContent:(_Bool)arg1 mailboxSynced:(_Bool)arg2 messageSynced:(_Bool)arg3 contentDownloaded:(_Bool)arg4;
+ (void)reportMoreMessagesReceivedConversationSpecific:(_Bool)arg1 fullSyncVersion:(unsigned long long)arg2 dateSynced:(id)arg3;
+ (void)reportMailboxSelectionChanged:(id)arg1 fromWatch:(_Bool)arg2;
+ (void)reportContentDisplayedForMessageWithId:(id)arg1 hasMainAlternative:(_Bool)arg2 hasTextAlternative:(_Bool)arg3;
+ (void)reportImageAttachmentReceivedForMessageWithId:(id)arg1 contentId:(id)arg2 sizeInBytes:(unsigned long long)arg3 fullSyncVersion:(unsigned long long)arg4 dateSynced:(id)arg5;
+ (void)reportContentReceivedForMessageWithId:(id)arg1 sizeInBytes:(unsigned long long)arg2 fullSyncVersion:(unsigned long long)arg3 dateSynced:(id)arg4;
+ (void)reportMessageDeletionReceivedForMessageWithId:(id)arg1 fullSyncVersion:(unsigned long long)arg2 dateSynced:(id)arg3;
+ (void)reportMessageUpdateReceivedForMessageWithId:(id)arg1 fullSyncVersion:(unsigned long long)arg2 dateSynced:(id)arg3;
+ (void)reportMessageReceivedWithId:(id)arg1 willGenerateNotification:(_Bool)arg2 fullSyncVersion:(unsigned long long)arg3 dateSynced:(id)arg4;

@end
