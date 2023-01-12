//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKServerChangeToken, NSArray, NSDate, SCWZoneDiff;

@protocol SCWZoneStore
@property(copy, nonatomic) NSArray *pendingCommands;
@property(copy, nonatomic) NSArray *serverRecords;
@property(copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property(copy, nonatomic) NSDate *lastDirtyDate;
@property(copy, nonatomic) NSDate *lastSyncDate;
- (void)clearPendingCommandsUpToCount:(unsigned long long)arg1;
- (void)addPendingCommands:(NSArray *)arg1;
- (void)applyServerRecordsDiff:(SCWZoneDiff *)arg1;
@end

