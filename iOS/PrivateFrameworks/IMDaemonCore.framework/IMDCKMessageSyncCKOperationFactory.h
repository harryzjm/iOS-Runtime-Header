//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMDCKMessageSyncCKOperationFactory : NSObject
{
}

- (id)fetchArchivedRecordsOperationWithSyncToken:(id)arg1 zoneID:(id)arg2;
- (id)_fetchOptionsDictionaryWithFetchOptions:(id)arg1 andZoneID:(id)arg2;
- (id)deleteMessageCKOperationUsingRecordIDstoDelete:(id)arg1;
- (id)saveMessagesCKOperationUsingRecordsToSave:(id)arg1 operationGroupName:(id)arg2;
- (id)fetchMessageZoneChangesCKOperationUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 operationGroupName:(id)arg4;
- (id)_operationGroupWithName:(id)arg1;
- (id)_messageFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3;

@end

