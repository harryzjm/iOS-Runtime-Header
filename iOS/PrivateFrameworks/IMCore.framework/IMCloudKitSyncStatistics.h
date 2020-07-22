//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMCloudKitSyncStatistics : NSObject
{
    unsigned long long _syncedChatCount;
    unsigned long long _totalChatCount;
    unsigned long long _syncedAttachmentCount;
    unsigned long long _totalAttachmentCount;
    unsigned long long _syncedMessageCount;
    unsigned long long _totalMessageCount;
    unsigned long long _totalRecordCount;
    unsigned long long _syncedRecordCount;
}

+ (id)percentStringFromTotal:(double)arg1 count:(double)arg2;
+ (id)percentStringFromDouble:(double)arg1;
+ (double)calculatePercentageOfTotal:(double)arg1 count:(double)arg2;
+ (id)_createSyncStatisticsDictionaryForSyncControllerSyncState:(unsigned long long)arg1 syncType:(unsigned long long)arg2 count:(double)arg3 max:(double)arg4;
+ (id)_createSyncStatisticsDictionary:(long long)arg1 messageSyncCount:(long long)arg2 chatCount:(long long)arg3 chatSyncCount:(long long)arg4 attachmentCount:(long long)arg5 attachmentSyncCount:(long long)arg6;
@property(nonatomic) unsigned long long syncedRecordCount; // @synthesize syncedRecordCount=_syncedRecordCount;
@property(nonatomic) unsigned long long totalRecordCount; // @synthesize totalRecordCount=_totalRecordCount;
@property(nonatomic) unsigned long long totalMessageCount; // @synthesize totalMessageCount=_totalMessageCount;
@property(nonatomic) unsigned long long syncedMessageCount; // @synthesize syncedMessageCount=_syncedMessageCount;
@property(nonatomic) unsigned long long totalAttachmentCount; // @synthesize totalAttachmentCount=_totalAttachmentCount;
@property(nonatomic) unsigned long long syncedAttachmentCount; // @synthesize syncedAttachmentCount=_syncedAttachmentCount;
@property(nonatomic) unsigned long long totalChatCount; // @synthesize totalChatCount=_totalChatCount;
@property(nonatomic) unsigned long long syncedChatCount; // @synthesize syncedChatCount=_syncedChatCount;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)_statsString:(id)arg1 count:(long long)arg2 total:(long long)arg3;
@property(readonly, nonatomic) double percentSynced;
- (id)initWithStatisticsDictionary:(id)arg1;
- (id)_syncStatisticsDictionary;

@end

